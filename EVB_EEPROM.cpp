#include "ADE9000wEEPROM.h"
#include <Wire.h>

/**
 * Description: Writes one byte of data to EEPROM
 * Input: Data and EEPROM address
 * Output:-
 */
void ADE9kwEVBeeprom:: writeByteToEeprom(uint16_t dataAddress, uint8_t data)
{
  uint8_t temp;
  temp= (dataAddress>>8);
  Wire.beginTransmission(ADE9000_EEPROM_ADDRESS); // device address is specified in datasheet
  Wire.write(byte(temp));            // MSB Address
  temp= (dataAddress & (0xFF));
  Wire.write(byte(temp));           //LSB Address
  Wire.write(byte(data));             //
  Wire.endTransmission();     // stop transmitting
}

/**
 * Description: REads one byte of data from EEPROM
 * Input: EEPROM address
 * Output:- 8 bit data
 */
uint8_t ADE9kwEVBeeprom:: ReadByteFromEeprom(uint16_t dataAddress)
{
  uint8_t returndata;
  uint8_t temp;
  temp= (dataAddress>>8);
  Wire.beginTransmission(byte(ADE9000_EEPROM_ADDRESS)); // device address is specified in datasheet
  Wire.write(byte(temp)); // MSB
  temp= (dataAddress & (0xFF));
  Wire.write(byte(temp)); // LSB
  Wire.endTransmission();
  Wire.requestFrom(byte(ADE9000_EEPROM_ADDRESS),(uint8_t)1);
  if (Wire.available())
  {
    returndata = Wire.read();
  }
  return returndata;
}

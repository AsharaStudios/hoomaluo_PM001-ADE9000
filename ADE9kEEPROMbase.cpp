#include "ADE9000wEEPROM.h"

/**
 * Description: Writes 4 bytes into EEPROM in continuous locations
 * Input: Data and EEPROM address
 * Output:-
 */
void ADE9000EEPROMbase:: writeWordToEeprom(uint16_t address, uint32_t data)
{
  uint8_t temp = (data &(0xFF));  //LSB
  writeByteToEeprom(address,temp);
  delay(10);
  temp = ((data>>8) &(0xFF));
  writeByteToEeprom(address+1,temp);
  temp = ((data>>16) &(0xFF));
  delay(10);
  writeByteToEeprom(address+2,temp);
  temp = ((data>>24) &(0xFF)); //MSB
  delay(10);
  writeByteToEeprom(address+3,temp);
  delay(10);
  uint32_t returnedValue = readWordFromEeprom(address);

  // TODO: Move all this depuration outside library, maybe to an example
  Serial.print("[EEPROM] Addr:");
  Serial.print(address);
  Serial.print(" - write:0x");
  Serial.print(data,HEX);
  Serial.print(" - read:0x");
  Serial.print(returnedValue,HEX);
  Serial.print(" - status:");
  Serial.println((returnedValue==data)?"OK":"ERROR");
}

/**
 * Description: Reads 4 bytes stored in EEPROM
 * Input: Starting EEPROM address
 * Output:- 4 byte wide data
 */
uint32_t ADE9000EEPROMbase:: readWordFromEeprom(uint16_t address)
{
  uint32_t returndata;
  uint8_t temp = ReadByteFromEeprom(address);
  returndata = (uint32_t)temp;    //LSB
  delay(10);
  temp = ReadByteFromEeprom(address+1);
  returndata |= ((uint32_t)temp<<8);
  delay(10);
  temp = ReadByteFromEeprom(address+2);
  returndata |= ((uint32_t)temp<<16);
  delay(10);
  temp = ReadByteFromEeprom(address+3);
  returndata |= ((uint32_t)temp<<24);  //MSB
  return returndata;
}

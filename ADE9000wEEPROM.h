/*
 * ADE9000 library with Evaluation Board EEPROM
 *
 * Include this header only if you are using a 24LC32A-I/MC EEPROM
 * as detailed on the Evaluation Boards from Analog Devices for the ADE9000
 */

#ifndef ADE9000WEEEPROM_H
#define ADE9000WEEEPROM_H

#include "ADE9000API.h"

// EEPROM interface (to be extended, not used directly!)
class ADE9000EEPROMbase : public ADE9000Class {

public:
    void writeWordToEeprom(uint16_t address, uint32_t data);
    uint32_t readWordFromEeprom(uint16_t address);

    // User must implement the following functions:

    virtual void writeByteToEeprom(uint16_t dataAddress, uint8_t data) = 0;
    virtual uint8_t ReadByteFromEeprom(uint16_t dataAddress) = 0;
};

// Implementation example, to use the EEPROM from Evalation Board
class ADE9kwEVBeeprom : public ADE9000EEPROMbase {

public:
    void writeByteToEeprom(uint16_t dataAddress, uint8_t data) = 0;
    uint8_t ReadByteFromEeprom(uint16_t dataAddress) = 0;
};

#endif // ADE9000WEEEPROM_H not defined!

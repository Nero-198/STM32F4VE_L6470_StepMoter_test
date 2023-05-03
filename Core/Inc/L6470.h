/*
 * L6470.h
 *
 *  Created on: May 3, 2023
 *      Author: iroen
 */

#ifndef L6470_H_
#define L6470_H_

#include <main.h>

class L6470 {
public:
	L6470(SPI_HandleTypeDef* hspi);
	virtual ~L6470();

	void sendCommand(uint8_t command ,uint8_t data, uint16_t size);
	void receiveDate(uint8_t data, uint16_t size);
private:

};

#endif /* L6470_H_ */

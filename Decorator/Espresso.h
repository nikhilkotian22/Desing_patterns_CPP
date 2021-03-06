/*
 * Espresso.h
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#ifndef ESPRESSO_H_
#define ESPRESSO_H_

#include "CondimentDecorator.h"

class Espresso: public CondimentDecorator {
public:
	Espresso();
	~Espresso();
	virtual  float getCost();
	virtual string getDescription();
};

#endif /* ESPRESSO_H_ */

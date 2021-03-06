/*
 * Whip.h
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#ifndef WHIP_H_
#define WHIP_H_

#include "CondimentDecorator.h"

class Whip: public CondimentDecorator {
public:
	Whip(Beverage* beverage);
	~Whip();
	virtual  float getCost();
	virtual string getDescription();;
};

#endif /* WHIP_H_ */

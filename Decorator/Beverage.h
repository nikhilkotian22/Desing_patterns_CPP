/*
 * Beverage.h
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#ifndef BEVERAGE_H_
#define BEVERAGE_H_

#include <string>
using namespace std;
class Beverage {
public:
	virtual float getCost() = 0;
	string description;
	virtual string getDescription() = 0;
};

#endif /* BEVERAGE_H_ */

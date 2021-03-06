/*
 * Soy.cpp
 *
 *  Created on: Sep 24, 2014
 *      Author: Nikhil
 */

#include "Soy.h"

Soy::Soy(Beverage* beverage) {
	this->beverage = beverage;
}

Soy::~Soy() {
}

string Soy::getDescription()
{
	return beverage->getDescription() + ",Soy";
}

float Soy::getCost()
{
	return 0.15 + beverage->getCost();
}

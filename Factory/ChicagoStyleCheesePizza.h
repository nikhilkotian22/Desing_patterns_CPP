/*
 * ChicagoStyleCheesePizza.h
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */

#ifndef CHICAGOSTYLECHEESEPIZZA_H_
#define CHICAGOSTYLECHEESEPIZZA_H_

#include "Pizza.h"

class ChicagoStyleCheesePizza: public Pizza {
public:
	ChicagoStyleCheesePizza()
	{
		name = "Chicago Style cheese pizza";
		dough = "Extra thick crust dough";
		sauce = "Plum Tomato sauce";
	}

	virtual void cut()
	{
		cout<<"Cutting in square pieces"<<endl;
	}

	~ChicagoStyleCheesePizza()
	{

	}
};

#endif /* CHICAGOSTYLECHEESEPIZZA_H_ */

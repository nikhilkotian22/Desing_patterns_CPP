/*
 * PizzaStore.h
 *
 *  Created on: Sep 29, 2014
 *      Author: Nikhil
 */

#ifndef PIZZASTORE_H_
#define PIZZASTORE_H_

#include "Pizza.h"
#include <string>
using namespace std;

class PizzaStore {
protected:
	virtual Pizza* createPizza(string type) = 0;

public:
	PizzaStore()
	{

	}
	~PizzaStore()
	{

	}
	void orderPizza(string type)
	{
		Pizza* pizza;
		pizza = createPizza(type);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}
};

#endif /* PIZZASTORE_H_ */

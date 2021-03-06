/*
 * ChicagoStore.h
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */

#ifndef CHICAGOSTORE_H_
#define CHICAGOSTORE_H_

#include "PizzaStore.h"

class ChicagoStore: public PizzaStore {
public:
	ChicagoStore();
	~ChicagoStore();
protected:
	virtual Pizza* createPizza(string type);
};

#endif /* CHICAGOSTORE_H_ */

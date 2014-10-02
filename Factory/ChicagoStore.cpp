/*
 * ChicagoStore.cpp
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */

#include "ChicagoStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"

ChicagoStore::ChicagoStore() {
	// TODO Auto-generated constructor stub

}

ChicagoStore::~ChicagoStore() {
	// TODO Auto-generated destructor stub
}

Pizza* ChicagoStore::createPizza(string type)
{
	Pizza* pizza;

		if(type.compare("cheese"))
		{
			pizza = new ChicagoStyleCheesePizza();
		}
		else if (type.compare("clam"))
		{
			pizza = new ChicagoStyleClamPizza();
		}
		else
		{
			cout<<"Come on this is just an example"<<endl;
			pizza = new ChicagoStyleClamPizza();
		}
		return pizza;
}

/*
 * NYStore.cpp
 *
 *  Created on: Sep 30, 2014
 *      Author: Nikhil
 */

#include "NYStore.h"
#include<string>
using namespace std;
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"

NYStore::NYStore() {
	// TODO Auto-generated constructor stub

}

NYStore::~NYStore() {
	// TODO Auto-generated destructor stub
}

Pizza* NYStore::createPizza(string type)
{
	Pizza* pizza;

	if(type.compare("cheese"))
	{
		pizza = new NYStyleCheesePizza();
	}
	else if (type.compare("clam"))
	{
		pizza = new NYStyleClamPizza();
	}
	else
	{
		cout<<"Come on this is just an example"<<endl;
		pizza = new NYStyleClamPizza();
	}
	return pizza;
}

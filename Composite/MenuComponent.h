/*
 * MenuComponent.h
 *
 *  Created on: Nov 6, 2014
 *      Author: Nikhil
 */

#ifndef MENUCOMPONENT_H_
#define MENUCOMPONENT_H_

#include<string>
using namespace std;
class MenuComponent {
public:
	MenuComponent(){}
	~MenuComponent(){}

	virtual void add(MenuComponent* menuObj)
	{
		throw 20;
	}

	virtual void remove(MenuComponent* menuObj)
	{
		throw 20;
	}

	virtual MenuComponent* getChild(int counter)
	{
		throw 20;
	}

	virtual string getName()
	{
		throw 20;
	}

	virtual string getDescription()
	{
		throw 20;
	}

	virtual double getPrice()
	{
		throw 20;
	}

	virtual bool isVegetarian()
	{
		throw 20;
	}

	virtual void print()
	{
		throw 20;
	}
};

#endif /* MENUCOMPONENT_H_ */

/*
 * DinerMenu.h
 *
 *  Created on: Nov 2, 2014
 *      Author: Nikhil
 */

#ifndef DINERMENU_H_
#define DINERMENU_H_

#include "Menu.h"
#include "MenuItems.h"
#include<iostream>
using namespace std;

class DinerMenu: public Menu {
public:
	DinerMenu()
	{
		numberOfItems = 0;

		addItem("Vegetarian BLT", "Veg Bacon with Lettuce Tomato in Bread", true, 2.99);
		addItem("BLT", "Bacon with lettuce Tomato in bread", false, 3.29);
	}
	~DinerMenu(){}

	void addItem( string name, string description, bool veggie, double price )
	{
		if( numberOfItems < MAX_ITEMS )
		{
			menuItems[numberOfItems] = new MenuItems( name, description, veggie, price);
			numberOfItems++;
		}
		else
		{
			cout<<"Sorry, no more space"<<endl;
		}
	}

	virtual iterator createIterator()
	{
		/*
		 * Write code for iterator
		 */
	}

private:
	int numberOfItems;
	const int MAX_ITEMS = 4;
	MenuItems *menuItems[MAX_ITEMS];
};

#endif /* DINERMENU_H_ */
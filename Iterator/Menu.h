/*
 * Menu.h
 *
 *  Created on: Nov 2, 2014
 *      Author: Nikhil
 */

#ifndef MENU_H_
#define MENU_H_

#include<Iterator>
using namespace std;

class Menu {
public:
	Menu() {}
	~Menu() {}
	virtual iterator createIterator() = 0;
};

#endif /* MENU_H_ */

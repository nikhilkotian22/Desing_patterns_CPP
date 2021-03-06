/*
 * ChicagoStyleClamPizza.h
 *
 *  Created on: Oct 2, 2014
 *      Author: Nikhil
 */

#ifndef CHICAGOSTYLECLAMPIZZA_H_
#define CHICAGOSTYLECLAMPIZZA_H_

#include "Pizza.h"

class ChicagoStyleClamPizza: public Pizza {
public:
	ChicagoStyleClamPizza()
		{
			name = "Chicago Style clam pizza";
			dough = "Extra thick crust dough";
			sauce = "Plum Tomato sauce";
		}

		virtual void cut()
		{
			cout<<"Cutting in square pieces"<<endl;
		}
};

#endif /* CHICAGOSTYLECLAMPIZZA_H_ */

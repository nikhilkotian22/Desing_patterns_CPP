/*
 * CurrentConditionsDisplay.h
 *
 *  Created on: Sep 22, 2014
 *      Author: Nikhil
 */

#ifndef CURRENTCONDITIONSDISPLAY_H_
#define CURRENTCONDITIONSDISPLAY_H_

#include "DisplayElementInterface.h"
#include "ObserverInterface.h"
#include "SubjectInterface.h"

class CurrentConditionsDisplay: public Observer_Interface,
		public DisplayElement_Interface {
public:
	CurrentConditionsDisplay(Subject_Interface* weatherData);
	~CurrentConditionsDisplay();
	virtual void update(float temp, float humidity, float pressure);
	virtual void display();
private:
	float temperature;
	float humidity;
	Subject_Interface* weatherData;
};

#endif /* CURRENTCONDITIONSDISPLAY_H_ */

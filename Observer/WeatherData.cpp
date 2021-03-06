/*
 * WeatherData.cpp
 *
 *  Created on: Sep 21, 2014
 *      Author: Nikhil
 */

#include "WeatherData.h"

WeatherData::WeatherData() {
	tail = 0;
}

WeatherData::~WeatherData() {
	// TODO Auto-generated destructor stub
}

void WeatherData::registerObserver(Observer_Interface* O)
{
	observers[tail] = O;
	tail++;
}

void WeatherData::removeObserver(Observer_Interface* O)
{
	int counter = 0;
	while( counter < 22 )
	{
		if(observers[counter] == O )
		{
			tail--;
		}
		counter++;
	}
}

void WeatherData::notifyObserver()
{
	for(int counter = 0; counter < tail; counter++)
	{
		observers[counter]->update(temperature,humidity,pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObserver();
}

void WeatherData::setMeasurements(float temperature, float pressure, float humidity)
{
	this->temperature	= temperature;
	this->pressure		= pressure;
	this->humidity		= humidity;
	measurementsChanged();
}

/*
 * GargeLightOn.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef GARGELIGHTON_H_
#define GARGELIGHTON_H_
#include "Command.h"
#include<iostream>
using namespace std;
#include "GarageLight.h"

class GargeLightOn: public Command {
private:
	GarageLight* garagelight;

public:
	GargeLightOn(GarageLight* garagelightObj)
	{
		garagelight = garagelightObj;
	}
	~GargeLightOn()
	{

	}

	virtual void execute()
	{
		garagelight->garageLightOn();
	}

	virtual void undo()
	{
		garagelight->garageLightDim();
	}
};

#endif /* GARGELIGHTON_H_ */

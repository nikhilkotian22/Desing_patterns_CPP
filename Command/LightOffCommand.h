/*
 * LightOffCommand.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef LIGHTOFFCOMMAND_H_
#define LIGHTOFFCOMMAND_H_

#include "Command.h"
#include<iostream>
using namespace std;
#include "Light.h"

class LightOffCommand: public Command {
private:
	Light* light;
public:
	LightOffCommand(Light* LightObj)
	{
		light = LightObj;
	}
	~LightOffCommand()
	{

	}

	virtual void execute()
	{
		light->lightoff();
	}

	virtual void undo()
	{
		light->lighton();
	}
};

#endif /* LIGHTOFFCOMMAND_H_ */

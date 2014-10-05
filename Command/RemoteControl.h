/*
 * RemoteControl.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef REMOTECONTROL_H_
#define REMOTECONTROL_H_
#include "Command.h"

class RemoteControl {
public:
	RemoteControl(Command* on, Command* off)
	{
		customCommand1_ON = on;
		customCommand1_OFF = off;
	}
	~RemoteControl()
	{

	}

	Command* customCommand1_ON;
	Command* customCommand1_OFF;
};

#endif /* REMOTECONTROL_H_ */

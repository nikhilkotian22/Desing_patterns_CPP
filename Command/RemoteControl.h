/*
 * RemoteControl.h
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#ifndef REMOTECONTROL_H_
#define REMOTECONTROL_H_
#include "Command.h"
#include "NoCommand.h"

#define numberOfCommands 7

class RemoteControl {
public:
	RemoteControl()
	{
		NoCommand *obj = new NoCommand();
		for(int counter = 0; counter < numberOfCommands; counter++)
		{
			customCommand1_ON[counter] = obj;
			customCommand1_OFF[counter] = obj;
		}
	}

	~RemoteControl()
	{

	}
	Command* customCommand1_ON[numberOfCommands];
	Command* customCommand1_OFF[numberOfCommands];

	void setCommand(int slot, Command* on, Command* off)
	{
		customCommand1_ON[slot] = on;
		customCommand1_OFF[slot] = off;
	}
};

#endif /* REMOTECONTROL_H_ */
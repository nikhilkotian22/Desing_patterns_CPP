/*
 * main.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: Nikhil
 */

#include "RemoteControl.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "GarageLightDim.h"
#include "GargeLightOn.h"

int main()
{
	LightOffCommand lightoffcommand;
	LightOnCommand lightoncommand;
	GargeLightOn garagelighton;
	GarageLightDim garagelightdim;
	RemoteControl* remotecontrolobj = new RemoteControl();

	remotecontrolobj->setCommand(0, &lightoffcommand, &lightoncommand);
	remotecontrolobj->setCommand(3, &garagelightdim, &garagelighton);


	remotecontrolobj->customCommand1_OFF[0]->execute();
	remotecontrolobj->customCommand1_ON[0]->execute();

	cout<<"------------------------------------------------"<<endl;

	remotecontrolobj->customCommand1_OFF[2]->execute();
	remotecontrolobj->customCommand1_ON[2]->execute();

	cout<<"-------------------------------------------------"<<endl;

	remotecontrolobj->customCommand1_OFF[3]->execute();
	remotecontrolobj->customCommand1_ON[3]->execute();

	return 0;
}

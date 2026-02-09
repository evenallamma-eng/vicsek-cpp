#include "system.h"
#include <iostream>

System::System(int particleNumber, double sideLength, double timeStep, double noiseStrength){
	this->particleNumber  = particleNumber;
	this->noiseStrength = noiseStrength;
	std::cout<< "I am constructing the System!" << std::endl;
}

void System::updateRule(){
	std::cout<< "Updating the system..." << std::endl;
}

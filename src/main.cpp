#include <iostream>
#include "system.h"

int main(){
	// Values from the instructions

	int N = 100; // Number of particles
	double noise = 0.1; // Noise strength
	double timeStep = 0.5;
	double sideLength=20.0;

	// Instantiate the System Object with parameters
	System mySystem(N, sideLength, timeStep, noise);

	mySystem.updateRule();
	return 0;
}

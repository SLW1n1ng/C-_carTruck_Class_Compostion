#include "car.h"
#include "truck.h"
#include <iostream>

int main() {
	Car car("Red", 2018, "Ford", "Mustang", 0);		// create a car object
	Truck truck("Blue", 2018, "Ford", "F-150", 0);	// create a truck object

	std::cout << "--------- Car --------\n" << car.getInfo() << std::endl;
	car.soundHorn();	// call the soundHorn() method
	car.start();		// call the start() method
	car.accelerate();	// call the accelerate() method
	car.decelerate();	// call the decelerate() method
	car.stop();			// call the stop() method

	std::cout << "\n\n--------- Truck --------\n" << truck.getInfo() << std::endl;
	truck.soundHorn();	// call the soundHorn() method
	truck.start();		// call the start() method
	truck.accelerate();	// call the accelerate() method
	truck.decelerate();	// call the decelerate() method
	truck.stop();		// call the stop() method

	return 0;
}


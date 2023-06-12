#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.h"

class Truck {
private:
	Vehicle vehicle;
public:
	Truck(const std::string& color, int year, const std::string& make, const std::string& model, int speed);

	void soundHorn() const;
	void start() const;
	void stop() const;
	void accelerate();
	void decelerate();
	std::string getInfo() const;
};

#endif 
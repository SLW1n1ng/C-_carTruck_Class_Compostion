#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car {
private:
	Vehicle vehicle;
public:
	Car(const std::string& color, int year, const std::string& make, const std::string& model);
	void soundHorn() const;
	void start() const;
	void stop() const;
	void accelerate();
	void decelerate();
	std::string getInfo() const;
};

#endif 

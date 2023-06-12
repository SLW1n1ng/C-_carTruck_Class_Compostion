#include "car.h"
#include <iostream>

Car::Car(const std::string& color, int year, const std::string& make, const std::string& model) : vehicle(color, year, make, model) {}

// Car member functions
void Car::soundHorn() const { std::cout << "Sound car Horn" << std::endl; }
void Car::start() const { vehicle.start(); }
void Car::stop() const { vehicle.stop(); }
void Car::accelerate() { vehicle.accelerate(); }
void Car::decelerate() { vehicle.decelerate(); }
std::string Car::getInfo() const { return "Car: " + vehicle.getInfo(); }
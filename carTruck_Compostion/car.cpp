#include "car.h"
#include <iostream>

Car::Car(const std::string& color, int year, const std::string& make, const std::string& model, int speed) : vehicle(color, year, make, model, speed) {}

void Car::soundHorn() const { std::cout << "Sound car Horn" << std::endl; }
void Car::start() const { vehicle.start(); }
void Car::stop() const { vehicle.stop(); }
void Car::accelerate() { vehicle.accelerate(); }
void Car::decelerate() { vehicle.decelerate(); }
std::string Car::getInfo() const { return "Car: " + vehicle.getInfo(); }
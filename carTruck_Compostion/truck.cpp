#include "truck.h"
#include <iostream>

Truck::Truck(const std::string& color, int year, const std::string& make, const std::string& model, int speed) : vehicle(color, year, make, model, speed) {} //constructor

void Truck::soundHorn() const { std::cout << "Sound truck Horn" << std::endl; }
void Truck::start() const { vehicle.start(); }
void Truck::stop() const { vehicle.stop(); }
void Truck::accelerate() { vehicle.accelerate() ; }
void Truck::decelerate() { vehicle.decelerate(); }
std::string Truck::getInfo() const { return "Truck: " + vehicle.getInfo(); }

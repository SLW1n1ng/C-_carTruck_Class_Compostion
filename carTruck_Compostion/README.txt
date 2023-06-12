# Vehicle Class Composition

This code represents a simple implementation of a vehicle class hierarchy in C++.
The hierarchy includes a base class called `Vehicle` and two derived classes called `Car` and `Truck`.
Each class represents a specific type of vehicle and inherits from the `Vehicle` base class.

## Classes

### Vehicle

The `Vehicle` class serves as the base class for all vehicles in the hierarchy. It contains the following member variables:

- `color`: A string representing the color of the vehicle.
- `make`: A string representing the make of the vehicle.
- `model`: A string representing the model of the vehicle.
- `year`: An integer representing the year of the vehicle.
- `speed`: An integer representing the current speed of the vehicle.

The class provides the following member functions:

- `soundHorn()`: Prints a message indicating the sound of the vehicle's horn.
- `start()`: Prints a message indicating that the vehicle has started.
- `stop()`: Prints a message indicating that the vehicle has stopped.
- `accelerate()`: Prints a message indicating that the vehicle is accelerating and updates the speed.
- `decelerate()`: Prints a message indicating that the vehicle is decelerating and updates the speed.
- `getInfo()`: Returns a string containing information about the vehicle, including its make, model, color, and year.

### Car

The `Car` class is derived from the `Vehicle` class and represents a specific type of vehicle: a car. 
It contains an instance of the `Vehicle` class as a member variable.

The class provides the following member functions:

- `soundHorn()`: Prints a message indicating the sound of the car's horn.
- `start()`: Calls the `start()` function of the underlying `Vehicle` object.
- `stop()`: Calls the `stop()` function of the underlying `Vehicle` object.
- `accelerate()`: Calls the `accelerate()` function of the underlying `Vehicle` object.
- `decelerate()`: Calls the `decelerate()` function of the underlying `Vehicle` object.
- `getInfo()`: Returns a string containing information about the car, including its make, model, color, and year.

### Truck

The `Truck` class is also derived from the `Vehicle` class and represents a specific type of vehicle: a truck.
It contains an instance of the `Vehicle` class as a member variable.

The class provides the following member functions:

- `soundHorn()`: Prints a message indicating the sound of the truck's horn.
- `start()`: Calls the `start()` function of the underlying `Vehicle` object.
- `stop()`: Calls the `stop()` function of the underlying `Vehicle` object.
- `accelerate()`: Calls the `accelerate()` function of the underlying `Vehicle` object.
- `decelerate()`: Calls the `decelerate()` function of the underlying `Vehicle` object.
- `getInfo()`: Returns a string containing information about the truck, including its make, model, color, and year.

## Usage

The main function in the provided code demonstrates the usage of the `Car` and `Truck` classes. 
It creates instances of these classes and calls various member functions to perform actions such as sounding the horn,
starting, stopping, accelerating, decelerating, and obtaining information about the vehicles.

Feel free to explore and modify the code to understand and experiment with the behavior of the vehicle classes.


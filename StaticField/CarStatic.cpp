#include "CarStatic.hpp"

int Car::count = 0;

Car::Car(std::string brand)
{
	count++;
	this->brand = brand;
	this->id = count;
}

int Car::getId()
{
	return id;
}

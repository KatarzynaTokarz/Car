#include<iostream>
#include "CarStatic.hpp"

int main()
{
	Car car1("audi");
	Car car2("ford");
	Car car3("lexus");
	Car car4("tesla");

	int number = Car::count;
	std::cout << "Numer porzadkowy auta to: " << number << std::endl;
}
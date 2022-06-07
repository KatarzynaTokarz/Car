#include<iostream>
#include "CarStatic.hpp"

int main()
{
	Car car1("audi");
	std::cout << "ID= " << car1.getId() << std::endl;
	Car car2("ford");
	std::cout << "ID= " << car2.getId() << std::endl;

	Car car3("lexus");
	std::cout << "ID= " << car3.getId() << std::endl;

	Car car4("tesla");
	std::cout << "ID= " << car4.getId() << std::endl;

	Car car5("opel");
	std::cout << "ID= " << car5.getId() << std::endl;

	int number = Car::count;
	std::cout << "Numer porzadkowy auta to: " << number << std::endl;

}
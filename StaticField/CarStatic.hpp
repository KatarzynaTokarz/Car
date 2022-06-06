#pragma once
#include<iostream>
#include<string>

//zadanie 6.3: zaimplementuj prosta klase Car,
//ktora posiada jedynie marke tego pojazdu oraz numer 
//identyfikacyjny okreslajacy ktorym z kolei pojazdem 
//utworzonym jest dany obiekt.Wykorzystaj pole statyczne z licznikiem samochodow do tego celu
class Car
{
public:

	std::string brand;
	static int count;

	Car(std::string brand);
};

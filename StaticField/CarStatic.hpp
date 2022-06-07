#pragma once
#include<string>

//zadanie 6.3: zaimplementuj prosta klase Car,
//ktora posiada jedynie marke tego pojazdu oraz numer 
//identyfikacyjny okreslajacy ktorym z kolei pojazdem 
//utworzonym jest dany obiekt.Wykorzystaj pole statyczne z licznikiem samochodow do tego celu
//kazdy kolejny samochod mial nadane kolejne id

class Car
{
	std::string brand;
	int id;

public:

	static int count;
	Car(std::string brand);
	int getId();
};

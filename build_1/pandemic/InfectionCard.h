#pragma once
#include <string>
#include "Cards.h"
using namespace std;

class InfectionCard : public Cards {
public:
	//constructor,destructor
	InfectionCard();
	~InfectionCard();
	//getters 
	string getColor();
	string getCityName();

	//setters
	void setColor(string color);
	void setCityName(string cityName);

	//action
	void initialInfect();
	void Infect();
private:
	string color;
	string cityName;
};
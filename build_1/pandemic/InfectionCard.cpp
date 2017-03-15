#include "InfectionCard.h"
using namespace std;

InfectionCard::InfectionCard() {}

InfectionCard::~InfectionCard() {

}
string InfectionCard::getColor() {
	return color;
}

string InfectionCard::getCityName() {
	return cityName;
}

void InfectionCard::setColor(string color) {
	this->color = color;
}

void InfectionCard::setCityName(string cityName) {
	this->cityName = cityName;
}

void InfectionCard::initialInfect() {
	//Infect according to the city and color, with level of intensity
	string theCity = getCityName();
	string theColor = getColor();
	int i = 3;
	while (i >= 1) {
		//draw 3, then 2, then 1 infection cards and infect according to their city and color
		for (int k = i; k < 0; k--) {
			//k cards drawn
			//TODO: increase CITYNAME's COLOR disease markers by i
		}
		i--;
	}
}

void InfectionCard::Infect() {

}
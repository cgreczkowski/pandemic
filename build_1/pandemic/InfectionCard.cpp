#include "InfectionCard.h"
using namespace std;

InfectionCard::InfectionCard() {
	Cards();
}
InfectionCard::InfectionCard(string city, string title, string cardtextfront, string cardtextback) {
	city = city;
	card_name = title;
	card_textfront = cardtextfront;		//holds the color to infect with
	card_textback = cardtextback;
	Cards(title, cardtextfront, cardtextback);
}
InfectionCard::~InfectionCard() {

}

void InfectionCard::initialInfect() {
	//Infect according to the city and color, with level of intensity	
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
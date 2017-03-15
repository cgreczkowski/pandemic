#include "InfectionCard.h"
#include <iostream>
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

void InfectionCard::Infect(string city, string color) {
	//takes a city string and color
	//todo: change to city object
	cout << "Infecting " << city << " with the " << color << " disease!" << endl;
	//outbreak scenario?
	//if(city) has 3 cubes{
	// outbreak
	//}
	//else{
	//	place 1 disease cube (color) at city
	//}
}
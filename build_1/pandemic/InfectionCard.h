#pragma once
#include <string>
#include <vector>
#include "Cards.h"
using namespace std;

class InfectionCard : public Cards {
public:
	//constructor,destructor
	InfectionCard();
	InfectionCard(string city, string title, string cardtextfront, string cardtextback);
	~InfectionCard();
	

	//action
	void Infect(int* remainingDiseaseCubes,string city, string color);
};
#include "City.h"
#include<iostream>
// namespace std;


City::City() :Card("Atlanta")
{


}
City::City(string nam) : Card(nam)
{
	{
		
		infCubes = 0;
	}
}


City::~City()
{

}

double City::getPopulation()
{
	return playerInCity.size();
}

void City::addInfCubes()
{
	 ++infCubes;
}

void City::getPlayerInCity()
{
	vector<Player> ::iterator itr = playerInCity.begin();
	/
	for (int i = 0; i < playerInCity.size(); i++) {
		//Card *rc = playerInCity[i].getRoleCard();
		//cout << rc->getCardName() << endl;
	}
}


void City::toString()
{
	//cardColor;
	cout << " City Card: " + getCardName() << "  ";
	//RefCard ref = getPlayerInCity();
	cout << "List of players in city :";
	getPlayerInCity();

	cout << "the number of infection in city" << infCubes;

}

void City::addPlayerToCity(Player pl)
{
	playerInCity.push_back(pl);
}

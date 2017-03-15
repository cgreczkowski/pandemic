#pragma once
#include "Cards.h"
//#include "Player.h"
#include <vector>
#include <string>
#include "Player.h">
using namespace std;

class City : public Cards
{
public:
	City();
	City(string s);
	void toString();
	void addPlayerToCity(Player);
	~City();	
	double getPopulation();
	void addInfCubes();
	void getPlayerInCity();
	
	
private:
	int infCubes;
	string name;
	vector <Player> playerInCity;
	string color;
	double population;
	vector<Pawn> pawnInCity;
};


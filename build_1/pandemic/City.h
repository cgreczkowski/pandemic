#ifndef City_h
#define City_h
#include "Cards.h"

#include <vector>
#include <string>
#include "Pawn.h"
using namespace std;

class City
{
public:
	City();
	City(string cityname, string color, CityCard* pcitycard, int cubes, vector<Pawn*> pawnsincity);
	~City();

    string getCityName();
    string getColor();
    int getCubes();
    vector<Pawn*> getPawnsInCity();
    
    void addCubes();
    void removeCubes();
    void add3Cubes();
    void removeAllCubes();
    void addResearchStation();
    void removeResearchStation();
    void addPawnsToCity(Pawn* pa);
    void removePawnFromCity(Pawn* pa);
    
    void printListPlayersInCity();
    void print();

	
private:
    string cityname;
    string color;
    CityCard* pcitycard;
    int cubes;
    bool researchstation;
    vector<Pawn*> pawnsincity;
   
};

#endif

#ifndef Graph_h
#define Graph_h
#pragma once
#include <iostream>
#include <vector>
#include<iterator>
#include <map>
#include <string>
#include "City.h"

using namespace std;
struct vertex {
	//typedef pair<int, vertex*> ve;
	vector<vertex*> adj; //destination vertex
	City* name;
	vertex(City* s) : name(s) {}
	~vertex();
};

class GraphMap
{
public:
	~GraphMap();
	typedef map<string, vertex *> vmap;
	typedef map<City*, vertex *> cMap;
	vmap work;
	cMap cityMap;
	vector <City> cityInGraph;
	void showCityInfo(City* cityname);
	void addCityToGraph(City*);
	void printGraph();
	void move(City* f, City* t);
	void addedge(City* from, City* to);
	void getCityEdge(City*);
	void createMap();
	bool operator==(City&);
	void drive(Pawn *);
	//void shuttleFlight(Pawn*);
	//void charterFlight(Pawn*);
	//void directFlight(Pawn*p);

};


#endif 

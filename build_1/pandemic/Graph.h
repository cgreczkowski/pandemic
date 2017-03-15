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
	string name;
	vertex(string s) : name(s) {}
};

class Graph
{
public:

	typedef map<string, vertex *> vmap;
	typedef map<City, vertex *> cMap;
	vmap work;
	cMap cityMap;
	vector <City> cityInGraph;
	void showCity(string &cityname);
	void addVertexToGraph(const string&);
	void addCityVertexToGraph(City&);
	void printGraph();
	void addedge(City& from, City& to);
	void getCityEdge(City&);
	void createMap();
};

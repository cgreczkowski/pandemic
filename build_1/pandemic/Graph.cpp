#include"Graph.h"


void Graph::addVertexToGraph(const string &name)
{
	vmap::iterator itr = work.find(name);
	if (itr == work.end())
	{
		vertex *v;
		v = new vertex(name);
		work[name] = v;
		return;
	}
	cout << "\nVertex already exists!";
}


void Graph::addCityVertexToGraph(City &name)
{
	vmap::iterator itr = work.find(name.getCardName());
	if (itr == work.end())
	{
		vertex *v;
		v = new vertex(name.getCardName());
		work[name.getCardName()] = v;
		cityInGraph.push_back(name);
		return;
	}
	cout << "\nVertex already exists!";
}


void Graph::addedge(City& f, City& t)
{
	vertex *from = (work.find(f.getCardName())->second);
	vertex *to = (work.find(t.getCardName)->second);
	vertex *edge = to;
	from->adj.push_back(edge);
	to->adj.push_back(from);

}
void Graph::printGraph()
{
	vmap::iterator itr = work.begin();
	cout << "*****************************************************" << endl;
	while (itr != work.end())
	{
		string c = itr->first;
		//cout << "*"<<itr->first ;
		showCity(c);
		cout << endl;
		++itr;
	}
	cout << "*****************************************************" << endl;
}
void Graph::showCity(string &name)
{
	City c(name);
	vector<City>::iterator it = cityInGraph.begin();
	while (it != cityInGraph.end())
	{
		if (c.getCardName() == it->getCardName())
		{
			it->toString();
			return;
		}
		++it;

	}


}

void Graph::getCityEdge(City& c) {

	vertex *from = work.find(c.getCardName())->second;
	vector<vertex*> v = from->adj;

	cout << "In: " << from->name << " connected to: " << endl;

	vector<vertex*> ::iterator itr = v.begin();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i]->name << endl;
	}
}

void  Graph::createMap() {

	Graph myGraph;
	City c[48];
	//blue
	c[0] = City("Atlanta");
	c[1] = City("San Srancisco");
	myGraph.addedge(c[2], c[1]);

	c[2] = City("Chicago");
	myGraph.addedge(c[0], c[2]);

	c[3] = City("Montreal");
	myGraph.addedge(c[2], c[3]);
	myGraph.addedge(c[4], c[3]);

	c[4] = City("Washington");
	myGraph.addedge(c[0], c[4]);

	c[5] = City("New York");
	myGraph.addedge(c[4], c[5]);
	myGraph.addedge(c[3], c[5]);

	c[6] = City("London");
	myGraph.addedge(c[5], c[6]);
	myGraph.addedge(c[7], c[6]);
	

	c[7] = City("Madrid");
	myGraph.addedge(c[5], c[7]);
	myGraph.addedge(c[19], c[7]);
	
	c[8] = City("Paris");
	myGraph.addedge(c[7], c[8]);
	myGraph.addedge(c[6], c[8]);

	c[9] = City("Milan");
	myGraph.addedge(c[10], c[9]);
	
	c[10] = City("Essen");
	myGraph.addedge(c[6], c[10]);

	c[11] = City("St Petersburg");
	myGraph.addedge(c[10], c[11]);
	
	
	
	//yellow
	c[12] = City("Los Angeles");
	myGraph.addedge(c[2], c[12]);

	c[13] = City("Mexico");
	myGraph.addedge(c[2], c[13]);
	myGraph.addedge(c[14], c[13]);
	myGraph.addedge(c[16], c[13]);
	myGraph.addedge(c[15], c[13]);

	c[14] = City("Miami");
	myGraph.addedge(c[2], c[14]);
	myGraph.addedge(c[0], c[14]);

	c[15] = City("Bogota");
	myGraph.addedge(c[14], c[15]);

	c[16] = City("Lima");
	myGraph.addedge(c[15], c[16]);

	c[17] = City("Santiago");
	c[18] = City("Buenos Aires");
	myGraph.addedge(c[15], c[18]);

	c[19] = City("Sao Paolo");
	myGraph.addedge(c[15], c[19]);
	myGraph.addedge(c[7], c[19]);

	c[20] = City("Lagos");
	myGraph.addedge(c[19], c[20]);

	c[21] = City("Kinshasa");
	c[22] = City("Johannesburg");
	c[23] = City("Khartoum");

	//black
	c[24] = City("Moscow");
	myGraph.addedge(c[11], c[24]);
	c[25] = City("Istanbul");
	myGraph.addedge(c[11], c[25]);
	myGraph.addedge(c[9], c[25]);
	myGraph.addedge(c[24], c[25]);

	c[26] = City("Algers");
	myGraph.addedge(c[25], c[26]);
	myGraph.addedge(c[7], c[26]);

	c[27] = City("LeCaire");
	c[28] = City("Bagdad");
	myGraph.addedge(c[29], c[28]);
	c[29] = City("Teheran");
	myGraph.addedge(c[24], c[29]);
	c[30] = City("Karachi");
	myGraph.addedge(c[29], c[30]);
	myGraph.addedge(c[32], c[30]);

	c[31] = City("Ryad");
	myGraph.addedge(c[28], c[31]);
	myGraph.addedge(c[30], c[31]);
	c[32] = City("Dehli");
	myGraph.addedge(c[29], c[32]);
	myGraph.addedge(c[28], c[32]);
	c[33] = City("Mumbai");
	myGraph.addedge(c[30], c[33]);
	myGraph.addedge(c[32], c[33]);

	c[34] = City("Chennai");
	myGraph.addedge(c[32], c[34]);
	myGraph.addedge(c[33], c[34]);
	
	c[35] = City("Calcutta");
	myGraph.addedge(c[32], c[35]);
	
	//red
	c[36] = City("Pekin");
	c[37] = City("Seoul");
	c[38] = City("Tokyo");
	c[39] = City("Shanghai");
	c[40] = City("Osaka");
	c[41] = City("Taipei");

	c[42] = City("Hong Kong");
	myGraph.addedge(c[35], c[42]);
	myGraph.addedge(c[46], c[42]);

	c[43] = City("Manville");
	myGraph.addedge(c[45], c[43]);

	c[44] = City("Bangkok");
	myGraph.addedge(c[35], c[44]);

	c[45] = City("Ho Chi Min City");
	myGraph.addedge(c[44], c[45]);
	myGraph.addedge(c[46], c[45]);

	c[46] = City("Jakarta");
	myGraph.addedge(c[44], c[46]);
	c[47] = City("Sydney");

	for (int i = 0; i < 48; i++) {
		myGraph.addCityVertexToGraph(c[i]);
	}

	
	

}

#include "Global.h"
#include"GraphMap.h"
#include"City.h"

void GraphMap::addCityToGraph(City *name)
{
	cMap::iterator itr = cityMap.find(name);
	if (itr == cityMap.end())
	{
		vertex *v;
		v = new vertex(name);
		cityMap[name] = v;
		cityInGraph.push_back(*name);
		return;
	}
	cout << "\nCity already exists!";
}

void GraphMap::move(City* f, City* t)
{
	/*cMap::iterator itr = cityMap.find(f);
	cMap::iterator it = cityMap.find(f->getCardName());
	//vector<City>::iterator it = cityInGraphMap.begin();

	itr->second->adj;
	while (itr != cityMap.end())
	{

	}*/
}
void GraphMap::addedge(City* f, City* t)
{
	//cMap::iterator itr = cityMap.find(f)->second; //find(f);
	vertex *from = (cityMap.find(f)->second);
	vertex *to = (cityMap.find(t)->second);
	vertex *edge = to;
	//cityMap.
	from->adj.push_back(edge);
	to->adj.push_back(from);

}
void GraphMap::printGraph()
{
	cMap::iterator itr = cityMap.begin();
	vector<City>::iterator it = cityInGraph.begin();
	cout << "*****************************************************" << endl;
	cout << "list of cities in map and their information" << endl;
	while (itr != cityMap.end())
	{
		City* c = itr->first;// ->print();

		itr->first->print();
		++itr;
	}
	cout << "*****************************************************" << endl;
}
bool GraphMap::operator==(City &c)
{
	City newCity;

	return true;
}

void GraphMap::showCityInfo(City* name)
{
	cMap::iterator itr = cityMap.find(name);
	while (itr != cityMap.end())
	{
		if (itr->first == name)
		{
			//name->toString();
			name->print();
			return;
		}
		++itr;
	}
	cout << "city not in GraphMap" << endl;
}
/*void GraphMap::drive(Pawn * c)
{
vertex *from = cityMap.find(c->getPosition)->second;
vector<vertex*> v = from->adj;
cout << "you can drive to the following cities" << endl;
vector<vertex*> ::iterator itr = v.begin();

for (itr; itr != v.end(); itr++) {
cout << *itr << endl;
}
string newCity;
cin >> newCity;
//c->setPosition(City*)

}*/

void GraphMap::getCityEdge(City* c) {

	vertex *from = cityMap.find(c)->second;
	vector<vertex*> v = from->adj;

	cout << "In: " << from->name->getCityName() << " connected to: " << endl;

	vector<vertex*> ::iterator itr = v.begin();

	for (itr; itr != v.end(); itr++) {
		//cout << &itr<< endl;
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]->name->getCityName() << endl;
	}

}
GraphMap::~GraphMap()
{
	//vector<City>::iterator it = cityInGraphMap.begin();
	vmap::iterator it = work.begin();
	while (it != work.end())
	{
		delete it->second;
	}
	cMap::iterator itr = cityMap.begin();
	while (it != work.end())
	{
		delete it->second;
	}


}
void  GraphMap::createMap()

{
	//Blue 12
	

	for (int i = 0; i < 48; i++)
		addCityToGraph(citycardarr[i]);

	addedge(chicago,atlanta);
	addedge(chicago,sanfrancisco);
	addedge(chicago,montreal);
	addedge(washington,atlanta);
	addedge(washington,newyork);
	addedge(washington,montreal);
	addedge(newyork,montreal);
	addedge(newyork,londres);
	addedge(londres,madrid);
	addedge(madrid,newyork);
	addedge(madrid,saopaulo);
	addedge(paris,madrid);
	addedge(paris,londres);
	addedge(milan,essen);
	addedge(essen,londres);
	addedge(essen,stpetersbourg);
	addedge(losangeles,chicago);
	addedge(mexico,chicago);
	addedge(mexico,miami);
	addedge(mexico,bogota);
	addedge(mexico,lima);
	addedge(miami,chicago);
	addedge(miami,atlanta);
	addedge(miami,bogota);
	addedge(bogota,lima);
	addedge(lima,santiago);
	addedge(buesnosaires,saopaulo);
	addedge(buesnosaires,bogota);
	addedge(saopaulo,bogota);
	addedge(saopaulo,lagos);
	addedge(saopaulo,madrid);
	addedge(lagos,khartoum);
	addedge(lagos,kinshasa);
	addedge(kinshasa,khartoum);
	addedge(kinshasa,johannesburg);
	addedge(johannesburg,khartoum);
	addedge(khartoum,lecaire);
	addedge(moscou,stpetersbourg);
	addedge(moscou,istanbul);
	addedge(moscou,teheran);
	addedge(istanbul,stpetersbourg);
	addedge(istanbul,lecaire);
	addedge(istanbul,alger);
	addedge(alger,paris);
	addedge(alger,madrid);
	addedge(bagdad,teheran);
	addedge(bagdad,karachi);
	addedge(bagdad,ryad);
	addedge(bagdad,lecaire);
	addedge(teheran,karachi);
	addedge(teheran,delhi);
	addedge(karachi,delhi);
	addedge(karachi,ryad);
	addedge(karachi,mumbai);
	addedge(delhi,chennai);
	addedge(delhi,mumbai);
	addedge(chennai,calcutta);
	addedge(chennai,bangkok);
	addedge(chennai,jakarta);
	addedge(seoul,tokyo);
	addedge(seoul,shanghai);
	addedge(tokyo,osaka);
	addedge(tokyo,shanghai);
	addedge(shanghai,taipei);
	addedge(osaka,taipei);
	addedge(taipei,hongkong);
	addedge(taipei,manille);
	addedge(hongkong,calcutta);
	addedge(hongkong,bangkok);
	addedge(hongkong,hochiminhville);
	addedge(hongkong,manille);
	addedge(manille,hochiminhville);
	addedge(bangkok,hochiminhville);
	addedge(sydney,hochiminhville);
	addedge(sydney,manille);
	addedge(sydney, jakarta);
	
}

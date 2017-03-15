//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Global.h


#ifndef Global_h
#define Global_h


//----------- GLOBAL OBJECTS---------------------------------------------------->>>
//Contains only global objects (cards, pawns, player hands, array of players, array of playerviews, playerdeck, discard pile, etc.)


const int nbplayers = 2;        // # Players to be instantiated ( 2 to 4)
const int nbcardsplayer = 4;    // # Cards per player when game starts
const int nbplayercards = 59;   // # PlayerCard's in the whole game


//Creates 4 reference cards needed in the game, put them in an array for access
RefCard refcard1, refcard2, refcard3, refcard4;
RefCard referencecards[] = { refcard1, refcard2, refcard3, refcard4 };

Pawn pink("Pink"), orange("Orange"), white ("White"), brown("Brown"), palegreen("Pale Green"), darkgreen("Dark Green"), aqua("Aqua");

//Creates Role Cards (inherited from Cards)
DispatcherCard dispatchercard1;
MedicCard mediccard1;
ScientistCard scientistcard1;
ResearcherCard researchercard1;
OperationsexpertCard operationsexpertcard1;
QuarantinespecialistCard quarantinespecialistcard1;
ContingencyplannerCard contingencyplannercard1;


//Creates player hands (creates many vectors of *PlayerCard)
//-----hands is an attribute from class Player-----
std::vector<PlayerCard*> dispatcherhand, medichand, scientisthand, researcherhand, operationsexperthand, quarantinespecialisthand, contingencyplannerhand;

//Creates <vector> playerdeck that contains *PlayerCard
std::vector<PlayerCard*> playerdeck;

//Creates <vector> discardpile that contains *PlayerCard
std::vector <PlayerCard*> discardpile;

//Creates <vector> infectiondeck that contains *InfectionCard
std::vector <InfectionCard*> infectiondeck;

//Creates Array of *Player (to access players)
Player* arrayofPlayers[nbplayers];

//Creates Array of *PlayerView objects (Observers) [1 for each player]
PlayerView * arrayofPlayerViews[nbplayers];


//-----------PlayerCard CARDS------------------------------->
//----------Epidemic cards----------
EpidemicCard* epcard1=new EpidemicCard();
EpidemicCard* epcard2=new EpidemicCard();
EpidemicCard* epcard3=new EpidemicCard();
EpidemicCard* epcard4=new EpidemicCard();
EpidemicCard* epcard5=new EpidemicCard();

EpidemicCard* epcardarr[]={epcard1, epcard2, epcard3, epcard4, epcard5};

//----------Event cards----------
Airlift* airliftcard=new Airlift();
OneQuietNight* onequietnightcard=new OneQuietNight();
GovernmentGrant* governmentgrantcard=new GovernmentGrant();
ResilientPopulation* resilientpopulationcard=new ResilientPopulation();
Forecast* forecastcard=new Forecast();

EventCard* eventcardarr[]={airliftcard, onequietnightcard, governmentgrantcard, resilientpopulationcard, forecastcard};

//---------City cards----------

//Blue
BlueCity* sanfrancisco=new BlueCity("sanfrancisco", "San Francisco", "", "");
BlueCity* chicago=new BlueCity("chicago", "Chicago", "", "");
BlueCity* atlanta=new BlueCity("atlanta", "Atlanta", "", "");
BlueCity* montreal=new BlueCity("montreal", "Montreal", "", "");
BlueCity* washington=new BlueCity("washington", "Washington", "", "");
BlueCity* newyork=new BlueCity("newyork", "New York", "", "");
BlueCity* londres=new BlueCity("londres", "Londres", "", "");
BlueCity* madrid=new BlueCity("madrid", "Madrid", "", "");
BlueCity* paris=new BlueCity("paris", "Paris", "", "");
BlueCity* milan=new BlueCity("milan", "Milan", "", "");
BlueCity* essen=new BlueCity("essen", "Essen", "", "");
BlueCity* stpetersbourg=new BlueCity("stpetersbourg", "St Petersbourg", "", "");
//Yellow
YellowCity* losangeles=new YellowCity("losangeles", "Los Angeles", "", "");
YellowCity* mexico=new YellowCity("mexico", "Mexico", "", "");
YellowCity* miami=new YellowCity("miami", "Miami", "", "");
YellowCity* bogota=new YellowCity("bogota", "Bogota", "", "");
YellowCity* lima=new YellowCity("lima", "Lima", "", "");
YellowCity* santiago=new YellowCity("santiago", "Santiago", "",  "");
YellowCity* buesnosaires=new YellowCity("buenosaires", "Buenos Aires", "", "");
YellowCity* saopaulo=new YellowCity("saopaulo", "Sao Paulo", "", "");
YellowCity* lagos=new YellowCity("lagos", "Lagos", "", "");
YellowCity* kinshasa=new YellowCity("kinshasa", "Kinshasa", "" , "");
YellowCity* johannesburg=new YellowCity("johannesburg", "Johannesburg", "", "");
YellowCity* khartoum=new YellowCity("khartoum", "Khartoum", "", "");
//Black
BlackCity* moscou=new BlackCity("moscou", "Moscou", "", "");
BlackCity* istanbul=new BlackCity("istanbul", "Istanbul", "", "");
BlackCity* alger=new BlackCity("alger", "Alger", "", "");
BlackCity* lecaire=new BlackCity("lecaire", "Le Caire", "", "");
BlackCity* bagdad=new BlackCity("bagdad", "Bagdad", "", "");
BlackCity* teheran=new BlackCity("teheran", "Teheran", "", "");
BlackCity* karachi=new BlackCity("karachi", "Karachi", "", "");
BlackCity* ryad=new BlackCity("ryad", "Ryad", "", "");
BlackCity* delhi=new BlackCity("delhi", "Delhi", "", "");
BlackCity* mumbai=new BlackCity("mumbai", "Mumbai", "", "");
BlackCity* chennai=new BlackCity("chennai", "Chennai", "", "");
BlackCity* calcutta=new BlackCity("calcutta", "Calcutta", "", "");
//Red
RedCity* pekin=new RedCity("pekin", "Pekin", "", "");
RedCity* seoul=new RedCity("seoul", "Seoul", "", "");
RedCity* tokyo=new RedCity("tokyo", "Tokyo", "", "");
RedCity* shanghai=new RedCity("shanghai", "Shanghai", "", "");
RedCity* osaka=new RedCity("osaka", "Osaka", "", "");
RedCity* taipei=new RedCity("taipei", "Taipei", "", "");
RedCity* hongkong=new RedCity("hongkong", "Hong Kong", "", "");
RedCity* manille=new RedCity("manille", "Manille", "", "");
RedCity* bangkok=new RedCity("bangkok", "Bangkok", "", "");
RedCity* hochiminhville=new RedCity("hochiminhville", "Ho Chi Minh Ville", "", "");
RedCity* jakarta=new RedCity("jakarta", "Jakarta", "", "");
RedCity* sydney=new RedCity("sydney", "Sydney", "", "");

CityCard* citycardarr[]={sanfrancisco, chicago, atlanta, montreal, washington, newyork, londres, madrid, paris, milan, essen, stpetersbourg, losangeles, mexico, miami, bogota, lima, santiago, buesnosaires, saopaulo, lagos, kinshasa, johannesburg, khartoum, moscou, istanbul, alger, lecaire, bagdad, teheran, karachi, ryad, delhi, mumbai, chennai, calcutta, pekin, seoul, tokyo, shanghai, osaka, taipei, hongkong, manille, bangkok, hochiminhville, jakarta, sydney};



// <<<-----------------------global objects--------------------------------------------------

#endif /* Global_h */

//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Player.h

#ifndef Player_h
#define Player_h

#include <stdio.h>
#include <vector>
#include <algorithm>

#include "Subject.h"
//#include "CardsPawnHeaders.h"

class Player : public Subject{
    
protected:
    std::string playername;
    RefCard* reference_card;
    Cards* role_card;
    std::vector<PlayerCard*> player_hand;
    
public:
    Player();            /* Default Constructor */
    Player(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand); /*Constructor*/
    Player(Player const& theplayer)  ;             /* Copy Constructor */
    virtual ~Player();
    
    //Accessors & Setters for Member Variables
    RefCard * getRefCard() const;
    void setRefCard(RefCard &refc);
    void printRefCard();
    
    Cards * getRoleCard() const;
    void setRoleCard(Cards &rc);
    void printRoleCard();
    
    std::string getPlayerName() const;
    void printPlayerName();
    
    std::vector<PlayerCard*>  getHand() const;
    void setHand(std::vector<PlayerCard*> &ha);
    void printHand();
    
    void draw2pcards(std::vector<PlayerCard*> &plyrdeck);
    void discardCards();
    
    void action();
    void buildResearchStation();
    void treatDisease();
    void ShareKnowledge();
    void discoverCure();
    
};

//Class Declarations for each RolePlayer : Player
//dispatcher, medic, scientist, researcher, operationsexpert, quarantinespecialist, contingencyplanner

class Dispatcher : public Player{
public:
    Dispatcher( );
    Dispatcher(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand);
    Dispatcher(Dispatcher const& disp)  ;
    virtual ~Dispatcher();
    void moveAnyPawn();
    void moveAnotherPlayerPawn();
};

class Medic : public Player{
public:
    Medic();
    Medic(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand);
    Medic (Medic const& med);
    virtual ~Medic();
    void removeCubesColor();
    void curedRemoveCubesColor();
};

class Scientist : public Player{
public:
    Scientist();
    Scientist(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand);
    Scientist (Scientist const& scient);
    virtual ~Scientist();
    void discoverCure(); //base method will be overridden
    
};

class Researcher : public Player{
public:
    Researcher();
    Researcher(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand);
    Researcher(Researcher const& research);
    virtual ~Researcher();
    void giveCityCard(); //argument: Citycard to give
    
};

class Operationsexpert : public Player{
public:
    Operationsexpert();
    Operationsexpert(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand);
    Operationsexpert(Operationsexpert const& opexpert);
    virtual ~Operationsexpert();
    void buildResearchStation();
    void moveResearchstationCity();
    
};

class Quarantinespecialist : public Player{
public:
    Quarantinespecialist();
    Quarantinespecialist(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand);
    Quarantinespecialist(Quarantinespecialist const& qspecialist);
    virtual ~Quarantinespecialist();
    void preventOutbreaks();
    void preventCubes();
    
};

class Contingencyplanner : public Player{
public:
    Contingencyplanner();
    Contingencyplanner(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand);
    Contingencyplanner(Contingencyplanner const& cplanner);
    virtual ~Contingencyplanner();
    void takeEventCard();
    
};

#endif /* Player_h */

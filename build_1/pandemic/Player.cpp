//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Player.cpp

#include "Player.h"
#include <iostream>
using namespace std;


//CONSTRUCTORS & DESTRUCTORS of Class PLAYER

//Player - Default Constructor
Player::Player(){
    this->playername="";
    reference_card=nullptr;
    role_card=nullptr;
}


//Player - Constructor
Player::Player(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand){
    reference_card=refcard;
    role_card=rolecard;
    player_hand=p_hand;
    this->playername="";
}


 Player::Player(Player const& theplayer){
     playername=theplayer.playername;
 reference_card=theplayer.reference_card;
 role_card=theplayer.role_card;
 player_hand=theplayer.player_hand;
 }


//Player - Destructor
Player::~Player() {
    //player_hand
    for(int i=0;i<player_hand.size();i++){
        delete player_hand[i];
    }
    player_hand.clear();
}


//ACCESSORS & MUTATORS for Member Variables of Class PLAYER

RefCard * Player::getRefCard() const{
    return reference_card;
}
void Player::setRefCard(RefCard &refc){
    reference_card=&refc;
}

void Player::printRefCard(){
    if (reference_card != nullptr){reference_card->printCard();}
}

Cards * Player::getRoleCard() const{
    return role_card;
}

void Player::setRoleCard(Cards &rc){
    role_card=&rc;
}

void Player::printRoleCard(){
    if (role_card != nullptr){
        role_card->printCard();}
}


std::string  Player::getPlayerName() const{
    return playername;
}


std::vector<PlayerCard*>  Player::getHand() const{
    return player_hand;
}

void Player::setHand(std::vector<PlayerCard*> &ha){
    player_hand=ha;
    Notify();
}

void Player::printHand(){
    for(int i=0; i<player_hand.size();i++){
        if (player_hand[i] != nullptr){
            player_hand[i]->printCard();}
    }
}


void Player::draw2pcards(std::vector<PlayerCard*> &plyrdeck){
    std::cout<<"here";
    for(int k=0;k<2;k++){
        player_hand.push_back(plyrdeck.back());
        plyrdeck.pop_back();
        if((player_hand.back())->getCardName()=="Epidemic Card" ){
            //insert function triggers Epidemic Event
            NotifyEpidemicCard();
            player_hand.pop_back(); //remove this epidemic card from player hand
        };
        
    }
    NotifyHand();
    
    if(player_hand.size()>7){
        discardCards();
    }

}

void Player::discardCards(){
    NotifyDiscardHand();
}

void Player::action(){
}

void Player::buildResearchStation(){
}

void Player::treatDisease(){
}

void Player::ShareKnowledge(){
}

void Player::discoverCure(){
}

void action();
void buildResearchStation();
//if in same city as their player card, can build a research station there. if all research stations built, remove one from anywhere on the board
void treatDisease();
//remove 1 cube, if disease cured remove all 3 cubes

void ShareKnowledge();
//give the City card that matches the city you are in to another player
//or take the City card that matches the city you are in from another player


void discoverCure();
//"At any research station, discard 5 City cards of the same color from your"
//"hand to cure the disease of that color. Move the diseases cure marker to its"
//"Cure Indicator."
//"If no cubes of this color are on the board, this disease is now eradicated."
//"Flip its cure marker from its vial side to its  side"



//Class Implementations for each RolePlayer : Player
//dispatcher, medic, scientist, researcher, operationsexpert, quarantinespecialist, contingencyplanner

//Dispatcher
Dispatcher::Dispatcher( ){
    Player();
}
Dispatcher::Dispatcher(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, p_hand)
{}
Dispatcher::Dispatcher(Dispatcher const& disp){}
Dispatcher::~Dispatcher(){}
void Dispatcher::moveAnyPawn(){}
void Dispatcher::moveAnotherPlayerPawn(){}


//Medic
Medic::Medic(){
    Player();
}
Medic::Medic(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, p_hand)
{}
Medic::Medic (Medic const& med){}
Medic::~Medic(){}
void Medic::removeCubesColor(){}
void Medic::curedRemoveCubesColor(){}


//Scientist
Scientist::Scientist(){
    Player();
}
Scientist::Scientist(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, p_hand)
{}
Scientist::Scientist (Scientist const& scient){}
Scientist::~Scientist(){}
void Scientist::discoverCure(){} //base method will be overridden

//Researcher
Researcher::Researcher(){
    Player();
}
Researcher::Researcher(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, p_hand)
{}
Researcher::Researcher(Researcher const& research){}
Researcher::~Researcher(){}
void Researcher::giveCityCard(){} //argument: Citycard to give


//Operationsexpert
Operationsexpert::Operationsexpert(){
    Player();
}
Operationsexpert::Operationsexpert(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, p_hand)
{}
Operationsexpert::Operationsexpert(Operationsexpert const& opexpert){}
Operationsexpert::~Operationsexpert(){}
void Operationsexpert::buildResearchStation(){}
void Operationsexpert::moveResearchstationCity(){}

//Quarantinespecialist::
Quarantinespecialist::Quarantinespecialist(){
    Player();
}
Quarantinespecialist::Quarantinespecialist(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, p_hand)
{}
Quarantinespecialist::Quarantinespecialist(Quarantinespecialist const& qspecialist){}
Quarantinespecialist::~Quarantinespecialist(){}
void Quarantinespecialist::preventOutbreaks(){}
void Quarantinespecialist::preventCubes(){}

//Contingencyplanner::
Contingencyplanner::Contingencyplanner(){
    Player();
}
Contingencyplanner::Contingencyplanner(RefCard *refcard, Cards *rolecard, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, p_hand)
{}
Contingencyplanner::Contingencyplanner(Contingencyplanner const& cplanner){}
Contingencyplanner::~Contingencyplanner(){}
void Contingencyplanner::takeEventCard(){}


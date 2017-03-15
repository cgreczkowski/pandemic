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
    reference_card=nullptr;
    role_card=nullptr;
    pawn_co=nullptr;
}

//Player - Constructor
Player::Player(RefCard *refcard, Cards *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand){
    reference_card=refcard;
    role_card=rolecard;
    pawn_co=pawnc;
    player_hand=p_hand;
}


 Player::Player(Player const& theplayer){
 reference_card=theplayer.reference_card;
 role_card=theplayer.role_card;
 pawn_co=theplayer.pawn_co;
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

Pawn * Player::getPawn() const{
    return pawn_co;
}
void Player::setPawn(Pawn &pa){
    pawn_co=&pa;
}

void Player::printPawn(){
    if(pawn_co != nullptr){
        pawn_co->printPawn();
    }
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



//Class Implementations for each RolePlayer : Player
//dispatcher, medic, scientist, researcher, operationsexpert, quarantinespecialist, contingencyplanner

//Dispatcher
Dispatcher::Dispatcher( ){
    Player();
}
Dispatcher::Dispatcher(RefCard *refcard, DispatcherCard *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, pawnc, p_hand)
{}
Dispatcher::Dispatcher(Dispatcher const& disp){}
Dispatcher::~Dispatcher(){}
void Dispatcher::moveAnyPawn(){}
void Dispatcher::moveAnotherPlayerPawn(){}


//Medic
Medic::Medic(){
    Player();
}
Medic::Medic(RefCard *refcard, MedicCard *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, pawnc, p_hand)
{}
Medic::Medic (Medic const& med){}
Medic::~Medic(){}
void Medic::removeCubesColor(){}
void Medic::curedRemoveCubesColor(){}


//Scientist
Scientist::Scientist(){
    Player();
}
Scientist::Scientist(RefCard *refcard, ScientistCard *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, pawnc, p_hand)
{}
Scientist::Scientist (Scientist const& scient){}
Scientist::~Scientist(){}
void Scientist::discoverCure(){} //base method will be overridden

//Researcher
Researcher::Researcher(){
    Player();
}
Researcher::Researcher(RefCard *refcard, ResearcherCard *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, pawnc, p_hand)
{}
Researcher::Researcher(Researcher const& research){}
Researcher::~Researcher(){}
void Researcher::giveCityCard(){} //argument: Citycard to give


//Operationsexpert
Operationsexpert::Operationsexpert(){
    Player();
}
Operationsexpert::Operationsexpert(RefCard *refcard, OperationsexpertCard *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, pawnc, p_hand)
{}
Operationsexpert::Operationsexpert(Operationsexpert const& opexpert){}
Operationsexpert::~Operationsexpert(){}
void Operationsexpert::buildResearchStation(){}
void Operationsexpert::moveResearchstationCity(){}

//Quarantinespecialist::
Quarantinespecialist::Quarantinespecialist(){
    Player();
}
Quarantinespecialist::Quarantinespecialist(RefCard *refcard, QuarantinespecialistCard *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, pawnc, p_hand)
{}
Quarantinespecialist::Quarantinespecialist(Quarantinespecialist const& qspecialist){}
Quarantinespecialist::~Quarantinespecialist(){}
void Quarantinespecialist::preventOutbreaks(){}
void Quarantinespecialist::preventCubes(){}

//Contingencyplanner::
Contingencyplanner::Contingencyplanner(){
    Player();
}
Contingencyplanner::Contingencyplanner(RefCard *refcard, ContingencyplannerCard *rolecard, Pawn *pawnc, std::vector<PlayerCard*> p_hand):
Player(refcard, rolecard, pawnc, p_hand)
{}
Contingencyplanner::Contingencyplanner(Contingencyplanner const& cplanner){}
Contingencyplanner::~Contingencyplanner(){}
void Contingencyplanner::takeEventCard(){}


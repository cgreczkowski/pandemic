//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//PlayerView.h

#ifndef PlayerView_h
#define PlayerView_h

#include <iostream>
#include <string>
#include "Observer.h"
#include "Player.h"
#include <vector>
#include <iterator>


class PlayerView : public Observer{
public:
    PlayerView(); //default constructor
    PlayerView(Player *plyr);
    ~PlayerView();
    void Update();
    void UpdateHand();
    void UpdateDiscardHand();
    void UpdateEpidemicCard();
    void display();
    void displayHand();
    void displayDiscardHand();
    void displayEpidemicCard();
protected:
    Player* p;

};
#endif /* PlayerView_h */

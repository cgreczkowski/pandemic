//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Pawn.h

#ifndef PAWN_H_
#define PAWN_H_


#include <iostream>
//#include "Player.h"

#include "Player.h"

class Pawn {
public:
    Pawn();
    Pawn(std::string color, Player* p);
    ~Pawn();
    void printPawn();
    std::string getPawnColor();
    std::string getPawnPlayerName();
    Player* getPawnPlayer();
    Player* p;
    
protected:
    std::string color;
    
    
};

#endif /* PAWN_H_ */

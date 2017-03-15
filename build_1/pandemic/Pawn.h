//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Pawn.h

#ifndef PAWN_H_
#define PAWN_H_

#include <iostream>

class Pawn {
public:
    Pawn();
    Pawn(std::string pcolor);
    ~Pawn();
    void printPawn();
protected:
    std::string pawncolor;
    
};

#endif /* PAWN_H_ */

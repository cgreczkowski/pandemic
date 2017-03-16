//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Pawn.cpp

#include "Pawn.h"
#include <string>

Pawn::Pawn(){}

Pawn::Pawn(std::string color, Player* p) {
    this->color=color;
    this->p=p;
    //pplayer=pplayer;
}

Pawn::~Pawn(){

}

void Pawn::printPawn(){
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"Pawn: " << this->color <<std::endl;
    //std::cout<<getPlayerName()<<std::endl;
    std::cout<<"----------------------------------------\n\n"<<std::endl;
    
}

std::string Pawn::getPawnColor(){
    return color;
}

std::string Pawn::getPawnPlayerName(){
    return (p->getPlayerName());
}

Player* Pawn::getPawnPlayer(){
    return p;
}

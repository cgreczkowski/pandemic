//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Pawn.cpp

#include "Pawn.h"
#include <string>

Pawn::Pawn(std::string pcolor) {
    pawncolor=pcolor;
}

Pawn::~Pawn(){

}

void Pawn::printPawn(){
    std::cout<<"----------------------------------------"<<std::endl;
    std::cout<<"Pawn: " << this->pawncolor <<std::endl;
    std::cout<<"----------------------------------------\n\n"<<std::endl;
    
}

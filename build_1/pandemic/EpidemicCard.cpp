//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//EpidemicCard.h

#include "EpidemicCard.h"


EpidemicCard::EpidemicCard(){
    card_name="Epidemic Card";
    card_textfront =
    "1-INCREASE \n"
    "Move the infection rate marker foward. \n"
    "2-INFECT \n"
    "Draw the bottom cards from the infection deck and put a cube on that city. Discard that card.\n"
    "3-INTENSIFY \n"
    "Shuffle the cards in the infection discard pile and put them on top of the infection deck.";
    card_textback="";
}

EpidemicCard::~EpidemicCard(){

}

void EpidemicCard::EventAction(){
    Increase();
    Infect();
    Intensify();

}

void EpidemicCard::Increase(){
//Move the infection rate marker foward
}

void EpidemicCard::Infect(){
//Draw the bottom cards from the infection deck and put a cube on that city. Discard that card.
}

void EpidemicCard::Intensify(){
//Shuffle the cards in the infection discard pile and put them on top of the infection deck
}

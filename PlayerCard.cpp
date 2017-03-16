//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//PlayerCard.cpp

#include "PlayerCard.h"

PlayerCard::PlayerCard() {
    // PlayerCard (events, cities, epidemics)
    Cards();
    
}

PlayerCard::PlayerCard(std::string title, std::string cardtextfront, std::string cardtextback){
    Cards(title, cardtextfront, cardtextback);
}

void PlayerCard::EventAction(){

}

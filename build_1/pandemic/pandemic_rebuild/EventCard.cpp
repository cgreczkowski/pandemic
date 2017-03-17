//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//EventCard.cpp

#include "EventCard.h"

EventCard::EventCard(){
    Cards();
}

EventCard::EventCard(std::string title, std::string cardtextfront, std::string cardtextback) {
    Cards(title, cardtextfront, cardtextback);
}

EventCard::~EventCard(){
}


//All 5 event cards


Airlift::Airlift(){
    card_name="Airlift";
    card_textfront =
        "";
    card_textback="";

}

Airlift::~Airlift(){

}

void Airlift::EventAction(){
}





OneQuietNight::OneQuietNight(){
    card_name="One Quiet Night";
    card_textfront =
    "";
    card_textback="";

}

OneQuietNight::~OneQuietNight(){

}


void OneQuietNight::EventAction(){

}




GovernmentGrant::GovernmentGrant(){
    card_name="Government Grant";
    card_textfront =
    "";
    card_textback="";
    
}

GovernmentGrant::~GovernmentGrant(){
    
}


void GovernmentGrant::EventAction(){
    
}




ResilientPopulation::ResilientPopulation(){
    card_name="Resilient Population";
    card_textfront =
    "";
    card_textback="";
    
}

ResilientPopulation::~ResilientPopulation(){
    
}


void ResilientPopulation::EventAction(){
    
}





Forecast::Forecast(){
    card_name="Forecast";
    card_textfront =
    "";
    card_textback="";
    
}

Forecast::~Forecast(){
    
}


void Forecast::EventAction(){
    
}

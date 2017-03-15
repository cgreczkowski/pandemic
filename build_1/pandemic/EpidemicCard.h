//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//EpidemicCard.h

#ifndef EpidemicCard_h
#define EpidemicCard_h

#include <stdio.h>
#include "PlayerCard.h"

#endif /* EpidemicCard_hp */

class EpidemicCard : public PlayerCard{
public:
    EpidemicCard();
    ~EpidemicCard();
    
    void EventAction();
    
    void Increase();
    void Infect();
    void Intensify();

};



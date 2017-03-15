//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//PlayerCard.h

#ifndef PLAYERCARD_H_
#define PLAYERCARD_H_

#include "Cards.h"

class PlayerCard : public Cards
{
private:
    std::string playercardname;
public:
    PlayerCard();
    PlayerCard(std::string playercardname, std::string cardtextfront, std::string cardtextback);
    virtual void EventAction();
};

#endif /* PLAYERCARD_H_ */

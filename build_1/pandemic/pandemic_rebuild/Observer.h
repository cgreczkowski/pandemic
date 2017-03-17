//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//Observer.h (Abstract class)


#ifndef OBSERVER_H
#define OBSERVER_H
class Observer {
public:
    ~Observer();
    virtual void Update() = 0;  //pure virtual function: must be implemented
    virtual void UpdateHand() = 0;
    virtual void UpdateDiscardHand()=0;
    virtual void UpdateEpidemicCard()=0;
protected:
    Observer();
};
#endif //OBSERVER_H

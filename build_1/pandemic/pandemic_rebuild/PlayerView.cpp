//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//PlayerView.cpp

#include "PlayerView.h"

PlayerView::PlayerView(){
}

PlayerView::PlayerView(Player *plyr){
    p=plyr;
    p->Attach(this); //for each player, attach one observer
}


PlayerView::~PlayerView(){
    p->Detach(this);
    p=nullptr;

}

void PlayerView::Update(){
    display();
}

void PlayerView::UpdateHand(){
    displayHand();
}
void PlayerView::UpdateDiscardHand(){
    displayDiscardHand();
}
void PlayerView::UpdateEpidemicCard(){
    displayEpidemicCard();
}
void PlayerView::display(){
        p->printRoleCard();
        p->printRefCard();
        p->printHand();
        std::cout<<"====================================================================\n\n\n"<<std::endl;

}

void PlayerView::displayHand(){
    p->printHand();
    std::cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"<<std::endl;
}

void PlayerView::displayDiscardHand(){
    int sizehand = (int)(p->getHand()).size();
    int nbcardsdiscard=sizehand % 7;
    std::cout<<"\nYou have more than 7 player cards. You must discard "<< nbcardsdiscard <<" cards."<<std::endl;
    std::cout<<"What card(s) do you want to discard?"<<std::endl;
    for(int i=0; i<sizehand;i++){
        std::cout<< i+1 <<" - " <<((p->getHand())[i])->getCardName()<<std::endl;
    }
    
//    int n=sizehand+2; //init with nb never reached
//    while(nbcardsdiscard>0){
//        std::cout<<"For each card you discard, enter number then press enter."<<std::endl;
//        std::cin>>n;
//        n=n-1;
//        std::cout<<n;
//        
//      if(0<=n && n<sizehand){
//          //delete ((p->getHand())[n]);
//          nbcardsdiscard--;
//      }
//      else{ std::cout<<"Enter a valid number."<<std::endl; }
//    }
    
       p->printHand();
}

void PlayerView::displayEpidemicCard(){
    std::cout<<"////////// ALERT EPIDEMIC CARD \\\\\\\\\\"<<std::endl;
    ((p->getHand()).back())->printCard();
    
}

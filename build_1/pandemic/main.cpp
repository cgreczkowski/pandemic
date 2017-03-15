//**********************************************
//COMP345 Assignment 2
//Winter 2017
//**********************************************
//
//main.cpp

#include <iostream>
#include <ctime>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>
#include <algorithm>
#include <random>

#include "PlayerView.h"
#include "CardsPawnHeaders.h"

#include "Global.h"


void initInfectionDeck() {
	infectiondeck.insert(infectiondeck.end(), infectioncardarr, infectioncardarr + (sizeof(infectioncardarr) / sizeof(infectioncardarr[0])));

	shuffle(infectiondeck.begin(), infectiondeck.end(), std::default_random_engine(std::random_device()()));
}
void setInitPlayerDeck(){
    playerdeck.insert(playerdeck.end(), citycardarr, citycardarr+(sizeof(citycardarr)/sizeof(citycardarr[0])));
    playerdeck.insert(playerdeck.end(), eventcardarr, eventcardarr+(sizeof(eventcardarr)/sizeof(eventcardarr[0])));
    
    //Rnd Shuffle playerdeck
    shuffle(playerdeck.begin(), playerdeck.end(), std::default_random_engine(std::random_device()()));
    //std::random_shuffle(playerdeck.begin(), playerdeck.end());
    //    for(int i=0; i<playerdeck.size();i++){
    //        playerdeck[i]->printCard();
    //    }
    
    
}

void createRoles(){
    // Method for distributing roles
    srand(static_cast<unsigned int>(time(nullptr)));
    int arrcheck[nbplayers];
    for (int i = 0; i < nbplayers; i++) {
        arrcheck[i] = nbplayers + 2;		// initialize test array elements with values
        // nbplayers + 2  just to make sure that this value is never reached
    }
    
    for (int i = 0; i < nbplayers; i++) {		// Method for giving role (by number)
        bool check;
        int nb;
        do {
            nb = rand() % 6;				// rnd nb goes from 0 to 6
            check = true;
            for (int j = 0; j <= i; j++) {
                if (nb == arrcheck[j]) {
                    check = false;
                    break;
                }
            }
            
        } while(!check);
        arrcheck[i] = nb;
        // std::cout<<arrcheck[i]<<std::endl;    // test method output rand nb
    }
    
    
    // FOR EACH PLAYER...
    // Distributes actual role with switch(rndnumber)
    // Call corresponding Role Player constructor
    // then distribute PlayerCard's from the <vector> playerdeck to the <vector> player hand
    // arrayOfPlayer[i] points to the role player object created to keep track of all players
    // creates playerview object (observer) for each player (subject)
    // Set playercard*'s in player_hand's  - Then NOTIFY();
    for (int i = 0; i < nbplayers; i++) {
        
        
        
        switch(arrcheck[i]){
            case 0:{
                Dispatcher* dispatcher = new Dispatcher(&referencecards[i], &dispatchercard1, &pink, dispatcherhand);
                for (int k = 0; k < nbcardsplayer; k++) {
                    dispatcherhand.push_back(playerdeck.back());
                    playerdeck.pop_back();
                }
                arrayofPlayers[i] = dispatcher;
                arrayofPlayerViews[i] = new PlayerView(arrayofPlayers[i]);
                arrayofPlayers[i]->setHand(dispatcherhand);
                break;
            }
            case 1:{
                Medic* medic=new Medic(&referencecards[i], &mediccard1, &orange, medichand);
                for(int k=0;k<nbcardsplayer;k++){
                    medichand.push_back(playerdeck.back());
                    playerdeck.pop_back();
                }
                arrayofPlayers[i]=medic;
                arrayofPlayerViews[i] = new PlayerView(arrayofPlayers[i]);
                arrayofPlayers[i]->setHand(medichand);
                break;
            }
            case 2:{
                Scientist* scientist=new Scientist(&referencecards[i], &scientistcard1, &white, scientisthand);
                for(int k=0;k<nbcardsplayer;k++){
                    scientisthand.push_back(playerdeck.back());
                    playerdeck.pop_back();
                }
                arrayofPlayers[i]=scientist;
                arrayofPlayerViews[i] = new PlayerView(arrayofPlayers[i]);
                arrayofPlayers[i]->setHand(scientisthand);
                break;
            }
            case 3:{
                Researcher* researcher=new Researcher(&referencecards[i], &researchercard1, &brown, researcherhand);
                for(int k=0;k<nbcardsplayer;k++){
                    researcherhand.push_back(playerdeck.back());
                    playerdeck.pop_back();
                }
                arrayofPlayers[i]=researcher;
                arrayofPlayerViews[i] = new PlayerView(arrayofPlayers[i]);
                arrayofPlayers[i]->setHand(researcherhand);
                break;
            }
            case 4:{
                Operationsexpert* operationsexpert=new Operationsexpert(&referencecards[i], &operationsexpertcard1, &palegreen, operationsexperthand);
                for(int k=0;k<nbcardsplayer;k++){
                    operationsexperthand.push_back(playerdeck.back());
                    playerdeck.pop_back();
                }
                arrayofPlayers[i]=operationsexpert;
                arrayofPlayerViews[i] = new PlayerView(arrayofPlayers[i]);
                arrayofPlayers[i]->setHand(operationsexperthand);
                break;
            }
            case 5:{
                Quarantinespecialist* quarantinespecialist=new Quarantinespecialist(&referencecards[i], &quarantinespecialistcard1, &darkgreen, quarantinespecialisthand);
                for(int k=0;k<nbcardsplayer;k++){
                    quarantinespecialisthand.push_back(playerdeck.back());
                    playerdeck.pop_back();
                }
                arrayofPlayers[i]=quarantinespecialist;
                arrayofPlayerViews[i] = new PlayerView(arrayofPlayers[i]);
                arrayofPlayers[i]->setHand(quarantinespecialisthand);
                break;
            }
            case 6:{
                Contingencyplanner* contingencyplanner=new Contingencyplanner(&referencecards[i], &contingencyplannercard1, &aqua, contingencyplannerhand);
                for(int k=0;k<nbcardsplayer;k++){
                    contingencyplannerhand.push_back(playerdeck.back());
                    playerdeck.pop_back();
                }
                arrayofPlayers[i]=contingencyplanner;
                arrayofPlayerViews[i] = new PlayerView(arrayofPlayers[i]);
                arrayofPlayers[i]->setHand(contingencyplannerhand);
                break;
            }
            default:{
                break;
            }
        }
    }
    
    
}

void addEpCardsPlayerDeck(){
    //insert Epidemic card after initial PlayerCard's were distributed to players
    playerdeck.insert(playerdeck.end(), epcardarr, epcardarr+(sizeof(epcardarr)/sizeof(epcardarr[0])));
    
    //Rnd Shuffle PlayerDeck
    shuffle(playerdeck.begin(), playerdeck.end(), std::default_random_engine(std::random_device()()));
}
void initialInfection() {
	//draw 3, then 2, then 1 infection cards and infect according to their city and color
	int i = 3;
	while (i >= 1) {
		for (int k = 3; k > 0; k--) {
			//draw infection card from infection deck
			InfectionCard* curr_inf = infectiondeck.back();
			string city = curr_inf->getCardName();
			string color = curr_inf->getCardTextFront();		
			//infect the city
			for (int j = 1; j <= i; j++) {
				curr_inf->Infect(city, color);
			}			
			//add drawn card to discard pile
			infectiondeck_discard.push_back(curr_inf);
			//remove card from infection deck
			infectiondeck.pop_back();
		}
		i--;
	}	
	system("pause");
}

void initGame(){
    
	initInfectionDeck();

    setInitPlayerDeck();
    
    createRoles();
    
    addEpCardsPlayerDeck();

	initialInfection();
    
}

void endGame(){
    
    // <vector> arrayofPlayerViews contains all *PlayerView (1 per player)
    for(int i=0; i<nbplayers;i++){
        arrayofPlayerViews[i]=nullptr;
        delete arrayofPlayerViews[i];
    }
    
    // <vector> arrayofPlayers contains all *Player
    for(int i=0; i<nbplayers;i++){
        arrayofPlayers[i]=nullptr;
        delete arrayofPlayers[i];
    }
    
    // <vector> playerdeck contains *PlayerCard
    for(int i=0;i<playerdeck.size();i++){
        playerdeck[i]=nullptr;
        delete playerdeck[i];
    }
    // <vector> discardpile contains *Playercard
    for(int i=0;i<discardpile.size();i++){
        discardpile[i]=nullptr;
        delete discardpile[i];
    }

	// <vector> infectiondeck contains *InfectionCard
	for (int i = 0; i<infectiondeck.size(); i++) {
		infectiondeck[i] = nullptr;
		delete infectiondeck[i];
	}
	// <vector> infectiondeck_discard contains *InfectionCard
	for (int i = 0; i<infectiondeck_discard.size(); i++) {
		infectiondeck_discard[i] = nullptr;
		delete infectiondeck_discard[i];
	}
    
    
}




int main(){
    
    initGame();
    
    //arrayofPlayers[0]->draw2pcards(playerdeck);
     //arrayofPlayers[0]->draw2pcards(playerdeck);
    // arrayofPlayers[0]->draw2pcards(playerdeck);
    
   // arrayofPlayers[1]->draw2pcards(playerdeck);
    
    endGame();
}

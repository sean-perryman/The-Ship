//
//  MessHall.cpp
//  The Ship
//
//  Created by Sean Perryman on 9/18/14.
//  Copyright (c) 2014 Sean Perryman. All rights reserved.
//

#include "MessHall.h"
#include "Library.h"
using namespace std;

char mh_choice;
bool continueGame;
bool leaveExamine;

string MessHall() {
    cout << "You are by yourself. There is some food on the tables, but no one to eat it.\n";
    cout << "From here you can access the bridge, the cargo bay, the medical suite, or the crew quarters.\n";

    continueGame = true;
    
    while (continueGame) {
        cout << "\nWhat would you like to do?\n\n";
    
        cout << "[B]ridge\n";
        cout << "[C]argo Bay\n";
        cout << "[M]edical Suite\n";
        cout << "Crew [Q]uarters\n";
        cout << "[E]xamine the food\n";
        cout << "[J]ump out of the airlock (Quit the game)\n";
        cout << "Choice: ";
        cin >> mh_choice;
        
        switch( mh_choice ) {
            case 'B':
            case 'b':
                Bridge();
                break;
            case 'C':
            case 'c':
                CargoBay();
                break;
            case 'M':
            case 'm':
                MedicalSuite();
                break;
            case 'Q':
            case 'q':
                CrewQuarters();
                break;
            case 'E':
            case 'e':
                ExamineTheFood();
                break;
            case 'J':
            case 'j':
                continueGame = false;
                break;
        }
        
        if (g_messHallDone && g_crewQuartersDone && g_medicalSuiteDone && g_cargoBayDone && g_bridgeDone) {
            //print game over text
            //set continueGame bool to false so the game will exit
        }
        
    }
    
    return "jump";
}

bool ExamineTheFood() {
    cout << "You walk over to one of the tables and look at the food sitting there. Everything seems to be\n";
    cout << "in order. There is an apple that you could take with you.\n";
    
    leaveExamine = false;
    
    while ( !leaveExamine ) {
        cout << "\nWhat would you like to do?\n\n";
        
        if (!g_haveApple) {
            cout << "\n[T]ake the apple\n";
        }
        cout << "[R]eturn\n";
        
        cout << "Choice: ";
        cin >> mh_choice;
        
        switch( mh_choice ) {
                case 'r':
                case 'R':
                    leaveExamine = true;
                    break;
                case 'T':
                case 't':
                    if (!g_haveApple) {
                        cout << "\nYou grab the apple from the table and place it in your pocket.\n";
                        g_haveApple = true;
                    }
                    break;
        }
        
    }
    
    return true;
}
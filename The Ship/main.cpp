//
//  main.cpp
//  The Ship
//
//  Created by Sean Perryman on 9/18/14.
//  Copyright (c) 2014 Sean Perryman. All rights reserved.
//

#include <iostream>
#include "Library.h"
using namespace std;

string gameResult;

int main(int argc, const char * argv[])
{
    cout << "The Ship\n";
    cout << "Programmed by Sean Perryman\n\n";
    cout << "You are a crew member on a deep space vessel. You awake to a loud noise.\n";
    cout << "You lay in bed and listen, but there is nothing. No alarms, people screaming, nothing.\n";
    cout << "You decide to go back to bed.\n";
    cout << "press the Enter key to continue...\n\n";
    cin.get();
    cout << "You wake at your usual time and go through your morning routing. Shower, get dressed, coffee.\n";
    cout << "You head out into the hallway and notice it still seems quiet. Looking out a nearby port hole\n";
    cout << "it seems the ship isn't moving. You head off to the mess hall to see what's going on.\n\n";
    
    gameResult = MessHall();
    
    /* Depending on what result comes back through the gameResult variable, display a different game
     over message for the player */
    
    cout << "Thank you for playing! Please play again soon.\n\n";
    
    return 0;
}


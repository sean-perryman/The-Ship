//
//  CrewQuarters.cpp
//  The Ship
//
//  Created by Sean Perryman on 9/18/14.
//  Copyright (c) 2014 Sean Perryman. All rights reserved.
//

#include "CrewQuarters.h"
#include "Library.h"
using namespace std;

char cq_choice;
bool leaveCrewQuarters = false;
bool leftRoomDone = false;
bool rightRoomDone = false;
int leftRoomEvent;
int rightRoomEvent;

bool CrewQuarters()
{
    if (!leaveCrewQuarters)
    {
        //Choose the left and right room events
        srand(time(NULL));
        leftRoomEvent = rand() % 2 + 1;
        
        srand(time(NULL));
        rightRoomEvent = rand() % 2 + 1;
        
        cout << "You carefully make your way into the crew quarters.\n";
        cout << "There is a strange odor coming from the room on the left,\n";
        cout << "and you hear and rattling in the room on the right\n";

        while (!leaveCrewQuarters) {
            cout << "\nWhat would you like to do?\n\n";
    
            if (!leftRoomDone) { cout << "Check out the smell in the [L]eft room\n"; }
            if (!rightRoomDone) { cout << "Investigate the rattling in the [R]ight room\n"; }
            cout << "[T]urn around and go back to the mess hall\n";
        
            cout << "Choice: ";
            cin >> cq_choice;
        
            switch (cq_choice) {
                case 'L':
                case 'l':
                    leftRoomDone = LeftRoom();
                    break;
                case 'R':
                case 'r':
                    rightRoomDone = RightRoom();
                    break;
                case 'T':
                case 't':
                    leaveCrewQuarters = true;
                    break;
        
            }
        
        }
    }
    else
    {
        cout << "You've already seen enough, no need to go in again.\n\n";
    }
    
    return true;
}

bool RightRoom()
{
    if (!rightRoomDone)
    {
        cout << "\nYou cautiously push open the door and peer inside the room.\n";
        cout << "You are releived to find a fan that has tipped over against the desk\n";
        cout << "to be the source of the rattling. You walk in and stand it back up. As\n";
        cout << "you turn to leave, you see ";
    
        /* Here we will do a rand to determine the event that happens. Either an Alien appears and
         the player gets killed, or they find an object that could help them? Maybe a dead crew member?*/
        
        switch( rightRoomEvent )
        {
            case 1:
                //Do something here
                break;
            case 2:
                //Do something else here
                break;
        }
    }
    else
    {
        cout << "\nThe door appears to be blocked, you are unable to open it again.\n\n";
    }
    
    return true;
}

bool LeftRoom()
{
    cout << "\nYou push open the door to the left room full expecting to see\n";
    cout << "a dead body due to the horrible stench. Instead you happen up ";
    
    /* Here like in the Right Room, there will be a random event here with a couple of
     possible outcomes. I don't think that it will kill the player automatically, but
     perhaps offer them a chance to overcome the obstacle instead.
     */
    switch( leftRoomEvent )
    {
        case 1:
            //Do something here
            break;
        case 2:
            //Do something else here
            break;
    }
    
    return true;
}

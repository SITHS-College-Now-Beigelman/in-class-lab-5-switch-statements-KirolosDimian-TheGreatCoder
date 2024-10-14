// Kirolos Dimian
// Lab 5 Part 3 Section A
// 10/8/24

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;


int main ()
{
    // Making sure that time is 0 only once by not including it in the while loop.
    srand(time(0));

    // Defining Variables
    int The_Direction; // Used for the random number
    int Step_Number = 1; // Used to count the steps for the loop
    int north = 0; // Used to count the steps north and south
    int east = 0; // Used to count the steps east and west

    // Creating a while loop
    while (Step_Number <= 25)
    {

        The_Direction = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        cout << endl; // skips a line for organization


        switch (The_Direction)
        {
        // Made for every time the random number is 1 (MADE FOR NORTH)
        case (1):
        
            // Prints the step number with a blank line under for organization
            cout << "This is step number " << Step_Number << endl;
            cout << endl;

            // Updates the north position every time it is randomly selected
            north = north + 1;
            cout << "The robot has moved 1 block north!" << endl;

            // Updates the step counter so it is not in an infinite loop
            Step_Number = Step_Number + 1;
            break;

        case (2):

            // Prints the step number with a blank line under for organization
            cout << "This is step number " << Step_Number << endl;
            cout << endl;

            // Updates the north position negatively every time SOUTH is randomly selected 
            north = north - 1;
            cout << "The robot has moved 1 block south!" << endl;

            // Updates the step counter so it is not in an infinite loop
            Step_Number = Step_Number + 1;
            break;

        case (3):

            // Prints the step number with a blank line under for organization        
            cout << "This is step number " << Step_Number << endl;
            cout << endl;
            
            // Updates the east position every time it is randomly selected
            east = east + 1;
            cout << "The robot has moved 1 block east!" << endl;

            // Updates the step counter so it is not in an infinite loop
            Step_Number = Step_Number + 1;
            break;

        case (4):
        
            // Prints the step number with a blank line under for organization
            cout << "This is step number " << Step_Number << endl;
            cout << endl;
            
            // Updates the east position negatively every time WEST is randomly selected            
            east = east - 1;
            cout << "The robot has moved 1 block west!" << endl;

            // Updates the step counter so it is not in an infinite loop
            Step_Number = Step_Number + 1;
            break;
        }

    // Used to make the print statements everytime the loop is run through
    // If the value of north is greater than or equal to 0
    if (north >= 0) 
    {
        // Print that it is that value of blocks north
        cout << "The robot moved " << north << " block(s) to the north and ";
    }   

    // If the value of north is less than 0
    if (north < 0)
    {
        // Print that the robot moved the negative of the value (since it would be negative and this would turn it positive)
        cout << "The robot moved " << -(north) << " block(s) to the south and ";
    }

    // If the value of east is greater than or equal to 0
    if (east >= 0)
    {
        // Print that it is that value of blocks north
        cout << east << " block(s) to the east." << endl;
    }

    // If the value of east is less than 0
    if (east < 0)
    {
        // Print that the robot moved the negative of the value (since it would be negative and this would turn it positive)
        cout << -(east) << " block(s) to the west." << endl;
    }

    }


    // Skips a line for organization between every last line and the new step
    cout << endl;

    // Exits the code after everything is done.
    return 0;
}

/* Output of my code

This is step number 1

The robot has moved 1 block east!
The robot moved 0 block(s) to the north and 1 block(s) to the east.

This is step number 2

The robot has moved 1 block south!
The robot moved 1 block(s) to the south and 1 block(s) to the east.

This is step number 3

The robot has moved 1 block north!
The robot moved 0 block(s) to the north and 1 block(s) to the east.

This is step number 4

The robot has moved 1 block south!
The robot moved 1 block(s) to the south and 1 block(s) to the east.

This is step number 5

The robot has moved 1 block south!
The robot moved 2 block(s) to the south and 1 block(s) to the east.

This is step number 6

The robot has moved 1 block east!
The robot moved 2 block(s) to the south and 2 block(s) to the east.

This is step number 7

The robot has moved 1 block west!
The robot moved 2 block(s) to the south and 1 block(s) to the east.

This is step number 8

The robot has moved 1 block south!
The robot moved 3 block(s) to the south and 1 block(s) to the east.

This is step number 9

The robot has moved 1 block west!
The robot moved 3 block(s) to the south and 0 block(s) to the east.

This is step number 10

The robot has moved 1 block east!
The robot moved 3 block(s) to the south and 1 block(s) to the east.

This is step number 11

The robot has moved 1 block east!
The robot moved 3 block(s) to the south and 2 block(s) to the east.

This is step number 12

The robot has moved 1 block south!
The robot moved 4 block(s) to the south and 2 block(s) to the east.

This is step number 13

The robot has moved 1 block east!
The robot moved 4 block(s) to the south and 3 block(s) to the east.

This is step number 14

The robot has moved 1 block east!
The robot moved 4 block(s) to the south and 4 block(s) to the east.

This is step number 15

The robot has moved 1 block south!
The robot moved 5 block(s) to the south and 4 block(s) to the east.

This is step number 16

The robot has moved 1 block north!
The robot moved 4 block(s) to the south and 4 block(s) to the east.

This is step number 17

The robot has moved 1 block south!
The robot moved 5 block(s) to the south and 4 block(s) to the east.

This is step number 18

The robot has moved 1 block south!
The robot moved 6 block(s) to the south and 4 block(s) to the east.

This is step number 19

The robot has moved 1 block west!
The robot moved 6 block(s) to the south and 3 block(s) to the east.

This is step number 20

The robot has moved 1 block north!
The robot moved 5 block(s) to the south and 3 block(s) to the east.

This is step number 21

The robot has moved 1 block east!
The robot moved 5 block(s) to the south and 4 block(s) to the east.

This is step number 22

The robot has moved 1 block east!
The robot moved 5 block(s) to the south and 5 block(s) to the east.

This is step number 23

The robot has moved 1 block west!
The robot moved 5 block(s) to the south and 4 block(s) to the east.

This is step number 24

The robot has moved 1 block south!
The robot moved 6 block(s) to the south and 4 block(s) to the east.

This is step number 25

The robot has moved 1 block south!
The robot moved 7 block(s) to the south and 4 block(s) to the east.

*/ 
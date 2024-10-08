// Kirolos Dimian
// Lab 5 Part 3
// 10/8/24

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;


int main ()
{
    
    srand(time(0));

    // Defining Variables
    int The_Direction;
    int Step_Number = 1;
    int north = 0;
    int south = 0;
    int east = 0;
    int west = 0;
    int Total_Blocks;

    while (Step_Number <= 25)
    {

    The_Direction = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
    cout << endl;


        switch (The_Direction)
        {
        case (1):
        
            cout << "This is step number " << Step_Number << endl;
            cout << endl;
            north = north + 1;
            cout << "The robot has moved 1 block north!" << endl;
            Step_Number = Step_Number + 1;
            break;

        case (2):
        
            cout << "This is step number " << Step_Number << endl;
            cout << endl;
            north = north - 1;
            cout << "The robot has moved 1 block south!" << endl;
            Step_Number = Step_Number + 1;
            break;

        case (3):
        
            cout << "This is step number " << Step_Number << endl;
            cout << endl;
            east = east + 1;
            cout << "The robot has moved 1 block east!" << endl;
            Step_Number = Step_Number + 1;
            break;

        case (4):
        
            cout << "This is step number " << Step_Number << endl;
            cout << endl;
            east = east - 1;
            cout << "The robot has moved 1 block west!" << endl;
            Step_Number = Step_Number + 1;
            break;
        }


    }

    cout << "This is how many total spaces it went north " << north << endl;
    cout << "This is how many total spaces it went south " << south << endl;
    cout << "This is how many total spaces it went east " << east << endl;
    cout << "This is how many total spaces it went west " << west << endl;

    double Total_Vert;


    cout << endl;

    return 0;
}
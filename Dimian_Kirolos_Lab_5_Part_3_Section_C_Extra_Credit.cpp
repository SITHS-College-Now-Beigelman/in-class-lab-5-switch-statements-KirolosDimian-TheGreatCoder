// Kirolos Dimian
// Lab 5 Part 3 Section C (Extra Credit)
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
    int Total_Runs = 10;
    double Total_Steps = 0;

    for (int i = 0; i < Total_Runs; i++)
    {
        // Resets these variables every time the loop is run
        int Step_Number = 0; // Used to count the steps for the loop
        int north = 0; // Used to count the steps north and south
        int east = 0; // Used to count the steps east and west

        while (north != 3 || east != 2) 
        // Creating a while loop
        {
            Step_Number++; // Increment the step count
            int The_Direction = rand() % 4 + 1; // Random number between 1 and 4 so each is 25% probable
            cout << endl; // Skips a line for organization

            if (Step_Number >= 1000000) // Check if the step limit is reached
            {
                cout << "The robot reached the limit of 1,000,000 steps." << endl;
                Step_Number = 1000000; // When it takes over 1 million steps to reach the destination we will add 1 million steps as a maximum cap
                break; // Exit the loop
            }

            switch (The_Direction) // Creates a switch in which there are cases for the coordinal directions
            {
                case 1: // North
                    north++; // Adds one to north when this is selected
                    // Print statement to show the step number and which way was randomly selected
                    cout << "This is step number " << Step_Number << ": The robot has moved 1 block north!" << endl; 
                    break; // So it can go to the next step

                case 2: // South
                    north--; // Subtracts one from north (meaning south) when this direction is chosen
                    // Print statement to show the step number and which way was randomly selected
                    cout << "This is step number " << Step_Number << ": The robot has moved 1 block south!" << endl;
                    break; // So it can go to the next step

                case 3: // East
                    east++; // Adds one to east when this is selected
                    // Print statement to show the step number and which way was randomly selected
                    cout << "This is step number " << Step_Number << ": The robot has moved 1 block east!" << endl;
                    break; // So it can go to the next step

                case 4: // West
                    east--; // Subtracts one from east (meaning west) when this direction is chosen
                    // Print statement to show the step number and which way was randomly selected
                    cout << "This is step number " << Step_Number << ": The robot has moved 1 block west!" << endl;
                    break; // So it can go to the next step
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

        // Skips a line for organization 
        cout << endl;        
        // Output the total steps taken for the current run
        cout << "On run " << (i + 1) << ", it took " << Step_Number << " steps to reach the destination." << endl;
        cout << endl; // Skips a line for organization purposes

        // Add the number of steps taken in this run to the total steps
        Total_Steps += Step_Number;
    }


    // Calculate average steps
    double Average_Steps = (Total_Steps / Total_Runs);

    // Final print statement to find the average steps it took to get to the position after 10 attempts. 
    cout << "The average amount of steps it took the robot to get to the position 3 blocks north AND 2 blocks east is " << Average_Steps << endl;

    return 0; // To end the code
}

/* The final line of output since the rest done show up
The average amount of steps it took the robot to get to the position 3 blocks north AND 2 blocks east is 368686
*/
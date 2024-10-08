// Kirolos Dimian
// Lab 5 Part 2
// 10/8/24

#include <iostream>
#include <iomanip>

using namespace std;


int main ()
{

    // Declaring New Variables
    double GigaChadBytes; // Declaring the variable as a number that could have a decimal (Veriable for Gigabytes)
    double MegaChadBytes; // Declaring a new variable that is like a conversion factor from Gigabytes to Megabytes

    // Declaring Different Qualities (Megabytes/Hour)
    double Low_Qualty = 43.2; // Assigns the given value for the low quiality hotspot plan
    double Normal_Quality = 72; // Assigns the given value for the normal quality hotspot plan
    double High_Quality = 115.2; // Assigns the given value for the high quality hotspot plan

    // Ask the user for the number of gigabytes in their monthly hotspot plan.
    cout << "How many gigabytes are in your monthly hotspot plan?" << endl; // Asks the question for necessary information for the code
    cin >> GigaChadBytes; // Allows for the input of the user for the question above
    
    MegaChadBytes = GigaChadBytes / 1000; // Declaring a new variable that is like a conversion factor from Gigabytes to Megabytes

    int User_Input; // Making a new variable for user input

    // The calculations to find the amount of hours for each quality
    double LowHours = MegaChadBytes * Low_Qualty; // Shows that calculations being done for the number of hours on low quality
    double NormalHours = MegaChadBytes * Normal_Quality; // Shows that calculations being done for the number of hours on normal quality
    double HighHours = MegaChadBytes * High_Quality; // Shows that calculations being done for the number of hours on high quality

    // Set precision
    cout << fixed << setprecision (2) << endl; // Allows the setprecision to be set on everything (every number)

    cout << "What kind of music do you wish to download? For Low Quality input 1, for Normal Quality input 2, and for High Quality input 3" << endl;
    cin >> User_Input;

    // Switch statement being made depending on what the user inputs
    switch (User_Input)
    {
    case (1):
        // It they input the number 1, this will print
        cout << "You can listen to it for " << LowHours << " hours." << endl;
        break;
    case (2):
        // If they input the number 2, this will print
        cout << "You can listen to it for " << NormalHours << " hours." << endl;
        break;
    case (3):
        // If they input the number 3, this will print
        cout << "You can listen to it for " << HighHours << " hours." << endl;
        break;
    default:
        // If they did not input one of the numbers this will print
        cout << "Make sure you put a valid number according to your kind of music, try again" << endl;
        break;
    }
    return 0; // Finishes the code
}

/* This is the output
How many gigabytes are in your monthly hotspot plan?
1000

What kind of music do you wish to download? For Low Quality input 1, for Normal Quality input 2, and for High Quality input 3
2
You can listen to it for 72.00 hours.
*/
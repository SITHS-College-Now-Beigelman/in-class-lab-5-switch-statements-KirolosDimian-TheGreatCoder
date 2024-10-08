// Kirolos Dimian
// Lab 5 Part 1
// 10/8/24

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    // Declaring Variables
    double Minutes; //Declaring variable with a number with a decimal
    double Weight; //Declaring variable with a number with a decimal
    int User_Input;

    // The user's input
    cout << "Input the number of minutes you exercised: " << endl; //Question that will be printed
    cin >> Minutes; // Input statement with the variable minutes
    cout << "Input your weight in kilograms: " << endl; //Question that will be printed
    cin >> Weight; // Input statement with the variable weight
    cout << "What exercise do you want to do? Input 1 for Slow Walk, 2 for Quick Walk, and 3 for Jog" << endl;
    cin >> User_Input;

    // Declaring more variables!
    double WalkingSlow = Minutes * ((2*3.5*Weight) / 200); // Plugging in variables for the MET, in this case 2
    double WalkingQuick = Minutes * ((3*3.5*Weight) / 200); // Plugging in variables for the MET, in this case 3
    double Jog = Minutes * ((8.8*3.5*Weight) / 200); // Plugging in variables for the MET, in this case 8.8

    // Switch statement being made on accordance to the user's input
    switch (User_Input)
    {
    case (1):
        // It they input the number 1, this will print
        cout << "You will burn " << WalkingSlow << " calories." << endl;
        break;
    case (2):
        // If they input the number 2, this will print
        cout << "You will burn " << WalkingQuick << " calories." << endl;
        break;
    case (3):
        // If they input the number 3, this will print
        cout << "You will burn " << Jog << " calories." << endl;
        break;
    default:
        // If they did not input one of the numbers this will print
        cout << "Make sure you put a valid number according to your exercise, try again" << endl;
        break;
    }

    // Extra Credit

    double Calories; // Declaring a variable with a number and a decimal

    // Ask for user's input
    cout << "How many calories do you want to burn?" << endl; // Prints the question that should be answered by the user
    cin >> Calories; // Input statement with the variable calories
    

    // Set precision
    cout << fixed << setprecision (2) << endl; // Allows the setprecision to be set on everything (every number)

    // Switch statement being made on accordance to the same user's input
    switch (User_Input)
    {
    case (1):
        // If they input the number 1, this math will be done
        cout << "It will take " << Calories / ((2 * 3.5 * Weight) / 200) << " minutes." << endl;
        break;
    case (2):
        // If they input the number 2, this math will be done
        cout << "It will take " <<  Calories / ((3*3.5*Weight) / 200) << " minutes." << endl;
        break;
    case (3):
        // If they input the number 1, this math will be done
        cout << "It will take " << Calories / ((8.8*3.5*Weight) / 200) << " minutes." << endl;
        break;
    default:
        // If they did not input one of the numbers this will print
        cout << "Make sure you put a valid number according to the amount of calories you would like to burn, try again" << endl;
    }
    
    return 0; // Finishes the code
}


/* Output of my code
Input the number of minutes you exercised: 
40
Input your weight in kilograms: 
64
What exercise do you want to do? Input 1 for Slow Walk, 2 for Quick Walk, and 3 for Jog
2
You will burn 134.4 calories.
How many calories do you want to burn?
1250

It will take 372.02 minutes.
*/
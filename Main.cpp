//Jose Moreno
// SNHU CS-210 Programming Languages
// 09/22/2024
#include "Clock.h"
#include <conio.h>

// Function is used to display the menu options to the user
void menu()
{
    //display MENU 
    cout << "---------------------------------" << endl;
    cout << "* 1 - Add One Hour \t\t*" << endl;
    cout << "* 2 - Add One Minute \t\t*" << endl;
    cout << "* 3 - Add One Second \t\t*" << endl;
    cout << "* 4 - Exit \t\t\t*" << endl;
    cout << "---------------------------------" << endl;
}

int main()
{
    // Creates two clocks one in 12-hour format and one in 24-hour format
    Clock clock12(false), clock24(true);
    int choice;
    bool exit = false;   // variable to keep track of whether the program should exit or not

    //loop is used to run the code until user exits
    while (!exit)
    {
        cout << endl;
        cout << "---------------- ----------------" << endl;
        cout << "- " << setw(12);
        clock12.displayTime(cout);  // displaying the time in 12-hour clock
        cout << "  - ";
        cout << "- " << setw(12);
        clock24.displayTime(cout);  // displaying the time in 24-hour clock
        cout << "\t*" << endl;
        cout << "---------------- ----------------" << endl;
        cout << endl;
        menu();
        cin >> choice;  //user choice
        switch (choice)
        {
        case 1:
            clock12.addHours(1);
            clock24.addHours(1);
            break;
        case 2:
            clock12.addMinutes(1);
            clock24.addMinutes(1);
            break;
        case 3:
            clock12.addSeconds(1);
            clock24.addSeconds(1);
            break;
        case 4:
            exit = true;  // setting the exit flag so that the program will exit
        default:
            break;
        }

    }

}
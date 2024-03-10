#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    
    while (true) { // Loop indefinitely until the user chooses to exit
        cout << "***************************************************" << endl;
        cout << "Welcome!" << endl;
        cout << "Please choose a number from the following options:" << endl;
        cout << "1. Play the Choose Your Own Adventure game!" << endl;
        cout << "2. Play the Madlib game!" << endl;
        cout << "3. Exit" << endl;
        cout << "***************************************************" << endl;

        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 1) {
            string path;
            char pathChoice;
            cout << "Do you want to go to path A or B: ";
            cin >> pathChoice;
            path += pathChoice;

            if(pathChoice == 'A') {
                cout << "You have chosen A. Have a great adventure!\n";
            } else if(pathChoice == 'B') {
                cout << "You have chosen B. Please be careful on your way!\n";
            } else {
                cout << "Invalid option, please restart the game.\n";
            }

            cout << "Your path: " << path << endl;
        } else if (choice == 2) {
            string adjective, typeOfFood, place, noun;
            cout << "Enter an adjective: ";
            cin >> adjective;
            cout << "Enter a type of food: ";
            cin >> typeOfFood;
            cout << "Enter a place name: ";
            cin >> place;
            cout << "Enter a noun: ";
            cin >> noun;

            cout << "\nYour Madlib Story:\n";
            cout << "I visited " << place << " and saw a " << noun << ". ";
            cout << "I enjoyed " << typeOfFood << " which was " << adjective << ". ";
            cout << "It was the best thing I have done in a while!" << endl;
        } else if (choice == 3) {
            cout << "Exiting. Thank you for playing!" << endl;
            break; // Exit the loop
        } else {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
        }
    }

    return 0;
}

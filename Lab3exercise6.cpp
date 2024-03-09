#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    string decision;

    while (true){// start the loop to display the menu 
    cout << "***************************************************" << endl;
    cout << "Welcome!" << endl;
    cout << "Please choose a number from the following options:" << endl;
    cout << "1. Play the Choose Your Own Adventure game!" << endl;
    cout << "2. Play the Madlib game!" << endl;
    cout << "3. Exit" << endl;
    cout << "****************************************************" << endl;

    cout << "Enter your choice (1-3): "; //making a choice for the game
    cin >> choice;

    if (choice == 1) {
        cout << "You're at a fork in the road. Do you go left or right? (left/right): ";
        cin >> decision;

        if (decision == "left") {
            cout << "You've found a beautiful Falls. Do you rest or continue? (rest/continue): ";
            cin >> decision;
            if (decision == "rest") {
                cout << "As you rest, you find a forbidden map on the tree. Adventure awaits! THE END." << endl;
            } else {
                cout << "You continue your journey, curious for what lies ahead. THE END." << endl;
            }
        } else if (decision == "right") {
            cout << "You encounter an old bridge. Do you cross it or turn back? (cross/back): ";
            cin >> decision;
            if (decision == "cross") {
                cout << "The bridge leads to an ancient city. You've discovered a lost tribe called Eldorado! THE END." << endl;
            } else {
                cout << "Turning back, you decide some mysteries are best left undiscovered. THE END." << endl;
            }
        } else {
            cout << "Confused, you decide to stay put. Sometimes, adventure finds you. THE END." << endl;
        }
    }else if (choice==2){
    // start putting definition to declare
    string adjective,typeofFood, place, noun;
    //calling for cout
    cout << "Enter an adjective!";
    cin >> adjective;
    cout <<  "Enter a type of Food!";
    cin >> typeofFood;
    cout << "Enter a place name!";
    cin >> place;
    cout <<"Enter a noun!";
    cin >> noun;
    //start putting in to create madlib
    cout << "\nYour Madlib Story:\n";
    cout << "Today I went to the place called" <<place<<"and saw a "<< noun;
    cout << "and i ate the"<< typeofFood<<"which is"<< adjective;
    cout << "I have ever tasted and I am very happy today!"<< endl;
    
    } else if (choice ==3){
        cout<< "Exiting...Thank you for playing!"<< endl;
        break ; //exit the loop  
    } else {
        cout<< "Invalid option, please choose differnent one!"<< endl;
    }
    return 0;
}
    }
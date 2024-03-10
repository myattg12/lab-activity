#include <iostream>
#include <string>
using namespace std;
// declaring choice and decision 
int main() {
    int choice;
    string decision;
// starting to do menu function 
    cout << "***************************************************" << endl;
    cout << "Welcome!" << endl;
    cout << "Please choose a number from the following options:" << endl;
    cout << "1. Play the Choose Your Own Adventure game!" << endl;
    cout << "2. Play the Madlib game!" << endl;
    cout << "3. Exit" << endl;
    cout << "****************************************************" << endl;

    cout << "Enter your choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
      string path;
        char choice; 
        cout << "Do you want to go to path A or B: ";
        cin >> choice;
        path += choice;

        if(choice == 'A') {
            cout << "You have chosen A. Have a great adventure!\n";
        } else if(choice == 'B') {
            cout << "You have chosen B. Please be careful on your way!\n";
        } else {
            cout << "Invalid option, please restart the game.\n";
        }

        cout << "Your path: " << path << endl;
    
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
    cout << "I visited" <<place<<"and saw a "<< noun;
    cout << "have enojoyed"<< typeofFood<<"which is"<< adjective;
    cout << "the best thing i have done in a while!"<< endl;
    return 0;
}
    }
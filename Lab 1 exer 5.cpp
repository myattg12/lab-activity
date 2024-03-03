//
//  main.cpp
//  Lab 1 ex 5
//
//  Created by myattg on 3/3/24.
//

#include <iostream>
#include <string>
using namespace std;


int main() {
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
    
    return 0;
}

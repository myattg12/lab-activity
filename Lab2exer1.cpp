#include <iostream>
using namespace std;
/*Write a program using if, else if, and else statements that will ask the user to input
today’s temperature. If the temperature is above 80 degrees, display a message saying: "It is
very hot today!" If the temperature is below 40 degrees, display a message saying: "It
is very cold today!" If the temperature is between 40 and 80 degrees, display a
message saying: "It is a beautiful day outside!"
Test your program with the following user input:
20
40
50
80
100*/

int main(){

    int temperature;
    //to enter the today's temperature

    cout << "Enter the temperature today";
    cin >> temperature;

    //check the temperature and display

    if (temperature > 80) {
        cout << "It is very hot today!" << endl;
    }
    else if (temperature < 40) {
        cout << "It is  very cold today!" << endl;
    }
    else {
        cout << "It is a beautiful day outside!" << endl;

    }
    return 0;
}

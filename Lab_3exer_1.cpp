#include <iostream>
using namespace std;

/*Create a program that will ask the user to enter an integer. Write a loop that subtracts one from
that user-inputted number, and keeps subtracting one until the number is down to zero. Here is
a sample output:
Enter a number: 55
It is now 54.
It is now 53.
It is now 52.
(etc…)*/


int main() {
    int number;

    // Ask the user to enter an integer
    cout << "Enter a number: ";
    cin >> number;

    // use the while loop to get to the number.
    while (number > 0) {
        number -= 1;  // Subtract one from the number as it goes
        cout << "It is now " << number << "." << endl;
    }

    return 0;
}
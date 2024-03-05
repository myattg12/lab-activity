#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter an integer
    cout << "Enter a number: ";
    cin >> number;

    // Loop that subtracts one from the number until it reaches zero
    while (number > 0) {
        number -= 1;  // Subtract one from the number
        cout << "It is now " << number << "." << endl;
    }

    return 0;
}
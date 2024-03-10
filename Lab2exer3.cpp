#include <iostream>
using namespace std;
/*Write a program using if, else if and else statements that will sort three characters in
ascending order (smallest to largest). Remember that characters are stored in ASCII! Another
way of saying this might be to put the characters in alphabetical order, but be careful of
lowercase versus uppercase values, as well as handling special characters (those that are not
letters, such as the dollar sign.) Ask the user to input three characters, then ultimately output
the same three characters in the correct order.*/
int main() {
    char x, y, z,temp;

    cout << "Enter three characters: ";
    cin >> x >> y >> z;

    // Sorting using if, else if, and else
    if (x > y) {
        temp = x;
        x = y;
        y= temp;
    }
    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }
// start putting character in ascii order 
    cout << "Characters in ascending order: " << x << ", " << y << ", " << z << endl;

    return 0;
}
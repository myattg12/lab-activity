#include <iostream>
#include <string>
using namespace std;
// declaring decision or choices
int main() {
    string decision;
    cout << "You're at a fork in the road. Do you go left or right? (left/right): ";
    cin >> decision;

    if (decision == "left") { //if user choose left
        cout << "You've found a beautiful Falls. Do you rest or continue? (rest/continue): ";
        cin >> decision;
        if (decision == "rest") {
            cout << "As you rest, you find a forbidden map on the tree. Adventure awaits! THE END." << endl;
        } else {
            cout << "You continue your journey, curious for what lies ahead. THE END." << endl;
        }
    } else if (decision == "right") {// if user choose right
        cout << "You encounter an old bridge. Do you cross it or turn back? (cross/back): ";
        cin >> decision;
        if (decision == "cross") {
            cout << "The bridge leads to an ancient city. You've discovered a lost tribes! THE END." << endl;
        } else {
            cout << "Turning back, you decide some mysteries are best left undiscovered. THE END." << endl;
        }
    } else {
        cout << "Confused, you decide to stay put. Sometimes, adventure finds you. THE END." << endl;
    }

    return 0;
}
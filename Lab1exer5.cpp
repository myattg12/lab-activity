#include <iostream>
#include <string>
using namespace std;
/*Use strings and user input to create a Madlib program. Ask the user to enter nouns, verbs, adjectives,
etc., and generate a cohesive story that you will write as output.
For examples of Madlibs and how they work, check out: https://stuff.mit.edu/storyfun*/

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
    cout << "I visited" <<place<<"and saw a "<< noun;
    cout << "have enojoyed"<< typeofFood<<"which is"<< adjective;
    cout << "the best thing i have done in a while!"<< endl;
    
    return 0;
}
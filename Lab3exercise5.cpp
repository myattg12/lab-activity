#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int x = 15, y = 15; // Explorer's starting coordinates
    int x1, y1;         // Treasure's coordinates
    char direction;     
    float distance;     
    bool treasure = false; 
    int steps = 0;
    int num_moves=0; 
    
    srand(time(0));    // Secretly seed the random function
    x1 = rand() % 30 + 1; // set X1 to random betweeen 1 and 30
    y1 = rand() % 30 + 1; // set Y1 to random between 1 and 30

    // write loop to find the treasure
    while (!treasure) {
        cout << "Enter direction (n,s,e,w), or x to exit: ";
        cin >> direction;
        if (direction == 'x') {
            break; // Exit the loop if x is entered
        }

        // Update explorer's coordinates based on input
        switch (direction) {
            case 'n': y += 1; break;
            case 's': y -= 1; break;
            case 'e': x += 1; break;
            case 'w': x -= 1; break;
            default: cout << "Invalid direction!" << endl; continue;
        }

        // Calculate and display the distance to the treasure
       distance = sqrt(static_cast<double>((x-x1)*(x-x1) + (y-y1)*(y-y1)));
        cout << "current distance from the treasure:" << distance << endl;

     if(x == x1 && y == y1)
{
    treasure = true;
    cout << "congratulations, you found the treasure!" << endl;
}

    cout << "curent position: (" << x << "," << y << ")" << endl;
    num_moves++;
}

    cout << "Number of moves it took: "<< num_moves << endl;
    return 0;
}
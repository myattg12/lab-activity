#include <iostream>
#include <string>
using namespace std;
/*Write a C++ program that prints out the following menu for a game (include the line of asterisks (*) on
top and bottom):
***************************************************
Welcome!
Please choose a number from the following options:
1. Play the game!
2. Demo the game!
3. Exit
*****************************************************/

int main() {
    string menu = 
        "************************************************************\n"
        "                        Welcome!\n"
        "\n"
        "Please choose a number from the following options:\n"
        "\n"
        "1.   Play the game!\n"
        "2.   Demo the game!\n"
        "3.   Exit\n"
        "\n"
        "************************************************************\n";
    
    cout << menu;
    return 0;
}

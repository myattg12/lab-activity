#include <iostream>
#include <string>
using namespace std;
// declaring decision or choices
int main() {
    string path;
    char choice; //using char to make choices
    cout<< "Do you want to go path A or B or C?";
    cin>> choice;
    path +=choice; 

    if (choice== 'A'){
        cout<< "You have chose A, Have a great adventure!";
    } else {
        cout<< "Invalid option, please choose another one";
    }
    cin>> choice;
    path += choice;

    if (choice=='B'){
        cout<<"You have chose Path B, please be careful on your way!"; 

    }else{
        cout<<"Invalid option,please choose another one";
    }
    cin>> choice; 
    path += choice; 
    cout<< "Your Path:"<< path<< endl;
    return 0;
}
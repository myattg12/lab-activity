#include <iostream>
using namespace std;

/*Write a C++ program that will calculate the average of four numbers that are stored in variables. The
variables are all of the data type: double. The values that are stored are 578, 986, 1066, and 714.
Display a message showing the sum of all four numbers
(ex. The sum of those numbers is ___.”)
On the next line, display the average of all four numbers
(ex. – “The average of those numbers is ___.”)*/


int main(){
    // declaring double variables
    double num1,num2,num3,num4,sum,average;

    num1 = 578;
    num2 = 986;
    num3 = 1066;
    num4 = 714;
    
    //calculate the sum
    sum = num1 + num2 + num3 + num4;
    
    average = sum/ 4;
    
    cout << "The sum of those numbers is " << sum << "." << endl;
    
    cout << "The average of those numbers is " << average << "." << endl;

    return 0;
}
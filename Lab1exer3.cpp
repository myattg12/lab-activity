#include <iostream>
#include <string>
using namespace std;
/*Write a C++ program that calculates the average of four numbers – just like in the previous exercise –
but this time ask the user to enter which four numbers to calculate. You will have to use the cin
command to get all four numbers from the user.
Sample Output:
Enter the first number: (number1)
Enter the second number: (number2)
Enter the third number: (number3)
Enter the fourth number: (number4)
The average of these numbers is: (average)*/

int main() {
    // declaring variables
    double num1, num2, num3, num4;
    
    //to know the first number
    cout << "Enter the first number: ";
    cin >> num1;
    
    //2nd number
    cout << "Enter the second number:";
    cin >> num2;
    
    //3rd number
    cout << "Enter the third number:";
    cin >> num3;
    
    //4th number
    cout << "Enter the fourth number:" ;
    cin >> num4;
    
    double average = (num1 + num2 + num3 + num4)/4;
    
    //declare the average definition
    cout << "The average of these numbers is: " << average << endl;
   
    return 0;
}
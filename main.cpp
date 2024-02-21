//
//  main.cpp
//  Lab 1 homework 2
//
//  Created by myattg on 2/14/24.
//

#include <iostream>
using namespace std;

int main(){
    // declaring variables
    double num1 = 578;
    double num2 = 986;
    double num3 = 1066;
    double num4 = 714;
    
    //calculate the sum
    double sum = num1 + num2 + num3 + num4;
    
    double average = sum/ 4;
    
    cout << "The sum of those numbers is " << sum << "." << endl;
    
    cout << "The average of those numbers is " << average << "." << endl;

    return 0;
}

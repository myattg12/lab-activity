#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    double initialWage = 2.0;
    int totalDays = 20;
    
    // Calculate the wage on the 20th day
    double wageOn20thDay = initialWage * pow(2, totalDays - 1); 
    cout << "The wage on the 20th day of employment is: $" << wageOn20thDay << endl;
    
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double salary,netSalary,tax;
cout<<"Enter your salary: ";
cin>>salary;

if (salary > 55000) {
        // Tax for income over $55,000
        tax += (salary - 55000) * 0.39;
        salary = 55000; // Adjust salary down to the next bracket
    }
    if (salary > 38000) {
        // Tax for income between $38,001 and $55,000
        tax += (salary - 38000) * 0.33;
        salary = 38000; // Adjust salary down to the next bracket
    }
    if (salary > 12000) {
        // Tax for income between $12,001 and $38,000
        tax += (salary - 12000) * 0.27;
        salary = 12000; // Adjust salary down to the next bracket
    }
    // Tax for income up to $12,000
    tax += salary * 0.06;

cout <<fixed;
cout <<setprecision(2);

netSalary=salary-tax;
cout<<"This year you paid $"<<tax<<" dollars in tax. so your net salary after taxes are taken out is $"<<netSalary;

return 0;
}


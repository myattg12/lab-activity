#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double salary,netSalary,tax;
cout<<"Enter your salary: ";
cin>>salary;

if (salary > 55000) {
        //delcaring the tax bracket for more than 55000
        tax += (salary - 55000) * 0.39;
        salary = 55000; 
    }
    if (salary > 38000) {
        // declaring tax bracket for 38000
        tax += (salary - 38000) * 0.33;
        salary = 38000; 
    }
    if (salary > 12000) {
        // income between 12000 to 38000
        tax += (salary - 12000) * 0.27;
        salary = 12000; 
    }
    //income up to $12,000
    tax += salary * 0.06;

cout <<fixed;
cout <<setprecision(2);

netSalary=salary-tax;
cout<<"This year you paid $"<<tax<<" dollars in tax. so your net salary after taxes are taken out is $"<<netSalary;

return 0;
}


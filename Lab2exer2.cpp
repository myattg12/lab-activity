#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double salary,netSalary,tax;
cout<<"Enter your salary: ";
cin>>salary;

if(salary<=12000){
tax=salary * 0.06;
}
else if(salary>12000 && salary<=38000){
tax=12000 * 0.06;
tax=tax+(salary-12000) * 0.27;
}
else if(salary>38000 && salary<=55000){
tax=12000 * 0.06;
tax=tax+(salary-12000) * 0.27;
tax=tax+(salary-38000) * 0.33;
}
else{
tax=12000 * 0.06;
tax=tax+(salary-12000) * 0.27;
tax=tax+(salary-38000) * 0.33;
tax=tax+(salary-55000) * 0.39;
}
cout <<fixed;
cout <<setprecision(2);

netSalary=salary-tax;
cout<<"This year you paid $"<<tax<<" dollars in tax. so your net salary after taxes are taken out is $"<<netSalary;

}

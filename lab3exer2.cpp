#include <iostream>
#include <cmath>
using namespace std;
/*A person makes a deal with their boss. The boss says they will be paid a wage of $2 on their first
day on the job, and then have their wage doubled every day after that. Use a loop to figure out
how much the person would make using this method on their 20th day of employment. */

int main()
{
//Declaring variables
int number=20,day=2,total=0;

//This loop continues to execute for 20 times
for(int i=0;i<number;i++)
{
//Calculating the every day wages
total +=pow(2,i);
}

//Displaying the 20th day wages received by the person
cout<<"The person receive $"<<total<<" on the "<<number<<"th day of employement"<<endl;


return 0;
}

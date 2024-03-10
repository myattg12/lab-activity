#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary,netSalary,Tax;
    

    cout << "Enter your salary: ";
    cin >> salary; 

    // Determine the tax rate based on the salary
    if (salary < 12000) {
        Tax = 12000*0.06; // 6% tax bracket
        Tax= Tax+(salary-12000)*0.27;
        
    } else if (salary <= 38000) {
        Tax = 0.27; // 27% tax
    } else if (salary <= 55000) {
        Tax = 0.33; // 33% tax
    } else {
        Tax = 0.39; // 39% tax
    }

    
}

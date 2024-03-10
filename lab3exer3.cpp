#include <iostream>
using namespace std;
// declare loanamount, interestrate
int main() {
    double loanAmount, yearInterestRate, monthlyPayment;
    cout << "Loan amount: ";
    cin >> loanAmount;

    cout<< "yearly interest rate (%): ";
    cin >> yearInterestRate;

    cout << "Monthly payment: ";
    cin >> monthlyPayment;

    double monthlyInterestRate = yearInterestRate / 12 / 100;
    int months = 0;
// using loop to calculate the loan amount and payment
    while (loanAmount > 0) {
        loanAmount = loanAmount + (loanAmount * monthlyInterestRate) - monthlyPayment;
        if (loanAmount < 0) {
            break;
        }
        months++;
    }

    cout << "The loans will take " << months / 12 << " years and " << months % 12 << " months to pay it off .\n";
    return 0;
}
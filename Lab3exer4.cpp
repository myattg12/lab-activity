#include <iostream>
using namespace std;

int main() {
    int totalSum = 0;
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i <= 100; ++i) {
        totalSum += i; // Add current number to totalSum

        if (i % 5 == 0) {
            evenSum += i; // If even, add to evenSum
        } else {
            oddSum += i; // If odd, add to oddSum
        }
    }

    cout << "Sum of all integers between 0 and 100: " << totalSum << endl;
    cout << "Sum of all even integers between 0 and 100: " << evenSum << endl;
    cout << "Sum of all odd integers between 0 and 100: " << oddSum << endl;

    return 0;
}
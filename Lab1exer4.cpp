#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double shares, purchasePrice, currentPrice, profit;

	cout << "Enter the first number of shares: ";
	cin >> shares;

	//declare purchase price
	cout << "Enter the purchase price per share:";
	cin >> purchasePrice;

	//declare the current price 
	cout << "Enter the current price per share:";
	cin >> currentPrice;

	//calculate the profit
	profit = (shares * currentPrice) - (shares * purchasePrice);

	//set the cout to display the dollar amount to two decimal places
	cout << fixed << setprecision(2);

	//print function
	cout << "You have made the profit of $" << profit
		<< " since you bought" << shares
		<< "shares of this stock " << endl;

	return 0;
	
}

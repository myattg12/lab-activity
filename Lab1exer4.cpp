#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numberofshares; 
	double purchasePrice, currentPrice;

	cout << "Enter the first number of shares: ";
	cin >> numberofshares;

	//declare purchase price
	cout << "Enter the purchase price per share:";
	cin >> purchasePrice;

	//declare the current price 
	cout << "Enter the current price per share:";
	cin >> currentPrice;

	//calculate the profit
	double profit = (numberofshares * currentPrice) - (numberofshares * purchasePrice);

	//set the cout to display the dollar amount to two decimal places
	cout << fixed << setprecision(2);

	//display the profit
	cout << "You have made the profit of $" << profit
		<< "dollars since you bought" << numberofshares
		<< "shares of this stock " << endl;

	return 0;
	
}

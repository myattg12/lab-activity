// Lab 1 exercise 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


int main()
{
	int numberofshares; 
	double purchasePrice, currentPrice;

	std::cout << "Enter the first number of shares: ";
	std::cin >> numberofshares;

	//declare purchase price
	std::cout << "Enter the purchase price per share:";
	std::cin >> purchasePrice;

	//declare the current price 
	std::cout << "Enter the current price per share:";
	std::cin >> currentPrice;

	//calculate the profit
	double profit = (numberofshares * currentPrice) - (numberofshares * purchasePrice);

	//set the cout to display the dollar amount to two decimal places
	std::cout << std::fixed << std::setprecision(2);

	//display the profit
	std::cout << "You have made the profit of $" << profit
		<< "dollars since you bought" << numberofshares
		<< "shares of this stock " << std::endl;

	return 0;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
using namespace std;

int main(){
	
	// declares prices, totalCost and quantity
	const int RETAIL_PRICES = 99;
	double quantity;
	double totalCost;
	
	// ask for user input
	cout << "Enter your quantity: ";
	cin >> quantity;
	
	// input validation
	if(quantity <= 0)
	{
		cout << "Please enter number greater than 0! \n";
	} else {
	
		// calculate total cost
		if(quantity >= 10 && quantity <= 19)
		{
			totalCost = quantity * RETAIL_PRICES * 0.2;
			cout << "Your total cost is: " << totalCost; 
		} else if(quantity >= 20 && quantity <= 49)
		{
			totalCost = quantity * RETAIL_PRICES * 0.3;
			cout << "Your total cost is: " << totalCost;
		} else if(quantity >= 50 && quantity <= 99)
		{
			totalCost = quantity * RETAIL_PRICES * 0.4;
			cout << "Your total cost is: " << totalCost;
		} else {
			totalCost = quantity * RETAIL_PRICES * 0.5;
			cout << "Your total cost is: " << totalCost;
		}
	}	
	return 0;
}

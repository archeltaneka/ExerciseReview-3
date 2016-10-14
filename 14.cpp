#include <iostream>
using namespace std;

int main(){
	
	// declare variables
	const int CHARGE_PER_MONTH = 10; 
	double beginningBalance;
	int numChecksWritten;
	double totalServiceFee;
	
	// ask for user input
	cout << "Enter your beginning balance: ";
	cin >> beginningBalance;
	cout << "How many checks written? ";
	cin >> numChecksWritten;
	
	// check for beginning balance if less than 0
	if(beginningBalance <= 0)
	{
		cout << "Your account is overdrawn!";
	} else{
		
		// check for the checksWritten
		if(numChecksWritten < 20)
		{
			totalServiceFee = beginningBalance - CHARGE_PER_MONTH - 0.10;
			cout << "Total service fee: $" << totalServiceFee;
		} else if(numChecksWritten >= 20 && numChecksWritten <= 39)
		{
			totalServiceFee = beginningBalance - CHARGE_PER_MONTH - 0.08;
			cout << "Total service fee: $" << totalServiceFee;
		} else if(numChecksWritten >= 40 && numChecksWritten <= 59)
		{
			totalServiceFee = beginningBalance - CHARGE_PER_MONTH - 0.06;
			cout << "Total service fee: $" << totalServiceFee;
		} else {
			totalServiceFee = beginningBalance - CHARGE_PER_MONTH - 0.04;
			cout << "Total service fee: $" << totalServiceFee;
		}
		
	}
	
	return 0;
	
}

#include <iostream>
using namespace std;

int main(){
	
	// declares enterPackage, monthlyBill and minutesUsed variable
	char enterPackage;
	double monthlyBill;
	double minutesUsed;
	double minutesExceeded;
	
	// get input from the user
	cout << "Enter your package service(A, B, or C): ";
	cin >> enterPackage;
	cout << "Minutes used: ";
	cin >> minutesUsed;
	
	// verify input
	if(enterPackage == 'A' || enterPackage == 'a')
	{
		const int MINUTES_PROVIDED = 450;
		minutesExceeded = MINUTES_PROVIDED - minutesUsed;
		monthlyBill = 39.99 + (minutesExceeded * 0.45);
		cout << "Your monthly bill is: $" << monthlyBill;
	} else if(enterPackage == 'B' || enterPackage == 'b')
	{
		const int MINUTES_PROVIDED = 900;
		minutesExceeded = MINUTES_PROVIDED - minutesUsed;
		monthlyBill = 59.99 + (minutesExceeded * 0.40);
		cout << "Your monthly bill is: $" << monthlyBill;
	} else if(enterPackage == 'C' || enterPackage == 'c')
	{
		monthlyBill = 69.99;
		cout << "Your monthly bill is: $" << monthlyBill;
	} else {
		cout << "Invalid package!";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	// declare 2 num variables
	int num1;
	int num2;
	
	// ask for user input
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number; ";
	cin >> num2;
	
	// check for smaller and larger number
	if(num1 > num2)
	{
		cout << num1 << " is larger than " << num2;
	} else {
		cout << num2 << " is larger than " << num1;
	}
	
}

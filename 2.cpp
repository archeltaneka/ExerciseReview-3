#include <iostream>
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will convert numbers into roman numerical characters \n";
	cout << endl;
	
	// declare number variables
	int numbers;
	int romanNum;
	
	// get prompt from the user
	cout << "Input a number(1-10): ";
	cin >> numbers;
	
	// converts the numbers into roman numerical
	switch(numbers)
	{
		case 1:
		cout << "I";
		break;
		
		case 2:
		cout << "II";
		break;
		
		case 3:
		cout << "III";
		break;
		
		case 4:
		cout << "IV";
		break;
		
		case 5:
		cout << "V";
		break;
		
		case 6:
		cout << "VI";
		break;
		
		case 7:
		cout << "VII";
		break;
		
		case 8:
		cout << "VIII";
		break;
		
		case 9:
		cout << "IX";
		break;
		
		case 10:
		cout << "X";
		break;
		
		default:
		cout << "Please enter number from 1-10";
		break;
		
	}
	
	return 0;
	
}

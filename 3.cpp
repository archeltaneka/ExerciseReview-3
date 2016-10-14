#include <iostream>
using namespace std;

int main(){
	
	// declares month, date and 2 digit year variable
	int month;
	int date;
	int twoDigitYear;
	
	// ask for user input
	cout << "Enter your birthday month: ";
	cin >> month;
	cout << "Enter your day of your birthday: ";
	cin >> date;
	cout << "Enter 2 digit of your birhtday year: ";
	cin >> twoDigitYear;
	cout << endl;
	
	// check for magic numbers
	if(month * date == twoDigitYear)
	{
		cout << "Your birthday is magic number!";
	} else {
		cout << "Your birthday is not a magic number";
	}
	
}

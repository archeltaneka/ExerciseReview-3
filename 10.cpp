#include <iostream> 	
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will determine the leap year \n";
	cout << endl;
	
	// get prompt from the user
	int month;
	int year;
	
	cout << "Enter a month(1-12): ";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;
	
	// determine the leap year
	if(month == 2 && year % 100 == 0 && year % 400 == 0)
	{
		cout << "29 days";
	}
	else if(month == 2 && year %100 != 0 && year % 4 == 0)
	{
		cout << "29 days";
	}
	else
	{
		cout << "31 days";
	}
	
}

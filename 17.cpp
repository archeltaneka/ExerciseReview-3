#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// declare dates and the results of the vaults
	string date1;
	string date2;
	string date3;
	float vault1;
	float vault2;
	float vault3;
	
	// get prompt from the user
	cout << "Enter date(Ex: 22August): ";
	cin >> date1;
	cout << "Enter the first vault: ";
	cin >> vault1;
	
	// check the vaults if it is between 2.0 and 5.0
	if(vault1 >= 2.0 && vault1 <= 5.0)
	{
		cout << "Enter date(Ex: 22August): ";
		cin >> date2;
		cout << "Enter the second vault: ";
		cin >> vault2;
	}
	else {
		cout << "Enter the vault between 2.0 and 5.0: ";
		cin >> vault1;
	}
	
	if(vault2 >= 2.0 && vault2 <= 5.0)
	{
		cout << "Enter date(Ex: 22August): ";
		cin >> date3;
		cout << "Enter the third vault: ";
		cin >> vault3;
	}
	else {
		cout << "Enter the vault between 2.0 and 5.0";
		cin >> vault2;
	}
	
	// check for the best vaults
	if(vault3 >= 2.0 && vault3 <= 5.0)
	{
		if(vault1 > vault2 && vault1 > vault3 && vault2 > vault3)
		{
			cout << "First: " << vault3 << "recorded on " << date3 << endl;
			cout << "Second: " << vault2 << "recorded on " << date2 << endl;
			cout << "Third: " << vault1 << "recorded on " << date1 << endl;
		}
		else if(vault1 > vault2 && vault1 > vault3 && vault3 > vault2)
		{
			cout << "First: " << vault2 << "recorded on " << date2 << endl;
			cout << "Second: " << vault3 << "recorded on " << date3 << endl;
			cout << "Third: " << vault1 << "recorded on " << date1 << endl;
		}
		else if(vault2 > vault1 && vault2 > vault3 && vault3 > vault1)
		{
			cout << "First: " << vault1 << "recorded on " << date1 << endl;
			cout << "Second: " << vault3 << "recorded on " << date3 << endl;
			cout << "Third: " << vault2 << "recorded on " << date2 << endl;
		}
		else if(vault2 > vault1 && vault2 > vault3 && vault1 > vault3)
		{
			cout << "First: " << vault3 << "recorded on " << date3 << endl;
			cout << "Second: " << vault1 << "recorded on " << date1 << endl;
			cout << "Third: " << vault2 << "recorded on " << date2 << endl;
		}
		else if(vault3 > vault1 && vault3 > vault2 && vault1 > vault2)
		{
			cout << "First: " << vault2 << "recorded on " << date3 << endl;
			cout << "Second: " << vault1 << "recorded on " << date2 << endl;
			cout << "Third: " << vault3 << "recorded on " << date1 << endl;
		}
		else
		{
			cout << "First: " << vault1 << "recorded on " << date1 << endl;
			cout << "Second: " << vault2 << "recorded on " << date2 << endl;
			cout << "Third: " << vault3 << "recorded on " << date3 << endl;
		}
	}
	
}

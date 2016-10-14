#include <iostream>
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will displays the number of points awarded every books that have been bought \n";
	cout << endl;
	
	// declares books and points variable
	int books;
	int points;
	
	// get prompt from the user
	cout << "Enter how many books have you bought: ";
	cin >> books;
	
	// calculate the points
	if(books == 0)
	{
		points = 0;
		cout << "Your points is: " << points;
	}
	else if(books == 1)
	{
		points = 5;
		cout << "Your points is: " << points;
	}
	else if(books == 2)
	{
		points = 15;
		cout << "Your points is: " << points;
	}
	else if(books == 3)
	{
		points = 30;
		cout << "Your points is: " << points;
	}
	else{
		points = 60;
		cout << "Your points is: " << points;
	}
	
	return 0;
	
}

#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will mix two primary colors and get a secondary color \n";
	cout << endl;
	
	// declare 3 variables of primary color
	string primary1 = "red";
	string primary2 = "blue";
	string primary3 = "yellow";
	
	// get prompt from the user
	string input1;
	string input2;
	
	cout << "Enter first primary color(red/blue/yellow): \n";
	cin >> input1;
	cout << "Enter another primary color(red/blue/yellow): \n";
	cin >> input2;
	
	// get the secondary color
	if(input1 == "red" && input2 == "blue" || input1 == "blue" && input2 == "red")
	{
		cout << "The mix of " << input1 << " and " << input2 << " is " << "purple";
	}
	else if(input1 == "red" && input2 == "yellow" || input1 == "yellow" || input2 == "red")
	{
		cout << "The mix of " << input1 << " and " << input2 << " is " << "orange";
		}	
	else if(input1 == "blue" && input2 == "yellow" || input1 == "yellow" && input2 == "blue")
	{
		cout << "The mix of " << input1 << " and " << input2 << " is " << "green";
	}
}

#include <iostream>
using namespace std;

int main(){
	
	// print welcome message
	cout << "This program will compare 2 areas of rectangle \n";
	cout << endl;
	
	// declare 2 widhts and lengths variable and areas
	int length1;
	int length2;
	int width1;
	int width2;
	
	int area1;
	int area2; 
	
	// get prompt from the user
	cout << "Enter length for the first rectangle: ";
	cin >> length1;
	cout << "Enter width for the first rectangle: ";
	cin >> width1;
	cout << "Enter length for the second rectangle: ";
	cin >> length2;
	cout << "Enter width for the second rectangle: ";
	cin >> width2;
	
	// calculate and check the areas
	area1 = length1 * width1;
	area2 = length2 * width2;
	
	if(area1 == area2)
	{
		cout << "The first rectangle and the second rectangle are the same size";
	}
	else if(area1 > area2)
	{
		cout << "First rectangle is bigger than the second rectangle";
	}
	else{
		cout << "Second rectangle is bigger than the first rectangle";
	}
	
}

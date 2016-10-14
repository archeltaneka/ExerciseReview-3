#include <iostream>
using namespace std;

int main(){
	
	// print welcome message
	cout << "Speed of Sound in Gases \n";
	cout << endl;
	cout << "1. Carbon Dioxide \n";
	cout << "2. Air \n";
	cout << "3. Helium \n";
	cout << "4. Hydrogen \n";
	
	// declare medium speeds and seconds variables
	int answer;
	double distance;
	double seconds;
	double carbonSpeed = 258.0;
	double airSpeed = 331.5;
	double heliumSpeed = 972.0;
	double hydrogenSpeed = 1270.0;
	
	// get prompt from the user
	cout << "Choose which one of the gases you want to know the speed: ";
	cin >> answer;
	
	// read input from the user
	if(answer == 1)
	{
		cout << "Enter how many seconds: ";
		cin >> seconds;
		
		distance = carbonSpeed / seconds;
		cout << "Carbon Dioxide travels " << distance << " meters";
	}
	else if(answer == 2)
	{
		cout << "Enter how many seconds: ";
		cin >> seconds;
		
		distance = airSpeed / seconds;
		cout << "The air travels " << distance << " meters";
	}
	else if(answer == 3)
	{
		cout << "Enter how many seconds: ";
		cin >> seconds;
		
		distance = heliumSpeed / seconds;
		cout << "Helium travels " << distance << " meters";
	}
	else if(answer == 4)
	{
		cout << "Enter how many seconds: ";
		cin >> seconds;
		
		distance = hydrogenSpeed / seconds;
		cout << "Hydrogen travels " << distance << " meters";
	}
	
	return 0;
	
}

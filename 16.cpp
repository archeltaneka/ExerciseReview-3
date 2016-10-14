#include <iostream>
#include <string>
using namespace std;

int main(){
	
	// declare 3 names of runners and the time it took to finish the race
	string name1;
	string name2;
	string name3;
	float time1;
	float time2;
	float time3;
	
	// get prompt from the user
	cout << "Enter the first runner: ";
	cin >> name1;
	cout << "Enter the time he/she took to finish the race: ";
	cin >> time1;
	cout << "Enter the second runner: ";
	cin >> name2;
	cout << "Enter the time he/she took to finish the race: ";
	cin >> time2;
	cout << "Enter the third runner: ";
	cin >> name3;
	cout << "Enter the time he/she took to finish the race: ";
	cin >> time3;
	
	if(time1 <= 0 || time2 <= 0 || time3 <= 0)
	{
		cout << "Time must be greater than zero!";
	}
	else{
	// check who is the fastest from all the 3
	if(time1 > time2 && time1 > time3 && time2 > time3)
	{
		cout << "First place: " << name3 << endl;
		cout << "Second place: " << name2 << endl;
		cout << "Third place: " << name1 << endl; 
	}
	else if(time2 > time1 && time2 > time3 && time1 > time3)
	{
		cout << "First place: " << name3 << endl;
		cout << "Second place: " << name1 << endl;
		cout << "Third place: " << name2 << endl;
	}
	else if(time3 > time1 && time3 > time2 && time2 > time1)
	{
		cout << "First place: " << name1 << endl;
		cout << "Second place: " << name2 << endl;
		cout << "Third place: " << name3 << endl;
	}
	else if(time1 > time3 && time1 > time2 && time3 > time2)
	{
		cout << "First place: " << name2 << endl;
		cout << "Second place: " << name3 << endl;
		cout << "Third place: " << name1 << endl;
	}
	else if(time2 > time3 && time2 > time1 && time2 > time3)
	{
		cout << "First place: " << name1 << endl;
		cout << "Second place: " << name3 << endl;
		cout << "Third place: " << name2 << endl;
	}
	else
	{
		cout << "First place: " << name2 << endl;
		cout << "Second place: " << name1 << endl;
		cout << "Third place: " << name3 << endl;
	}
}
}


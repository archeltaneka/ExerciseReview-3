#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	// declare minute, hour, day and getSeconds variable
	const int MINUTE_PER_SECOND = 60;
	const int HOUR_PER_SECOND = 3600;
	const int DAY_PER_SECOND = 86400;
	double getSeconds;
	double displayMinutes;
	double displayHours;
	double displayDays;
	
	// ask for user input
	cout << "Enter how many seconds do you want to calculate? ";
	cin >> getSeconds;
	
	// set output format
	cout << setprecision(2) << fixed << showpoint << right;
	
	// calculate the seconds into minute, hour or dayw
	if(getSeconds >= 60 && getSeconds < 3600)
	{
		displayMinutes = getSeconds / 60;
		cout << getSeconds << " is " << displayMinutes << " minute(s)";
		
	} else if(getSeconds >= 3600 && getSeconds < 86400)
	{
		displayHours = getSeconds / 3600;
		cout << getSeconds << " is " << displayHours << " hour(s)";
		
	} else {
		displayDays = getSeconds / 86400;
		cout << getSeconds << " is " << displayDays << " day(s)";
	}
	
	return 0;
}

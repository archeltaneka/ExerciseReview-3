#include <iostream>
using namespace std;

int main(){
	
	// declares packageWeight, distance and charges applied
	const int MILES_SHIPPED = 500;
	double packageWeight;
	double distance;
	double charges;
	
	// get input from the user
	cout << "Enter your package weight: ";
	cin >> packageWeight;
	cout << "Enter distance shipping: ";
	cin >> distance;
	
	// check if packageWeight is not less or equal to zero
	if(packageWeight <= 0)
	{
		cout << "Invalid weight!";
	} else if(packageWeight > 20)
	{
		cout << "Overweight! Max weight is 20kg!";
	} else {
		// check if distance is less than 30 miles or more than 3000miles
		if(distance < 10)
		{
			cout << "Cannot accept distance less than 10 miles!";
		} else if(distance > 3000)
		{
			cout << "Cannot accept distance more than 3000 miles!";
		} else {
			// check the packageWeight with the charge
			if(packageWeight <= 2)
			{
				charges = distance / MILES_SHIPPED * 1.10;
				cout << "Your charges is: $" << charges;
			} else if(packageWeight > 2 && packageWeight <= 6)
			{
				charges = distance / MILES_SHIPPED * 2.20;
				cout << "Your charges is: $" << charges;
			} else if(packageWeight > 6 && packageWeight <= 10)
			{
				charges = distance / MILES_SHIPPED * 3.70;
				cout << "Your charges is: $" << charges;
			} else if(packageWeight > 10 && packageWeight <= 20)
			{
				charges = distance / MILES_SHIPPED * 4.80;
				cout << "Your charges is: $" << charges;
			}
		}
	}
	return 0;
}

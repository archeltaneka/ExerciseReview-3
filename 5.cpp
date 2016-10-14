#include <iostream>
using namespace std;

int main(){
	
	// declares weight, height and BMI variable
	float weight;
	float height;
	float BMI;
	
	// print welcome message
	cout << "This program will calculate your BMI(Body Mass Index) according to your weight and height \n";
	cout << endl;
	cout << "BMI between 18,5 and 25 - Optimal \n";
	cout << "BMI < 18.5 - Underweight \n";
	cout << "BMI > 25 - Overweight \n";
	cout << endl;
	
	// ask for user input
	cout << "Enter your weight(pounds): ";
	cin >> weight;
	cout << "Enter your height(inches): ";
	cin >> height;
	
	// calculate the BMI
	BMI = (weight * 703) / height * height;
	
	// check the BMI
	if(BMI >= 18.5 && BMI <= 25)
	{
		cout << "Optimal body mass index!";
	} else if(BMI < 18.5)
	{
		cout << "Underweight!";
	} else {
		cout << "Overweight!";
	}
	
	return 0;
}

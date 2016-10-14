#include <iostream>
using namespace std;

int main(){
	
	// declares numCalories, fatGrams and percentCalories
	const int GRAM_PER_CALORIES = 9;
	double numCalories;
	double fatGrams;
	double caloriesFromFat;
	double percentCalories;
	
	// get input from the user
	cout << "Input the number of calories from your food: ";
	cin >> numCalories;
	cout << "Input the number of fat grams in your food: ";
	cin >> fatGrams;
	
	// input validation
	if(numCalories < 0 && fatGrams < 0)
	{
		cout << "Input error! number must be greather than 0!";
	} else {
		if(numCalories < fatGrams)
		{
			cout << fatGrams << " is incorrectly entered!";
		} else {
			caloriesFromFat =  fatGrams * GRAM_PER_CALORIES;
			percentCalories = (caloriesFromFat / numCalories);
			
			// print display output
			cout << "The calories from fat is: " << caloriesFromFat << endl;
			cout << "The percentage of the calories is: " << percentCalories << "%" << endl;
		}
	}
	
	// check if calories from fat is less than 30% total calories
	if(caloriesFromFat < 0.03 * numCalories)
	{
		cout << "This product is low fat";
	} else {
		cout << "This product contains high fat";
	}
	
}

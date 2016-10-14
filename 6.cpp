#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	// declares mass and weight variable
	float mass;
	float weight;
	const float GRAVITATION = 9.8;
	
	// ask for user input
	cout << "Enter the mass of an object: ";
	cin >> mass;
	
	// calculate the weight
	weight = mass * GRAVITATION;
	
	// set output message
	cout << setprecision(2) << fixed << showpoint << right;
	
	// print display message
	cout << "The weight of the object is: " << static_cast<float>(weight) << "Newton";
	
}

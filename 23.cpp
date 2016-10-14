#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	// print welcome message
	cout << "Geometry Calculator \n";
	cout << endl;
	cout << "1. Calculate the area of a circle \n";
	cout << "2. Calculate the area of a rectangle \n";
	cout << "3. Calculate the area of a triangle \n";
	cout << "4. Quit \n";
	cout << endl;
	
	// declare components in variables
	int numbers;
	double area;
	double phi = 3.14159;
	unsigned int radius;
	unsigned int length;
	unsigned int width;
	unsigned int base;
	unsigned int height;
	
	// get prompt and read input from the user
	cout << "Enter number 1-4 \n";
	cin >> numbers;
	
	switch(numbers)
	{
		case 1:
			cout << "area = phi x r x r \n";
			cout << "Enter the radius: ";
			cin >> radius;
			
			area = phi * pow(radius, 2);
			cout << "The area of the circle is: " << area;
			break;
		
		case 2:
			cout << "area = length * width \n";
			cout << "Enter the length: ";
			cin >> length;
			cout << "Enter the width: ";
			cin >> width;
			
			area = length * width;
			cout << "The area of the rectangle is: " << area;
			break;
			
		case 3:
			cout << "area = 1/2 * height * base \n";
			cout << "Enter the base: ";
			cin >> base;
			cout << "Enter the height: ";
			cin >> height;
			
			area = base * height * 1/2;
			cout << "The area of the triangle is: " << area;
			break;
			
		case 4:
			cout << "See ya later!";
			break;
		
		default:
			cout << "Error input!";
			break;
	}
	
	return 0;
	
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function for the random number
int randNum(int low, int high)
{
	return rand() % (high - low) + low;
}

int main(){
	
	int answer;
	int answerKey;
	int randNumber1 = randNum(100, 999);
	int randNumber2 = randNum(100, 999);
	
	srand(time(NULL));
	cout << randNumber1;
	cout << endl;
	cout << randNumber2;
	cout << endl;
	cout << "---- + \n";
	cin >> answer;
	
	// calculate answerKey
	answerKey = randNumber1 + randNumber2;
	
	// check if the answer is correct
	if(answer == answerKey)
	{
		cout << "Congratulations! Correct answer!";
	} else {
		cout << "Try again!";
	}
	
	
	return 0;
	
}

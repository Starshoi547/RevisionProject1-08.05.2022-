#include "Header.h"

int nextEvenNumb(int number) {
	if (number <= 0 && number > 10000)
	{
		return -1;
	}
	else {
		if (number % 2 == 1) {
			number++;
		}
		else {
			number += 2;
		}
		return number;
	}
}
//1000
int main(void) {
	/*
	int n, k;

	cout << "Input number of squirrels: ";
	cin >> n;

	cout << "Input number of DEEZ nuts: ";
	cin >> k;
	*/

	//cout << nextEvenNumb(345) << endl;

	cout << (nextEvenNumb(345) == 346 ? "Well done!" : "Something was wrong!") << endl;
	cout << (nextEvenNumb(345) == 347 ? "Well done!" : "Something was wrong!") << endl;

	return 0;
}
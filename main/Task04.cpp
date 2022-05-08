#include "Header.h"

int calculateSumOfNumb(int number) {
	if (number < 100 && number > 999)
	{
		return -1;
	}
	else {
		return ((number / 100) + ((number % 100) / 10) + (number % 10));
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

	cout << calculateSumOfNumb(345) << endl;

	cout << (calculateSumOfNumb(345) == 12 ? "Well done!" : "Something was wrong!") << endl;
	cout << (calculateSumOfNumb(345) == 11 ? "Well done!" : "Something was wrong!") << endl;

	return 0;
}
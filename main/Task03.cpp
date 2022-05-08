#include "Header.h"

int calculateTens(int number) {
	if (number <= 0 && number >= 1000000)
	{
		return -1;
	}
	else {
		

		return (number / 10) % 10;
		
	}
}
//1000
//int main(void) {
	/*
	int n, k;

	cout << "Input number of squirrels: ";
	cin >> n;

	cout << "Input number of DEEZ nuts: ";
	cin >> k;
	*/

	//cout << calculateTens(1546) << endl;

	//cout << (calculateTens(1546) == 4 ? "Well done!" : "Something was wrong!") << endl;
	
	//cout << calculateTens(173) << endl;

	//cout << (calculateTens(173) == 7 ? "Well done!" : "Something was wrong!") << endl;


	//return 0;
//}
#include "Header.h"



int main(void) {
	/*
	int n, k;

	cout << "Input number of squirrels: ";
	cin >> n;

	cout << "Input number of DEEZ nuts: ";
	cin >> k;
	*/

	cout << (calculateHowManyDeezNuts(3, 14) == 4 ? "Well done!" : "Something was wrong!") << endl;
	cout << (calculateHowManyDeezNuts(5, 15) == 3 ? "Well done!" : "Something was wrong!") << endl;


	return 0;
}
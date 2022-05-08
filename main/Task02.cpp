#include "Header.h"

int calculateRemainder(int squirrel, int nut) {
	if (squirrel > 1000 || nut > 1000)
	{
		return -1;
	}
	else {
		return nut % squirrel;
	}
}

/*int main(void) {
	/*
	int n, k;

	cout << "Input number of squirrels: ";
	cin >> n;

	cout << "Input number of DEEZ nuts: ";
	cin >> k;
	/

	cout << (calculateRemainder(3, 14) == 2 ? "Well done!" : "Something was wrong!") << endl;
	cout << (calculateRemainder(5, 15) == 3 ? "Well done!" : "Something was wrong!") << endl;


	return 0;
}
*/
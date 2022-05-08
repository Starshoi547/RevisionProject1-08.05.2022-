#include "Header.h"

int calculateHowMany(int squirrel, int nut) {
	if (squirrel > 1000 || nut > 1000)
	{
		return -1;
	}
	else {
		return nut / squirrel;
	}
}


/*
int main(void) {
	/*
	int n, k;

	cout << "Input number of squirrels: ";
	cin >> n;

	cout << "Input number of DEEZ nuts: ";
	cin >> k;
	/

	cout << (calculateHowMany(3, 14) == 4 ? "Well done!" : "Something was wrong!") << endl;
	cout << (calculateHowMany(5, 15) == 3 ? "Well done!" : "Something was wrong!") << endl;


	return 0;
}
*/
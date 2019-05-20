#include"biblioteki.h"

int wyborf() {
	int x;

	cout << "Twoj wybor to: ";
	cin >> x;
	cout << endl;

	if (x == 1 || x == 2)
		return x;
	else if (x == 3)
		exit(0);
		
	return 0;
}
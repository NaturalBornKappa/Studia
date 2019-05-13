#include"biblioteki.h"

void wyswietl(int *_data, unsigned int _licz) {
	for (unsigned int pozycja = 0; pozycja != _licz; ++pozycja)
		cout << "#" << pozycja << ' ';
	cout << endl;
	for (unsigned int pozycja = 0; pozycja != _licz; ++pozycja) {
		cout.width(2);
		cout << _data[pozycja] << ' ';
	}
	cout << endl;
}
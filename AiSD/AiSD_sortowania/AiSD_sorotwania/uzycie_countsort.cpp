#include"biblioteki.h"

void uzycie_countsort(int *_data, int _lenght) {
	cout << "SORTOWANIE PRZEZ ZLICZANIE (COUNT SORT)" << endl << "Przed sortowaniem:" << endl;
	wyswietl(_data, _lenght);
	countsort(_data, _lenght);
	cout << "Po sortowaniu: " << endl;
	wyswietl(_data, _lenght);
	cout << endl;
}
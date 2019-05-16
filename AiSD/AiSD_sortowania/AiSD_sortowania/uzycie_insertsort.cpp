#include"biblioteki.h"

void uzycie_insertsort(int *_data, int _lenght) {

	cout << "SORTOWANIE PRZEZ WSTAWIANIE (INSERT SORT)" << endl << "Przed sortowaniem:" << endl;
	wyswietl(_data, _lenght);
	insertsort(_data, _lenght);
	cout << "Po sortowaniu: " << endl;
	wyswietl(_data, _lenght);
	cout << endl;
}
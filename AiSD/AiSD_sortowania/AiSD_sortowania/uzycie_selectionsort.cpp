#include"biblioteki.h"

void uzycie_selectionsort(int *_data, int _lenght) {

	cout << "SORTOWANIE PRZEZ WYBIERANIE (SELECTION SORT)" << endl << "Przed sortowaniem:" << endl;
	wyswietl(_data, _lenght);
	selectionsort(_data, _lenght - 1);
	cout << "Po sortowaniu: " << endl;
	wyswietl(_data, _lenght);
	cout << endl;
}
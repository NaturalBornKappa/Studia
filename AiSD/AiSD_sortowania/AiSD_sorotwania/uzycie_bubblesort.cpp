#include"biblioteki.h"

void uzycie_bubblesort(int *_data, int _lenght) {
	
	cout << "SORTOWANIE BABELKOWE (BUBBLE SORT)" << endl << "Przed sortowaniem:" << endl;
	wyswietl(_data, _lenght);
	bubblesort(_data, _lenght);
	cout << "Po sortowaniu: " << endl;
	wyswietl(_data, _lenght);
	cout << endl;
}
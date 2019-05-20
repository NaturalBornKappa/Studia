#include"biblioteki.h"

void uzycie_quicksort(int *_data, int _lenght){
	
	cout << "SORTOWANIE SZYBKIE (QUICK SORT)" << endl << "Przed sortowaniem:" << endl;
	wyswietl(_data, _lenght);
	quicksort(_data, 0, _lenght-1);
	cout << "Po sortowaniu: " << endl;
	wyswietl(_data, _lenght);
	cout << endl;
}
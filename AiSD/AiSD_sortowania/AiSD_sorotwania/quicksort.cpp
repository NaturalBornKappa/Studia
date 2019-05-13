#include"biblioteki.h"

unsigned int podzialka(int *_data, unsigned int _lewa, unsigned int _prawa) {
	int value = _data[_lewa];
	while (true) {
		while (_data[_prawa] > value)
			--_prawa;
		while (_data[_lewa] < value)
			++_lewa;

		if (_lewa < _prawa) {
			swap_data(_data[_lewa], _data[_prawa]);
			++_lewa;
			--_prawa;
		}
		else
			return _prawa;
	}
}

// int *_data = TABLICA DO POSORTOWANIA, unsigned int _lewa = INDEX POCZATKA TABLICY, unsigned  int _prawa = INDEX KOÑCA TABLICY
void quicksort(int *_data, unsigned int _lewa, unsigned  int _prawa) {
	if (_lewa < _prawa) {
		unsigned  int center = podzialka(_data, _lewa, _prawa);
		quicksort(_data, _lewa, center);
		quicksort(_data, center + 1, _prawa);
	}
}
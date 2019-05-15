#include"biblioteki.h"

////////////////// daje warotsci z dupy

//void merge(int* _data, int _lewa, int _prawa) {
//	int _mid = (_prawa + _lewa) / 2;
//	int *tab = new int[(_prawa - _lewa)+1];
//	int i = _lewa, j = _mid, temp = 0;
//
//	while (i <= _mid && j <= _prawa) {
//		if (_data[j] < _data[i]) {
//			tab[temp] = _data[j];
//			j++;
//		}
//		else {
//			tab[temp] = _data[i];
//			i++;
//		}
//		temp++;
//	}
//
//	if (i <= _mid) {
//		while (i <= _mid) {
//			tab[temp] = _data[i];
//			i++;
//			temp++;
//		}
//	}
//	else {
//		while (j <= _prawa) {
//			tab[temp] = _data[j];
//			j++;
//			temp++;
//		}
//	}
//
//	for (i = 0; i <= _prawa - _lewa; i++)
//		_data[_lewa + i] = tab[i];
//	return;
//}
//
//void mergesort(int* _data, int _lewa, int _prawa) {
//	int _mid = (_prawa + _lewa) / 2;
//	if (_lewa != _prawa) {
//		if (_mid == 0) {
//			;
//		}
//		else {
//			mergesort(_data, _lewa, _mid);
//			mergesort(_data, _mid + 1, _prawa);
//			merge(_data, _lewa, _prawa);
//		}
//	}
//}


////////////////////////////////////////// prawie git ale s³abo sortuje

//void merge(int* _data, int _lewa, int _mid, int _prawa)
//{
//	int *tab = new int[_mid+1];
//	for (int i = _lewa; i < _mid; i++)
//		tab[i - _lewa] = _data[i];
//
//	int rob = 0;
//	
//	while ((rob + _lewa) < _mid && _mid < _prawa)
//	{
//		if (tab[rob] <= _data[_mid])
//			_data[_lewa++] = tab[rob++];
//		else
//			_data[_lewa++] = _data[_mid++];
//	}
//	for (rob; (rob + _lewa) < _mid; rob++)
//		_data[_lewa++] = tab[rob];
//
//	return;
//}
//
//void mergesort(int *_data, int _lewa, int _prawa) {
//	int *tab = new int[_prawa];
//	int _mid = (_prawa + _lewa) / 2;
//	tab = _data;
//	if (_prawa - _lewa > 1)
//	{
//		mergesort(_data, _lewa, _mid);
//		mergesort(_data,_mid, _prawa);
//		merge(_data, _lewa, _mid, _prawa);
//	}
//	else if (_prawa - _lewa <= 1)
//		if (_data[_lewa] > _data[_prawa - 1])
//			swap_data(_data[_lewa], _data[_prawa - 1]);
//		else if (_prawa - _lewa == 1)
//			return;
//}


//////////////////////// prawie git (daje smieciowe wartosci)

//void merge(int* _data, int _lewa, int _mid, int _prawa) {
//	int i, j, q;
//	int *tab = new int[_prawa + 1];
//	for (i = _lewa; i <= _prawa + 1; i++)
//		tab[i] = _data[i];  // Skopiowanie danych do tablicy pomocniczej
//
//	i = _lewa; j = _mid + 1; q = _lewa;                 // Ustawienie wskaŸników tablic
//	while (i <= _mid && j <= _prawa + 1) {         // Przenoszenie danych z sortowaniem ze zbiorów pomocniczych do tablicy g³ównej
//		if (tab[i] < tab[j])
//			_data[q++] = tab[i++];
//		else
//			_data[q++] = tab[j++];
//	}
//	while (i <= _mid) _data[q++] = tab[i++]; // Przeniesienie nie skopiowanych danych ze zbioru pierwszego w przypadku, gdy drugi zbiór siê skoñczy³
//}
//
//void mergesort(int * _data, int _lewa, int _prawa)
//{
//	int _mid;
//	if (_lewa < _prawa) {
//		_mid = (_lewa + _prawa) / 2;
//		mergesort(_data,_lewa, _mid);    // Dzielenie lewej czêœci
//		mergesort(_data, _lewa + 1, _prawa);   // Dzielenie prawej czêœci
//		merge(_data,_lewa, _mid, _prawa);   // £¹czenie czêœci lewej i prawej
//	}
//}

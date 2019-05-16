#include"biblioteki.h"

void selectionsort(int *_dane, int _size) {
	int* temp = new  int[_size];
	int min, temporary;
	for (int i = 0; i < _size; i++) {
		min = i;
		for (int j = i + 1; j < _size; j++) {
			if (_dane[j] < _dane[min])
				min = j;
		}
		temporary = _dane[min];
		_dane[min] = _dane[i];
		_dane[i] = temporary;
	}
}
#include"biblioteki.h"

void selectionsort(int *_dane, int _size) {
	int* temp = new  int[_size+1];
	int min, temporary;
	for (int i = 0; i < _size+1; i++) {
		min = i;
		for (int j = i + 1; j < _size+1; j++) {
			if (_dane[j] < _dane[min])
				min = j;
		}
		swap_data(_dane[min], _dane[i]);
	}
}
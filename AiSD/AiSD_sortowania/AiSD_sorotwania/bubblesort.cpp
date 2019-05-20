#include"biblioteki.h"

void bubblesort(int *_dane, int _size) {
	for (int i = 0; i != _size; i++)
		for (int j = 0; j != _size-1; j++)
			if (_dane[j] > _dane[j+1]) 
				swap_data(_dane[j], _dane[j+1]);
}
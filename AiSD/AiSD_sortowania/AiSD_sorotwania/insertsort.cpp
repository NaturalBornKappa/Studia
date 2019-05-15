#include"biblioteki.h"

void insertsort(int* _data, int _lenght) {
	int* temp = new int[_lenght];
	int i;

	for (i = 0; i < _lenght; i++) {
		temp[_lenght - (i+1)] = find_max(_data, _lenght);
		wyrzuc_max(_data, _lenght, temp[_lenght - (i + 1)]);
	}

	for (i = 0; i < _lenght; i++)
		_data[i] = temp[i];	

	delete[] temp;
}
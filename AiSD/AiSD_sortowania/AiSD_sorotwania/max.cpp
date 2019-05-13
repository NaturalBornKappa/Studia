#include"biblioteki.h"

int find_max(int * _data, int _size) {
	int max = _data[0];
	for (int i = 1; i < _size; i++)
	{
		if (max < _data[i])
			max = _data[i];
	}
	return max;
}
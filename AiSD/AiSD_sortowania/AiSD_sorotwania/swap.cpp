#include"biblioteki.h"

void swap_data(int &_left, int &_right) {
	int temp = _left;
	_left = _right;
	_right = temp;
}
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


const int width = 10;
const int height = 10;

int coords_to_index(int row, int col)
{
	int idx = (row*width) + col;
	return idx;
}

void index_to_coords(int idx, int& row, int& col)
{
	row = idx / height;
	col = idx - (row*width);
}

int main()
{
	std::cout << "[3][5]=" << coords_to_index(3, 5) << std::endl;
	int x, y, i = 17;
	index_to_coords(i, x, y);
	std::cout << i << "->[" << x << ", " << y << "]" << std::endl;
	x = 4; y = 2;
	std::cout << "Przed: [" << x << "," << y << "]" << std::endl;
	i = coords_to_index(x, y);
	index_to_coords(i, x, y);
	std::cout << "Po: [" << x << "," << y << "]" << std::endl;

	system("PAUSE");
	return 0;
}
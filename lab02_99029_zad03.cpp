#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int coords_to_index(int row, int col, int val, const int mrow)
{
	int idx = (row*mrow) + col;
	return idx;
}

int main()
{
	cout << "Podaj wymiary tablicy (wiersze i kolumny) \n";
	int mrow;	//Max wierszy
	int mcol;	//Max kolumn
	cin >> mrow;
	cin >> mcol;
	int idx_max;	//Iloœæ indexów
	idx_max = mrow * mcol;
	//cout << idx_max << endl;

	int* a = new int[idx_max];

	for (int i = 0; i <= idx_max; i++) // Zerowanie tablicy
	{
		a[i] = 0;
	}

	for (int i = 1; i <= idx_max; i++) //wyœwietlane wyzerowanej tablicy
	{
		if (i % mcol == 0)
			cout << a[i] << "\n";
		else
			cout << a[i] << " ";
	}
	cout << endl;

	int** aa = new int*[mrow];
	for (int i = 0; i < mrow; i++) // przypisanie przesuniêæ o podana przez u¿ytkownika liczbe kolumn
	{
		aa[i] = a + i * mcol;
	}

	int row; //wspo³rzêdna wiersza 
	int col;//wspo³rzêdna kolumny
	int val; //wartoœæ

	for (int i = 0; i < idx_max; i++)
	{
		if (int i = 0 < idx_max)
		{
			if (row <= mrow && col <= mcol)
			{
				cout << "Podaj wspolrzedna x oraz y elementu oraz jego wartosc:" << endl;
				cin >> row >> col >> val;
				coords_to_index(row, col, val, mrow);
			}
			else
			{
				break;
			}
		}
	}



	system("PAUSE");
	return 0;
}
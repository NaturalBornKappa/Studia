#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int coords_to_index(int row, int col, int val, const int mrow)
{
	int idx = ((row-1)*mrow) + col;
	return idx;
}

int main()
{
	cout << "Podaj wymiary tablicy (wiersze i kolumny) \n";
	int mrow;	//Max wierszy
	int mcol;	//Max kolumn
	cin >> mrow;
	cin >> mcol;
	int idx_max;	//Ilosc indexow
	idx_max = mrow * mcol;
	//cout << idx_max << endl;

	int* a = new int[idx_max];

	for (int i = 0; i <= idx_max; i++) // Zerowanie tablicy
	{
		a[i] = 0;
	}

	for (int i = 1; i <= idx_max; i++) //wyswietlanie wyzerowanej tablicy
	{
		if (i % mcol == 0)
			cout << a[i] << "\n";
		else
			cout << a[i] << " ";
	}
	cout << endl;

	int** aa = new int*[mrow];
	for (int i = 0; i < mrow; i++) // przypisanie przesuniecia o podana przez uzytkownika liczbe kolumn
	{
		aa[i] = a + i * mcol;
	}

	int row = 0; //wspolrzedna wiersza 
	int col = 0; //wspolrzedna kolumny
	int val = 0; //wartosc

	for (int i = 0; i < idx_max; i++)
	{
		if (int i = 0 < idx_max)
		{
			if (row <= mrow && col <= mcol)
			{
				cout << "Podaj wspolrzedna x: ";
				cin >> row;
				if (row < 1 || row > mrow) { break; } // kontrola poprawnosci
				cout << "Podaj wspolrzedna y: ";
				cin >> col;
				if (col < 1 || col > mcol) { break; } // kontrola poprawnosci
				cout << "Podaj wartosc: ";
				cin >> val;

				int pomoc = 0;
				pomoc = coords_to_index(row, col, val, mrow);

				a[pomoc] = val;

				for (int i = 1; i <= idx_max; i++) //wyswietlanie tablicy
				{
					if (i % mcol == 0)
						cout << a[i] << "\n";
					else
						cout << a[i] << " ";
				}
				cout << endl;
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
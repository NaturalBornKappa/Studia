#include<iostream>
#include<math.h>
#include<windows.h>


#define N 1000

using std::cin;
using std::cout;
using std::endl;


int zad5a() {
	int i = 1;
	int j;
	long int licznik = 0;
	
	cout << "Zadanie 5, podpunkt a:" << endl;

	if (i > N || i == N) licznik = 1;

	while (i<N)
	{
		licznik++;
		j = i;
		do {
			j = j + 2;
			licznik++;
		} while (j < N);

		i = i + 2;
	}

	cout << "Wykonano " << licznik << " porownan.\n" << endl;
	system("PAUSE");
	return 0;
}

int zad5b() {
	int i = 1;
	int j;
	long int licznik = 0;

	cout << "\nZadanie 5, podpunkt b:" << endl;

	if (i > N || i == N) licznik = 1;

	do {
		j = i;
		do {
			j = j * 2;
			licznik++;
		} while (j < 2 * N);
		i++;
		licznik++;
	} while (i < 2 * N + 1);

	cout << "Wykonano " << licznik << " porownan.\n" << endl;

	system("PAUSE");
	return 0;
}

int zad5c() {
	int i = 0;
	int j;
	long int licznik = 0;
	cout << "\nZadanie 5, podpunkt c:" << endl;

	if (i > N || i == N) licznik = 1;

	do {
		j = i;

		while (j < N) {
			licznik++;
			j = j * 2;
			if (j == 0) {
				cout << "Petla wewnetrzna nieskonczona. " << endl;
				system("PAUSE");
				return 0;
			}
		};

		i = i * 2;;
		licznik++;
	} while (i < 2 * N);

	cout << "Wykonano " << licznik << " porownan.\n" << endl;

	system("PAUSE");
	return 0;
}

int zad5d() {
	int i = 1;
	int j;
	long int licznik = 0;

	cout << "\nZadanie 5, podpunkt d:" << endl;

	if (i > N || i == N) licznik = 1;
	

	while (i < 3 * N) {
		j = i;
		licznik++;

		while (j < log(N)) {
			licznik++;
			j = j * 2;
			//cout <<"j: " << j << " Log: " << log(N) << endl;
			if (j == log(N)) {
				cout << "Petla wewnetrzna nieskonczona. " << endl;
				system("PAUSE");
				return 0;
			}
			//cout << "i: " << i << endl;
		}
		i = i * 3;
		//cout << "i: " << i << endl;
	}

	cout << "Wykonano " << licznik << " porownan. \n" << endl;

	system("PAUSE");
	return 0;
}

int main() {
	zad5a();
	zad5b();
	zad5c();
	zad5d();
}
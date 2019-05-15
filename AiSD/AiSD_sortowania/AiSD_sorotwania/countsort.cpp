#include"biblioteki.h"

void countsort(int *_data, unsigned int _size) {
	int max = find_max(_data, _size);
	int *sorted = new int [max+1];
	unsigned int index, pozycja;

	// zerowanie posortowanej tablicy
	for (int index = 0; index < max+1; index++) 
		sorted[index] = 0;
		
	//pierwwsza iteracja
	for (index = 0; index != _size; ++index) {
		pozycja = static_cast<unsigned int>(_data[index]);
		++sorted[pozycja];
	}
	// odkomentuj by sprawdziæ czy dobrze zlicza
	//wyswietl(sorted, max+1);

	// kopiowanie spowrotem posortowanych danych
	pozycja = 0;
	for (index = 0; index != max+1; ++index)
	{
		for (; sorted[index]; --sorted[index])
			_data[pozycja++] = static_cast<int>(index);
	}
	delete[] sorted;
}
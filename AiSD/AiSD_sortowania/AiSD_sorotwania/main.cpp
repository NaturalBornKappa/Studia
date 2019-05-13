#include"biblioteki.h"

int main() {
	/* QUICK SORT */
	int quick7[] = { 7,6,5,4,3,2,1 };
	int quick9[] = { 7,4,2,5,2,6,0,9,2 };
	uzycie_quicksort(quick7, 7);
	uzycie_quicksort(quick9, 9);

	/* COUNT SORT */
	int count7[] = { 7,6,5,4,3,2,1 };
	int count9[] = { 7,4,2,5,2,6,0,9,2 };
	uzycie_countsort(count7, 7);
	uzycie_countsort(count9, 9);

	/* BUBBLE SORT */
	int bubble7[] = { 7,6,5,4,3,2,1 };
	int bubble9[] = { 7,4,2,5,2,6,0,9,2 };
	uzycie_bubblesort(bubble7, 7);
	uzycie_bubblesort(bubble9, 9);

	system("PAUSE");
	return 0;
}
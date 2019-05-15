#include"biblioteki.h"

int main() {
	/* QUICK SORT */
	int quick7[] = { 7,6,5,4,3,2,1 };
	int quick9[] = { 7,4,2,5,2,6,0,9,2 };
	int quick0[] = { 2,0,-6,-3,425,9 };
	uzycie_quicksort(quick7, 7);
	uzycie_quicksort(quick9, 9);
	uzycie_quicksort(quick0, 6);

	/* COUNT SORT */ /*nie dzia³a dla ujemnych*/
	int count7[] = { 7,6,5,4,3,2,1 };
	int count9[] = { 7,4,2,5,2,6,0,9,2 };
	//int count0[] = { 2,0,-6,-3,425,9 };
	uzycie_countsort(count7, 7);
	uzycie_countsort(count9, 9);
	//uzycie_countsort(count0, 6);

	/* BUBBLE SORT */
	int bubble7[] = { 7,6,5,4,3,2,1 };
	int bubble9[] = { 7,4,2,5,2,6,0,9,2 };
	int bubble0[] = { 2,0,-6,-3,425,9 };
	uzycie_bubblesort(bubble7, 7);
	uzycie_bubblesort(bubble9, 9);
	uzycie_bubblesort(bubble0, 6);

	/* MERGE SORT */
	/*int merge7[] = { 7,6,5,4,3,2,1 };
	int merge9[] = { 7,4,2,5,2,6,0,9,2 };
	int merge3[] = { 3,2,1 };
	uzycie_mergesort(merge3, 3);
	uzycie_mergesort(merge7, 7);
	uzycie_mergesort(merge9, 9);*/

	/* INSERT SORT */
	int insert7[] = { 7,6,5,4,3,2,1 };
	int insert9[] = { 7,4,2,5,2,6,0,9,2 };
	int insert0[] = { 2,0,-6,-3,425,9 };
	uzycie_insertsort(insert7, 7);
	uzycie_insertsort(insert9, 9);
	uzycie_insertsort(insert0, 6);


	/* SELECTION SORT */
	int selection7[] = { 7,6,5,4,3,2,1 };
	int selection9[] = { 7,4,2,5,2,6,0,9,2 };
	int selection0[] = { 2,0,-6,-3,425,9 };
	uzycie_selectionsort(selection7, 7);
	uzycie_selectionsort(selection9, 9);
	uzycie_selectionsort(selection0, 6);

	system("PAUSE");
	return 0;
}
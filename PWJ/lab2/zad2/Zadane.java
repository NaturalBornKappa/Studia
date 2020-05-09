// Napisz w³asna implementacje klasy Figure (figura) implementujacej interfejs NumberOfSidesPrintable,
// a nastepnie napisz klase: Square (kwadrat), ktora dziedziczy po Figure oraz implementuje interfejs Resetable.
// Pokaz w klasie Zadanie uzycie kodu.

package zad2;

class Zadanie { 
	
	public static void main(String[] args) {
		
	Square figura = new Square();
	figura.printSidesNumber();
	figura.resetAllAttributes();
	figura.printSidesNumber();
	}
}
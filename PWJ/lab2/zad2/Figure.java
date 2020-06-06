//Napisz w³asna implementacje klasy Figure (figura) implementujacej interfejs NumberOfSidesPrintable,
//a nastepnie napisz klase: Square (kwadrat), ktora dziedziczy po Figure oraz implementuje interfejs Resetable.
//Pokaz w klasie Zadanie uzycie kodu.

package zad2;

public class Figure implements NumberOfSidesPrintable {
	
	int number_of_sides;
	
	Figure(){
		this.number_of_sides = -1;
	}
	
	//void is_it_a_point();
	
	@Override
	public void printSidesNumber() {
		System.out.println(number_of_sides);
		}
		
	}
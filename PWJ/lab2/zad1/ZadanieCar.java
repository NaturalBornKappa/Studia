//Zaproponuj implementacje klasy abstrakcyjnej Samochod oraz klasy dziedziczacej ja: Mercedes.
//Stworz pola, metody, metody abstrakcyjne itp.
//Zaprezentuj dzia³anie klasy w ZadanieCar.

package zad1;


public class ZadanieCar {
	
	public static void main(String[] args) {
	 
		Mercedes samochod = new Mercedes("Maclaren",2019, "Czarny",	3454);
		samochod.czy_jezdzi();
	}	
}

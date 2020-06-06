package zad1;

import java.util.Scanner;

public abstract class Car{
	static Scanner scan = new Scanner(System.in);
	
	String marka;
	String model;
	int rok_produkcji;
	String kolor;
	int przebieg;

	//konstruktory
	Car(String model, int rok_produkcji, String kolor,	int przebieg) {
		this.marka = "";
		this.model = "";
		this.rok_produkcji = -1;
		this.kolor = "";
		this.przebieg = -1;
	}
	
	
	//metody
	void czy_Niemiec_plakal_jak_sprzedawal() {
		System.out.println("Czy Niemiec plakal jak sprzedawal?\n\n TAK!");
	};
	
	abstract void czy_jezdzi();
	
	//gettery (1 dla przykladu)
	String get_marka() {
		return marka;
	}
	
	//settery (1 dla przykladu)
	void set_marka() {
		this.marka = scan.nextLine();
	}
	
	void set_marka(String rob) {
		this.marka = rob;
	}
}


package zad1;

import java.util.Random;

public class Mercedes extends Car {
	
	private String marka;
	
	Mercedes(String model, int rok_produkcji, String kolor,	int przebieg){
		super( model,rok_produkcji, kolor, przebieg);
		this.marka = "Mercedes";
	}

	void jaka_marka() {
	 System.out.println(marka);
	}
	
	@Override
	void czy_jezdzi() {
		Random rand = new Random();
		int a = rand.nextInt(2);
		
		if (a==0)
			System.out.println("Nie jezdzi.");
		else
			System.out.println("Jezdzi.");
	};
	
};

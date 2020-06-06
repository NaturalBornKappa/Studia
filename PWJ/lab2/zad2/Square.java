package zad2;

public class Square extends Figure implements Resetable {

	int number_of_sides;

	
	Square(){
		this.number_of_sides = 4;
	}
	
	@Override
	public
	void printSidesNumber(){
		if (number_of_sides != -1)
			System.out.println("Fajna metoda co pokazuje ile ma bokow: "+number_of_sides);
		else
			System.out.println("Aj jo, chyba zresetowales swoja figure.");
	}
	
	@Override
	public void resetAllAttributes() {
	number_of_sides = -1;
	}
}

package zad5;

public class Person implements PrzedstawSie {
	String first_name;
	String last_name;
	
	Person(){
		this.first_name = "Jan";
		this.last_name = "Kowalski";
	}
	
	@Override
	public void przedstawSie() {
		System.out.println("Nazywam sie: " + first_name + " " + last_name + "\n");
	}
}
package zad5;

public class Teacher extends UniversityPerson implements PrzedstawSie {
	String first_name;
	String last_name;
	String rola;


	Teacher(){
		this.first_name = "Jan";
		this.last_name = "Nowak";
		this.rola = "Jestem nauczycielem.";
	}
	
	@Override
	public void przedstawSie() {
		System.out.println("Nazywam sie: " + first_name + " " + last_name + "\n" + status + "\n" + rola + "\n");
	}
}

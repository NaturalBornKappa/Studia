package zad5;

public class Student extends UniversityPerson implements PrzedstawSie {
	String first_name;
	String last_name;
	String rola;


	Student(){
		this.first_name = "Jakub";
		this.last_name = "Bauer";
		this.rola = "Jestem studentem.";
	}
	
	@Override
	public void przedstawSie() {
		System.out.println("Nazywam sie: " + first_name + " " + last_name + "\n" + status + "\n" + rola + "\n");
	}
}

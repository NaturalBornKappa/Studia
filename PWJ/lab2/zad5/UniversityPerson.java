package zad5;

public class UniversityPerson extends Person implements PrzedstawSie {
	String first_name;
	String last_name;
	String status;


	UniversityPerson(){
		this.status = "Jestem zwiazany z uniwersytetem.";
	}
	
	@Override
	public void przedstawSie() {
		System.out.println("Nazywam sie: " + first_name + "\n" + last_name + "\n" + status + "\n");
	}

}

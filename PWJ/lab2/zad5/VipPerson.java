package zad5;

public class VipPerson extends Person implements PrzedstawSie {
	String first_name;
	String last_name;
	String vip;
	
	VipPerson(){
		this.first_name = "John";
		this.last_name = "Smith";
		this.vip = "Jestem wazny!";
	}
	
	@Override
	public void przedstawSie() {
		System.out.println("Nazywam sie: " + first_name + " " + last_name + "\n" + vip + "\n");
	}
}

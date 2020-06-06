// Zastosuj now¹ wiedzê o Java 8. 
// Zaproponuj implementacjê obiektów: Person, VipPerson, UniversityPerson, Teacher, Student. 
// Sam zaproponuj co z czego dziedziczy/implementuje. 
// Zastosuj jeœli siê da interfejsy i domyœlne metody itp.
// Poka¿ w klasie ZadaniePerson przyk³ady u¿ycia.

package zad5;

public class ZadaniePerson {
	
	public static void main(String[] args) {
		
		Person osoba = new Person();
		VipPerson vip = new VipPerson();
		Student student = new Student();
		Teacher nauczyciel = new Teacher();
		
		osoba.przedstawSie();
		vip.przedstawSie();
		student.przedstawSie();
		nauczyciel.przedstawSie();
	}

}
package zad4;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class People2 <I,N,W>{
    public int wiek;
    public String imie;
    public String nazwisko;

	public People2(String imie, String nazwisko, int wiek) {
        this.wiek = wiek;
        this.nazwisko = nazwisko;
        this.imie = imie;
	}

	/*@Override
	public String toString(List<People2> person) {
		return <string> person;
	}*/
    public String Print(){
        return "Imie: " + imie + " nazwisko: " + nazwisko  + " wiek: " + wiek;
    }


	public static void main(String[] args) {
		
		List<People2> person = new ArrayList<>();
		
		person.add(new People2<String, String, Integer>("Jakub","Bauer",23));
		person.add(new People2<String, String, Integer>("Jan", "Nowak", 69));
		person.add(new People2<String, String, Integer>("Jan", "Kowalski", 59));
		person.add(new People2<String, String, Integer>("Barbara", "Browar", 49));
		
		for (People2 temp: person) {
	           System.out.println(temp.Print());
	        }

	        person.sort(Comparator.comparingInt(a -> a.wiek));
	        Collections.reverse(person);
	        for (People2 temp: person) {
	            System.out.println(temp.Print());
	        }

	        person.sort(Comparator.comparing(a -> a.nazwisko));
	        Collections.reverse(person);
	        for (People2 temp: person) {
	            System.out.println(temp.Print());
	        }
		//System.out.println(person);
	    //System.out.println(person.toString());
	    //System.out.println(person.imie+" "+person.nazwisko+""+person.wiek));
	    
	  }
}

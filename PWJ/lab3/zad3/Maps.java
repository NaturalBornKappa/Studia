package zad3;

import java.util.Map;
import java.util.TreeMap;

public class Maps <I,P> {
	
		public static void main(String[] args) {
			Map<Integer,String> tm = new TreeMap<>();
			
			tm.put(new Integer(213742069), "Jan Kowalski");
			tm.put(new Integer(960909036), "Jan Nowak");
			tm.put(new Integer(694202137), "Karol Sztrasburger");
			tm.put(new Integer(123456789), "Jakub Bauer");
			tm.put(new Integer(987654321), "John Cena");
			
			System.out.print("And his name is: " + tm.get(987654321));
			}
	}

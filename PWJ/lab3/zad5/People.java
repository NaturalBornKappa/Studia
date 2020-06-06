package zad5;

import java.util.HashSet;
import java.util.Objects;
import java.util.TreeSet;

public class People implements Comparable {
	public int wiek;
	public String imie;

	public People(int wiek , String imie){
		this.wiek = wiek;
		this.imie = imie;
	}

    @Override
    public boolean equals(Object o) {
        if (this == o) return true;
        if (!(o instanceof People)) return false;
        People people = (People) o;
        return wiek == people.wiek &&
                imie.equals(people.imie);
    }

    @Override
    public int hashCode() {
        return Objects.hash(wiek, imie);
    }
    
	@Override
	public int compareTo(Object o) {
	    return 0;
	}
	
    public String Print(){
        return "Imie: " + imie + " wiek: " + wiek;
    }
	
	public static void main(String[] args) {
		People ja1 = new People(23 , "Jakub");
        People people = new People( 24 , "Aleksy");
        People ja2 = new People(23,"Jakub");
        People people1 = new People(420, "John");
        
        HashSet<People> hashSet = new HashSet<>();
        hashSet.add(ja1);
        hashSet.add(ja2);
        hashSet.add(people);
        hashSet.add(people1);
	
          for (People peopleTemp:hashSet) {
        	  System.out.println(peopleTemp.hashCode());
              System.out.println(peopleTemp.equals(ja1));
          }
          
          TreeSet<People>treeSetPeople = new TreeSet<>();
          treeSetPeople.addAll(hashSet);
          treeSetPeople.comparator();
          
          for (People peopleTemp:treeSetPeople) {
              System.out.println(peopleTemp.Print());
          }

          TreeSet<People>peopleTreeSet2 = new TreeSet<>();
          treeSetPeople.addAll(hashSet);
          if (treeSetPeople.comparator() != null) {
        	  treeSetPeople.comparator().reversed();
          }
          
          for (People peopleTemp:treeSetPeople) {
              System.out.println(peopleTemp.Print());
          }
	}
}


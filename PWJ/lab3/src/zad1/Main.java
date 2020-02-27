package zad1;

public class Main <T,U> {
	
	public boolean contains(T x[], U y) {
		 boolean test = false; 
			
		 for (T element: x) {
			 if( element == y) {
				 test = true;
				 break;
			 }
		 }
		return test;
	}
	
	public static void main(String[] args) {
	    String[] array = {"element", "item"};
	    String element1 = "element";
	    String element2 = "element2";
	    
	    Main main = new Main();
	    System.out.println(main.contains(array, element1));
	    System.out.println(main.contains(array, element2));
	  }
}

/*package lab1;

import java.util.Scanner;
import java.util.Arrays;

public class Triangle {
	static Scanner scan = new Scanner(System.in);
	int a,b,c,h;
	
	// konstruktor
	public Triangle(){
		a = 0;
		b = 0;
		c = 0;
		h = 0;
	}

	// metody
	public static int input_int() {
		int x = scan.nextInt();
		return x;
	}
	
	public static boolean if_triangle(int a, int b, int c) {	
		if (a + b > c && a + c > b && b + c > a) {
			System.out.println("Z podanych bokow mozna utowrzyc trojkat.");
			return true;
		}
		System.out.println("Z podanych bokow NIE mozna utowrzyc trojkat.");
		return false;
	}
	
	public static void area_of_triangle (int a, int b, int c)
    {
        int volume = 0;
        volume = a + b + c;
        
        double area = 0.5 * volume;
        System.out.println("Pole trojkata to: " + Math.sqrt(area*(area-a)*(area-b)*(area-c)));
    }
	
	public static void sides(int a, int b, int c) {
		int[] tab = new int[3];
        tab[0]= a;
        tab[1]= b;
        tab[2]= c;

		System.out.println("Posortowane boki kolejno to: ");
		Arrays.parallelSort(tab);
		for ( int i : tab) {
		System.out.print(i + " ");
		}
		
	}
	
	public static void is_square(int a, int b, int c) {		
		if (a == b || a == c || b == c) {
			System.out.println("\nTrojkat jest trojkatem prostokatnym. ");
		}
		else {
			System.out.println("\nTrojkat NIE jest trojkatem prostokatnym. ");
		}
	}
	
	public static void is_convex(int a, int b, int c) {
		int[] tab = new int[3];
        tab[0]= a;
        tab[1]= b;
        tab[2]= c;
        
        Arrays.parallelSort(tab);
        
        double x=Math.pow(tab[2],2);
        double y=Math.pow(tab[1],2);
        double z=Math.pow(tab[0],2);
        if(x>y+z)
        {
            System.out.println("Trojkat jest trojkatem rozwartokatny");
        }
        else
        {
            System.out.println("Trojkat NIE jest trojkatem rozwartokatny");
        }
	
	}
	
	
	public static void main(String []Args) {
		
		System.out.println("Podaj dugosc pierwszego boku: ");
		int a = input_int();
		System.out.println("Podaj dlugosc drugiego boku: ");
		int b = input_int();
		System.out.println("Podaj dlugosc trzeciego boku: ");
		int c = input_int();
		
		// wywolanie metod
		if_triangle(a,b,c);
		area_of_triangle(a,b,c);
		sides(a,b,c);
		is_square(a,b,c);
		is_convex(a,b,c);
	}
}
*/
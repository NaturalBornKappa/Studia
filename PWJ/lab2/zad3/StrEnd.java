package zad3;

import java.util.Scanner;

public class StrEnd {
	static Scanner scan = new Scanner(System.in);
	
	public static void main(String[] args) {
		
		while(true){
		String ciag="";
		ciag = scan.nextLine();
		
		if(ciag.endsWith("end")){
		break;
		}
		else{
		continue;
		}
		}
	}
}

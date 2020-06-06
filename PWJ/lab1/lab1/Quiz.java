package lab1;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Quiz {
	// define
	private static final int N = 5;

	
	/////metody\\\\\
	//wczytywanie pliku
	public static String[] load(String[] question) throws FileNotFoundException{
        File file = new File("./src/questions.txt");
        Scanner scan = new Scanner(file);

        for(int i = 0; i < 30; i++) { // i<(N*6)
            question[i] = scan.nextLine();
        }
        //scan.close();
        return question;
    }
	
	// wypisywanie pytan na ekran, wczytywanie opdowiedzi i liczenie score'a
	public static int showquestions(String[] question) {
        Scanner scan = new Scanner(System.in);
        int score = 0;

        	for(int i = 0; i < N; i++) {
        		System.out.println(question[i * 6 + 0]);
        		System.out.println(question[i * 6 + 1]);
        		System.out.println(question[i * 6 + 2]);
        		System.out.println(question[i * 6 + 3]);
        		System.out.println(question[i * 6 + 4]);
            
        		System.out.println("Twoja odpowiedz to: ");
        		String answer = scan.nextLine();
        		answer = answer.toLowerCase();
            
        		if (answer.equals(question[i * 6 + 5])) {
        			System.out.println("Dobra odpowiedz");
    	           score++;
        		} 
        		else {
        			System.out.print("Zla odpowiedz. \n Poprawna odpowiedz to: ");
        			System.out.println(question[i * 6 + 5]);
        		}
        	}
        return score;
    }
	
	// main
    public static void main(String[] args) throws FileNotFoundException {

    	String[] quizquestion = new String[30];
    	load(quizquestion);
    	int score = showquestions(quizquestion);
    	System.out.println("Wystrzelales az: " + score + " punktow.");
    }
}

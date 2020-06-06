package zad3;

import zad2.JoinPractice;

public class Account{
	public Boolean flaga = false;
	
	private double saldo;
	
	double get_saldo(){
		return this.saldo;
	};
	
	void ukradnij(double x) { //aka wyp³aæ/zap³aæ
	saldo = saldo - x;
	}
	
	void sprawdz(double x) {
		if(x >= get_saldo()) { ukradnij(x);}
		else System.out.println("Brak wystarczaj¹cyh œrodków");
	}

	void print() {
			System.out.println(get_saldo());
		}
	
	Account(){
		this.saldo = 0.00;
	}
	
	static class MyThread extends Thread{
		MyThread(Account watek) {}
		
		public void run() {}
		
	}
	
	
	public static void main(String[] args) {
		Account saldo = new Account();
		MyThread watek0 = new MyThread(saldo);
		watek0.start();
		System.out.println(saldo.get_saldo());
		
		Account pobierz = new Account();
		MyThread watek2 = new MyThread(pobierz);
		watek2.start();
		pobierz.sprawdz(1.00);
				
		Account refresh = new Account();
		refresh.flaga = true;
		MyThread watek1 = new MyThread(refresh);
		watek1.start();
		while (refresh.flaga == true) {
			refresh.print();
			try {
			Thread.sleep(500);
			} catch(InterruptedException e) {
				e.printStackTrace();
			}
		
		} //koniec while'a

		}// koniec maina
}
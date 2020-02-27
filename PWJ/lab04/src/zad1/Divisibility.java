package zad1;

public class Divisibility extends Thread {
	
	static class MyThread extends Thread{
		public void run() {
			}
		
		void zakres(int x, int y) {
			for (int i=x;i<=y;i++) {
				if (i==0) {i++;}
				if (i%3==0) {System.out.println(i);}
			}
		}
	}
	public static void main(String[] args) {
		MyThread watek0 = new MyThread();
		watek0.start();
		watek0.zakres(0,100);
		
		MyThread watek1 = new MyThread();
		watek1.start();
		watek0.zakres(101,200);
		
		MyThread watek2 = new MyThread();
		watek2.start();
		watek0.zakres(201,300);
		
		MyThread watek3 = new MyThread();
		watek3.start();
		watek0.zakres(301,400);
		
		MyThread watek4 = new MyThread();
		watek4.start();
		watek0.zakres(401,500);
	}
}
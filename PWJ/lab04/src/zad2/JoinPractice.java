package zad2;

public class JoinPractice {

	static class MyThread extends Thread{
		public MyThread(JoinPractice watek) {
			
		}

		public void run() {
			for (int i=0;i<20;i++) {
				System.out.println(i);
			}
		}
	}
	public static void main(String[] args) {
		for (int i=0;i<10;i++) {
			JoinPractice watek = new JoinPractice();
			MyThread watek1 = new MyThread(watek);
			watek1.start();
			try {
				watek1.join();
			} catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}
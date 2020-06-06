package zad2;

public class Quadruple <A, B, C, D> {
	
	private D cztery;
	private C trzy;
	private B dwa;
	private A jeden;
	
	/* Konstruktor */
	Quadruple(String string, String string2, int j, int i) {
		
	}


	public static void main(String[] args) {
		Quadruple< String, String, Integer, Integer > xxx = new Quadruple< String, String, Integer, Integer > ("2","1",3,7);
		xxx.setJeden("2");
		xxx.setDwa("1");
		xxx.setTrzy(3);
		xxx.setCztery(7);
		
		System.out.print(xxx.getJeden() + " " + xxx.getDwa()+ " " + xxx.getTrzy()+" " + xxx.getCztery());
	  }

	  
	/* Settery i gettery */
	public D getCztery() {
		return cztery;
	}


	public void setCztery(D cztery) {
		this.cztery = cztery;
	}


	public B getDwa() {
		return dwa;
	}


	public void setDwa(B dwa) {
		this.dwa = dwa;
	}


	public C getTrzy() {
		return trzy;
	}


	public void setTrzy(C trzy) {
		this.trzy = trzy;
	}


	public A getJeden() {
		return jeden;
	}


	public void setJeden(A jeden) {
		this.jeden = jeden;
	}
}

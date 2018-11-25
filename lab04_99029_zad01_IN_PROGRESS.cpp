#include <iostream>
#include <cstdlib>
#include<string>
#include<ctime>

using std::cin;
using std::cout;
using std::endl;
using std::string;
// Funkcje globalne
#define ILOSC_OKIENEK 5

// Klasy
class kolejka;

class urzad {
	string nazwa_urzedu;
	int ilosc_pracownikow;
	int okienka = ILOSC_OKIENEK;

public:
	urzad();
	void nazwa();
	int get_ilosc_pracownikow();
};

class pracownik : public urzad {
	string imie;
	int przydzial; //przydzial pracownika do sprawy (jezeli przydzil pracownika rowny przydzailowi okienka to pracownik bedzie przyedzielony do obsugi okienka);

public:
	pracownik();

	string set_imie();
	void get_imie();
	
	void set_status(); // ustawia czy pracownik jest w pracy czy nie;
	int get_status(); // pobiera informacje czy pracownik jest w pracy czy nie;
	void set_przydzial(); // przydziela pracownika do taska
	int get_przydzial(); // pobiera inforamcje do jakiego taska jest przypisany pracownik
	};

class okienko : public urzad {
	int status; //1 = okienko otwarte; 0 = zamkniete
	int przydzial;

public:
	okienko();

	void set_status(); // ustawia czy okienko jest otwarte czy zamkniete
	int get_status(); // pobiera informacje czy okienko jest otwarte czy zamkniete
	void set_przydzial(); // przydziela pracownika do taska
	int get_przydzial() const;// pobiera inforamcje do jakiego taska jest przypisane okienko

};

class klienci {
	int id_sprawy;

public:
	klienci();
};

class kolejka {


public:
	kolejka();

};
// Konstruktory
urzad::urzad() {
	getline(cin, nazwa_urzedu);
	ilosc_pracownikow = (rand() % 5) + 1; //losuje od 1 do 5 pracowników w pracy
	}

pracownik::pracownik() {
	cout << "xD" << endl;
	}

okienko::okienko() {
	status = rand() % 2;
	set_przydzial();
}

kolejka::kolejka() {

}

klienci::klienci() {
	id_sprawy = (rand() % 5) + 1;
}

// Metody

void urzad::nazwa() {
		cout << nazwa_urzedu;
}

int urzad::get_ilosc_pracownikow() {
	return ilosc_pracownikow;
}

void pracownik::get_imie() {
	cout << imie;
}

int okienko::get_przydzial() const {
	return przydzial;
}

void okienko::set_przydzial() {
	int n;
	cin >> n;
	przydzial = n;
}

void pracownik::set_przydzial() {
	przydzial = (rand() % ILOSC_OKIENEK) + 1;
}

string pracownik::set_imie() {
	getline(cin, imie);
	return imie;
}


// Main
int main()
{
	srand(time(NULL));

	cout << "Podaj nazwe urzedu: ";
	urzad urzad;
	cout << "Urzad ";  urzad.nazwa(); cout << " w Warszawie" << endl;
	
	int temp = (const int)urzad.get_ilosc_pracownikow();

	
	
	

	system("PAUSE");
	return 0;
}

#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
// Funkcje globalne


// Klasy
class kolejka;

class urzad { 
	char nazwa_urzedu[64];
	int ilosc_pracownikow;
	static int ilosc_okienek;

public:
	urzad();
 };

class pracownik : public urzad {
	char imie[16];
	char nazwisko[32];
	bool status; //true = pracownik w pracy; false = pracownik obibok siedzi w domu
	int przydzial; //przydzial pracownika do sprawy (jezeli przydzil pracownika rowny przydzailowi okienka to pracownik bedzie przyedzielony do obsugi okienka);

public:
	int get_status(); // pobiera informacje czy pracownik jest w pracy czy nie;
	int set_status(); // ustawia czy pracownik jest w pracy czy nie;
	int get_przydzial(); // pobiera inforamcje do jakiego taska jest przypisany pracownik
	int set_przydzial(); // przydziela pracownika do taska
};

class okienko : public urzad {
	bool status; //true = okienko otwarte; false = zamkniete
	int przydzial;

public: 
	okienko();

	int set_status(); // ustawia czy okienko jest otwarte czy zamkniete
	int get_status(); // pobiera informacje czy okienko jest otwarte czy zamkniete
	int set_przydzial(); // przydziela pracownika do taska
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

}

okienko::okienko() {

}

kolejka::kolejka () {

}

// Metody

okienko::get_przydzial () {
	return this->przydzial;
}


// Main
int main()
{






	system("PAUSE");
	return 0;
}
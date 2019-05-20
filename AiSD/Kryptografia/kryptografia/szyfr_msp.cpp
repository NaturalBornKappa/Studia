#include"biblioteki.h"

/* SZYFRUJ */
void szyfruj() {
	string jawne; // tekst do zakodowania
	int x; //wartosc przesuniecia

	cout << "Podaj teskt do zakodowania: ";
	cin >> jawne;
	cout << endl;

	cout << "Podaj nieujemna wartosc przesuniecia: ";
	cin >> x;
	cout << endl;

	while (1) {
		if (x > 26)
			x = x - 26;
		else
			break;
	}

	for (int i = 0; i <= jawne.length(); i++) {
		if (jawne[i] >= 65 && jawne[i] <= 90) {	 // wielkie litery
			jawne[i] = unsigned int(jawne[i]) + x;
			
			if (jawne[i] > 90)
				jawne[i] = jawne[i] - 26;
		
		}
		/* TUTAJ COŒ NIE BANGLA, jak waroœæ ascii jest wieksza od 128 to juz nie chce odjac spowrotem*/
		else if (jawne[i] >= 97 && jawne[i] <= 122) {// ma³e litery
			jawne[i] = jawne[i] + x;
			if (jawne[i] > 122)
				jawne[i] = (jawne[i] - 26);
			/* A¯ DO T¥D*/
		}
		else if (jawne[i] > 122)
	}
	cout << jawne << endl << endl;
}

/* DESZYFUJ */
void deszyfruj() {
	string tajne; // tekst do odkodowania
	int x; //wartosc przesuniecia

	cout << "Podaj teskt do odkodowania: ";
	cin >> tajne;
	cout << endl;

	cout << "Podaj nieujemna wartosc przesuniecia: ";
	cin >> x;
	cout << endl;

	while (1) {
		if (x > 26)
			x = x - 26;
		else
			break;
	}

	for (int i = 0; i <= tajne.length(); i++) {
		if (tajne[i] >= 65 && tajne[i] <= 90) {			// wielkie litery
			tajne[i] = unsigned int(tajne[i]) - x;
			if (tajne[i] < 65)
				tajne[i] = tajne[i] + 26;
		}
		else if (tajne[i] >= 97 && unsigned int(tajne[i]) <= 122) {   // ma³e litery
			tajne[i] = tajne[i] - x;
			if (tajne[i] < 97)
				tajne[i] = tajne[i] + 26;
		}
	}

	cout << tajne << endl << endl;
}


/* SZYFR */
void szyfr_msp() {

	cout << "Monoalfabetyczny szyfr podstawieniowy." << endl;
	cout << "Wybierz co chcesz zrobic: " << endl << "1. Szyfruj " << endl << "2. Odszyfruj" << endl << "3. Wyjdz" << endl;

	int w = wyborf();
	if (w == 1) {
		szyfruj();
	}
	else if (w == 2) {
		deszyfruj();
	}
	szyfr_msp();
}
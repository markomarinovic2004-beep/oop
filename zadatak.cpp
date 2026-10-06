#include<iostream>
#include<string>
using namespace std;

int main() {
	int godina_rodjenja;
	cout << "godina rodjenja je: ";
	cin >> godina_rodjenja;
	cin.ignore();
	string Imeprezime;
	cout << "Ime i prezime: ";
	getline(cin, Imeprezime);

	char InicijalIme;
	InicijalIme = Imeprezime[0];


	int pozicija;
	pozicija = Imeprezime.find(' ');
	char InicijalPrezime;
	InicijalPrezime = Imeprezime[pozicija + 1];
	
	int brojac = 0;
	for (char slova : Imeprezime) {
		if (slova != ' ') {
			brojac++;
		}
		
	}

	int godina;
	godina = 2026 - godina_rodjenja;

	cout << "inicijali: " << InicijalIme << "." << InicijalPrezime << endl;
	cout << "Broj znakova bez razmaka: " << brojac << endl;
	cout << "Trenutno godina ima: " << godina << endl;




}
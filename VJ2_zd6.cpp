#include <iostream>
#include <string>
using namespace std;

struct Student {
	string ime;
	string JMBAG;
	int Godina_Studija;
	int Osvojeni_ECTS;
	double Prosjek_ocjena;
};

void filter_students(Student s[], int n,
	void(*action)(Student&),
	bool(*cond)(const Student&)) {

	for (int i = 0; i < n; i++) {
		if (cond(s[i])) {
			action(s[i]);
		}
	}
}

int main() {

	Student studenti[] = {
		{"Marko", "1234567890", 1, 30, 4.2},
		{"Ivan", "0987654321", 2, 50, 3.2},
		{"Ana", "1122334455", 1, 45, 4.5},
		{"Petar", "2233445566", 1, 0, 2.0}
	};

	int n = 4;

	// Lambda za ispis studenta
	auto ispis = [](Student& st) {
		cout << st.ime << " "
			<< st.Godina_Studija << " "
			<< st.Osvojeni_ECTS << " "
			<< st.Prosjek_ocjena << endl;
	};

	// 1. Studenti prve godine s barem jednim polozenim ispitom
	auto uvjet1 = [](const Student& st) {
		return st.Godina_Studija == 1 && st.Osvojeni_ECTS > 0;
	};

	cout << "Studenti prve godine s polozenim ispitom:" << endl;
	filter_students(studenti, n, ispis, uvjet1);

	// 2. Studenti s prosjekom vecim od 3.5
	auto uvjet2 = [](const Student& st) {
		return st.Prosjek_ocjena > 3.5;
	};

	cout << "\nStudenti s prosjekom vecim od 3.5:" << endl;
	filter_students(studenti, n, ispis, uvjet2);

	// 3. Studenti s barem 45 ECTS bodova
	auto uvjet3 = [](const Student& st) {
		return st.Osvojeni_ECTS >= 45;
	};

	// Lambda koja povecava godinu studija
	auto povecaj = [](Student& st) {
		st.Godina_Studija++;
	};

	filter_students(studenti, n, povecaj, uvjet3);

	cout << "\nStudenti nakon povecanja godine:" << endl;

	for (int i = 0; i < n; i++) {
		ispis(studenti[i]);
	}

	return 0;
}















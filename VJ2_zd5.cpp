#include<iostream>
using namespace std;

inline double add(double a, double b) {
	return a + b;
}

inline double subtract(double a, double b) {
	return a - b;
}

inline double multiply(double a, double b) {
	return a * b;
}

inline double divide(double a, double b) {
	return a / b;
}

int main() {
	double a;
	double b;
	int izbor;

	double(*operacije[4])(double, double) {
		add, subtract, multiply, divide
	};

	cout << "Unesi prvi broj: ";
	cin >> a;

	cout << "Unesi drugi broj: ";
	cin >> b;

	cout << "Odaberi operaciju (0-3): ";
	cin >> izbor;

	if (izbor < 0 || izbor>3) {
		cout << "Pogresan izbor!" << endl;
	}
	else if (izbor == 3 && izbor == 0){
	cout << "Dijeljenje s 0 nije dozvoljeno!" << endl;
}
	else {
		double rezultat = operacije[izbor](a, b);
		cout << "Rezultat: " << rezultat<<endl;
	}


	}

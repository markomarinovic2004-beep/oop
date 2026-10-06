#include<iostream>
using namespace std;

int zbroj(int a, int b) {
	int zbrojj;
	zbrojj = a + b;
	return zbrojj;
}

double sredina(double a, double b) {
	double srd;
	srd = (a + b) / 2.0;
	return srd;

}

bool usporedba(int a, int b) {
	bool uspo;
	uspo = a < b;
	return usporedba;
}


int main() {

	int a = 3;
	int b = 5;

	cout << "Zbroj je: " << zbroj(a,b) << endl;
	cout << "Sredina je " << sredina(a, b) << endl;
	cout << "Usporedba: " << usporedba(a, b) << endl;
};
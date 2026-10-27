#include<iostream>
using namespace std;

void my_transform(int arr[], int n, int(*f)(int)) {
	for (int i = 0; i < n; i++) {
		arr[i] = f(arr[i]);
	}
}

int twice(int broj) {
	return broj * 2;
}

int main() {
	int arr[] = { 1,-3,4,6 };
	int n = 4;
	int suma = 0;
	int produkt = 1;
	int prag = 2;
	int s = 0;

	my_transform(arr, n, twice);
	cout << "Novi niz: ";
	for (int x : arr) {
		cout << x << " ";
	}cout << endl;


	auto mojaLambda=[](int broj) {
		if (broj % 2 == 0) {
			return broj / 2;
		}
		else {
			return broj * 2;
		}
	};

	auto Izracunaj = [&](int broj) {
		suma += broj;
		produkt *= broj;

	};

	auto Prag = [prag, &s](int broj) {
		if (broj > prag) {
			s += broj;
		}
	};


	my_transform(arr, n, mojaLambda);
	cout << "Novi niz: ";
	for (int x : arr) {
		cout << x << " ";
	}cout << endl;

	for(int x : arr){
		Izracunaj(x);
	}
	cout << "Suma: " << suma << endl;
	cout << "Produkti: " << produkt << endl;

	for (int x : arr) {
		Prag(x);
	}
	cout << "Izracun: " << s << endl;

	return 0;
}
#include <iostream>
using namespace std;

// Ascending iz prethodnog zadatka
inline bool ascending_stari(int a, int b) {
	return a > b;
}

// Novi template ascending
template <typename T>
bool ascending(T a, T b) {
	return a > b;
}

// Novi template descending
template <typename T>
bool descending(T a, T b) {
	return a < b;
}

// Template funkcija za sortiranje
template <typename T>
void my_sort(T arr[], int n, bool(*cmp)(T, T)) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {

			if (cmp(arr[j], arr[j + 1])) {
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {

	int brojevi[] = { 5, 2, 8, 1, 4 };
	double decimale[] = { 3.5, 1.2, 7.8, 2.4 };
	char znakovi[] = { 'd', 'a', 'c', 'b' };

	int n1 = 5;
	int n2 = 4;
	int n3 = 4;

	// Ovaj poziv NE radi jer ascending_stari prima int:
	// my_sort(decimale, n2, ascending_stari);

	// Pozivi template funkcije
	my_sort(brojevi, n1, ascending<int>);
	my_sort(decimale, n2, descending<double>);
	my_sort(znakovi, n3, ascending<char>);

	cout << "Int uzlazno: ";
	for (int x : brojevi) {
		cout << x << " ";
	}
	cout << endl;

	cout << "Double silazno: ";
	for (double x : decimale) {
		cout << x << " ";
	}
	cout << endl;

	cout << "Char uzlazno: ";
	for (char x : znakovi) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}
#include <iostream>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;

void input_vector(vector<int>& v) {
	int x;
	while (true) {
		cin >> x;
		if (x == 0) break;
		v.push_back(x);
	}
}


void print_vector(const vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";

	}
	cout << endl;
}






int main() {
	vector<int> v;
	cout << "Unesite brojeve: ";
	input_vector(v);

	cout << "Uneseni vektor: ";
	print_vector(v);

	vector<int> jedinstveni;
	for (int x : v) {
		if (find(jedinstveni.begin(), jedinstveni.end(), x) == jedinstveni.end()) {
			jedinstveni.push_back(x);
		}
	}

	cout << "Jedinstveni elementi: ";
	print_vector(jedinstveni);

	sort(jedinstveni.begin(), jedinstveni.end(),
		[](int a, int b) {
		if (abs(a) == abs(b))
			return a < b;
		return abs(a) < abs(b);

	});

	cout << "Sortirani po apsolutnoj vrijednosti: ";
	print_vector(jedinstveni);
	return 0;
}



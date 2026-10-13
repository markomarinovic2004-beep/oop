#include<iostream>
using namespace std;
#include<string>
#define MAX(a, b) a>b ? a:b

inline int my_max(int a, int b) {
	return a > b ? a : b;
}

template<typename T>
T my_max(T a, T b) {
	return a > b ? a : b;
}



int main() {
	int a = MAX(3, 5);
	int b = 2 * MAX(3, 5);
	int c = MAX(3, 5) + 1;

	cout << "Bez zagrada: " << a << " " << b << " " << c << endl;

#undef MAX
#define MAX_ZAGRADE(a, b) ((a)>(b) ? (a):(b))
	 a = MAX_ZAGRADE(3, 5);
	b = 2 * MAX_ZAGRADE(3, 5);
	c = MAX_ZAGRADE(3, 5) + 1;

	cout << "Sa zagradama: " << a << " " << b << " " << c << endl;

	int i = 3;
	int rezultat = MAX_ZAGRADE(++i, 2);
	cout << "my_max: " << rezultat << "i: " << i << endl;



	 i = 3;
	rezultat = my_max(++i, 2);
	cout << "my_max: " << rezultat << "i: " << i << endl;

	cout << my_max<int>(3, 5) << endl;
	cout << my_max(3.2, 5.5) << endl;
	cout << my_max('a', 'z') << endl;
	cout << my_max(string("Ana"), string("Marko")) << endl;

}
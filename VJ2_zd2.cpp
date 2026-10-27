#include<iostream>
using namespace std;

inline bool  ascending(int a, int b) {
	return a > b;
}

inline bool descending(int a, int b) {
	return a < b;
}

void my_sort(int arr[], int n, bool(*cmp)(int, int)) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1-i; j++) {
			if (cmp(arr[j], arr[j + 1])) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
}
}

int main() {
	int arr[] = { 5,2,8,1 };
	int n = 4;
	my_sort(arr, n, ascending);
	for (int x : arr) {
		cout << x << " ";
	}cout << endl;

	my_sort(arr, n, descending);
	for (int x : arr) {
		cout << x << " ";
	}cout << endl;


}
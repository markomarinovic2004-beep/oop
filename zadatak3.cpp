#include<iostream>
using namespace std;

int& find_max(int arr[], int n) {
	int najveci = 0;
	for (int i=1; i < n; i++) {
		if (arr[i] > arr[najveci]) {
			najveci = i;
		}
		return arr[najveci];
}

}





int main() {
	int numbers[] = { 4, -7, 12, 0, 9, 3 };

	for (int znak : numbers) {
		cout << znak << " ";
	}
	cout << endl;

	for (int& znak : numbers) {
		if (znak < 0) {
			znak = -znak;
		}
}

	for (int znak : numbers) {
		cout << znak << " ";
	}
	cout << endl;

	find_max(numbers, 6) = 0;

	for (int znak : numbers) {
		cout << znak << " ";
	}
	cout << endl;





}
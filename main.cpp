#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	const int SIZE = 10;
	int arr[SIZE];
	int min = 0, max = 0;
	srand(time(0));
	cout << "Array: ";
	for (size_t i = 0;i < SIZE;i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	min = max = arr[0];
	for (size_t i = 1; i < SIZE; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << endl;
	return 0;
}
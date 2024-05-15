#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	const int SIZE = 5;
	int summ = 0;
	int arr[SIZE];
	for (size_t i = 0;i < SIZE;i++) {
		cout << "Enter length of 5 sides: ";
		cin >> arr[i];
	}
	summ = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	
	cout << summ << " ";
	cout << endl;
	return 0;
}
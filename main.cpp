#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	const int SIZE = 6;
	const int array_2 = 6;
	int arr[SIZE];
	srand(time(0));
	for (size_t i = 0; i < SIZE; i++) {
		cout << "Enter this month value: ";
		cin >> arr[i];
	}
	cout << "Sixth month value is: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << endl;
	return 0;
}
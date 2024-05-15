#include <iostream>
#include <ctime>
using namespace std;

int main() {
	
	const int SIZE = 10;
	//init
	int arr[SIZE];
	srand(time(0));
	//fill array with random numbers
	//some bl
	//result
	for (size_t i = 0;i < SIZE;i++) {
		arr[i] = rand() % 20 - 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
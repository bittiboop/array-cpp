#include <iostream>
#include <ctime>
using namespace std;

int main() 
{
	int min, max;
	const int months = 12;
	double profits[months];

	for (size_t i = 0; i < months; i++) {
		cout << "Enter the price from " << i + 1 << " month: ";
		cin >> profits[i];
	}
	min = max = profits[0];
	for (size_t i = 0; i < months; i++) {
		if (profits[i] < min) {
			min = i;
		}
		if (profits[i] > max) {
			max = i;
		}
	}
	int num1, num2;
	cout << "Enter the start range of months: ";
	cin >> num1;
	cout << "Enter the end range of months: ";
	cin >> num2;
	
	for (size_t i = num1; i < num2; i++) {
		while (months < num2 && months > num1) {
			cout << "The minimum profit was in the " << min + 1 << " month: " << profits[min] << endl;
			cout << "The maximum profit was in the " << max + 1 << " month: " << profits[max] << endl;
		}break;
	}
	
	
	
	cout << endl;
	return 0;
}
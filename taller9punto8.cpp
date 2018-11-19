#include <iostream>
#include <string>
using namespace std;

int main() {
	 int counter = 0;
	float num = 0;
	float max = 0;
	float min = 10000000;
	while (counter < 10) {
		counter += 1;
		float num1 = 0;
		cout << "please enter a float number: " << endl;
		cin >> num1;
		if (num1 > max) {
			max = num1;
		}
		else if (num1 < min) {
			min = num1;
		}
	}
	float average = (max + min) / 2;
	cout << "The largest number was: " << max << endl;
	cout << "the smallest number was: " << min << endl;
	cout << "the average between these numbers are: " << average << endl;
	
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
	
}


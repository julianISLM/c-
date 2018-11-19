#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
	int num = 0;
	int num1 = 0;
	cout << "ingrese un numero: " << endl;
	cin >> num;
	while (num != 0) {
		cout << "ingrese mas numeros: " << endl;
		cin >> num1;
		if (num1 > num) {
			num = num1;
		}
		else if (num1 == 0) {
			cout << "el mayor numero ingresado fue: " << num << endl;

		}
	}

	
	
	//to hold the terminal open.
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}

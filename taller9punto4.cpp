#include <iostream>
#include <string>
using namespace std;

int main() {
	int i;
	cout << "ingrese los grados Celsius que quiere convertir: " << endl;
	cin >> i;
	int F = (9 / 5)*i + 32;
	cout << "Los grados en Farenehit son: " << F << endl;
	
	//to hold the terminal open.
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}
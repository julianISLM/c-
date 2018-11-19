#include <iostream>
#include <string>
using namespace std;


int main() {
	int i;
	cout << "Ingrese lo metros que desea convertir " << endl;
	cin >> i;
	int p = i / 0.0254;
	int pies = p / 12;
	cout << "los metros convertidos en pies y pulgadas, respectivamente son:" << pies << " and " << p << endl;
	//to hold the terminal open.
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}
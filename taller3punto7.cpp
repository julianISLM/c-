#include <iostream>
#include <string>
using namespace std;

int main() {
	string alien_color = "verde";
	cout << "Entre un color (verde,rojo,amarillo): " << endl;
	cin >> alien_color;
	if (alien_color == "verde") {
		cout << "El invasor gano 5 puntos" << endl;
	}
	else if (alien_color == "amarillo") {
		cout << "El invasor gano 10 puntos" << endl;
	}
	else {

		cout << "El invasor gano 15 puntos" << endl;
	}
	cin.clear();
	cin.ignore();
	cin.get();
	return 0;
}


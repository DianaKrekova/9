#include "Ex9.h"

int main() {
	setlocale(LC_ALL, "rus");
	Property* P[7];
	P[0] = new Apartment(25000);
	P[1] = new Apartment(40000);
	P[2] = new Apartment(32000);
	P[3] = new Car(45000);
	P[4] = new Car(2000);
	P[5] = new CountryHouse(55000);
	P[6] = new CountryHouse(43000);
	for (int i = 0; i < 7; i++) {
		cout << "Tax = " << P[i]->tax() << " rub\n";
		delete P[i];
	}

}
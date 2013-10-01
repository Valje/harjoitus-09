// Valtteri
// Harjoitus 9
// Versio 2.0
// Muokattu k„ytt„m„„n switch-rakennetta
// 1.10.2013

#include <iostream>
using namespace std;

void main()
{
	int luku1, luku2;
	cout << "Anna kaksi kokonaislukua v„lily”nnill„ erotettuna." << endl;
	cin >> luku1 >> luku2;

	int valinta;
	bool lippu;

	cout << endl << "VALIKKO:" << endl;
	cout << "1: Summa" << endl;
	cout << "2: Erotus" << endl;
	cout << "3: Tulo" << endl;
	cout << "4: Osam„„r„" << endl;
	cout << "5: Jakoj„„nn”s";

	do{

		lippu = false;

		cout << endl;
		cin >> ws >> valinta;
		cout << endl;

		switch(valinta)
		{
		case 1: cout << luku1 + luku2;
			break;
		case 2: cout << luku1 - luku2;
			break;
		case 3: cout << luku1 * luku2;
			break;
		case 4: cout << luku1 / luku2;
			break;
		case 5: cout << luku1 % luku2;
			break;
		default: cout << "Tee uusi valinta n00b."; 
			lippu = true;
			break;
		}

	}while(lippu);

	cout << endl << endl;
}
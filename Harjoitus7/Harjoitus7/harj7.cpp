#include <iostream>
using namespace std;

void main()
{
	char nimi[20], osoite[20];
	int pituus, paino, ihannepaino;

	cout << "Anna nimesi: ";
	cin.get();
	cin.get(nimi, 20);
	cout << "Anna pituutesi sentteina: ";
	cin >> pituus;
	cout << "Anna osoitteesi: ";
	cin.get();
	cin.get(osoite, 20);
	cout << "Anna painosi: ";
	cin >> paino;

	ihannepaino = pituus - 100;

	cout << endl << endl;
	cout << endl << "Arvoisa " << nimi;
	cout << endl << "Osoitteesi on " << osoite;
	cout << endl << "Nykyinen painosi " << paino;
	cout << endl << "Ihannepainosi " << ihannepaino;
	cout << endl << "Erotus " << paino - ihannepaino << " kg";
}
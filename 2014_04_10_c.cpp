#include <iostream>

using namespace std;

int main() {
	
	int confronto1, confronto2;
	
	int value;
	cout << "Inserisci un numero intero e premi Invio: ";
	cin >> value;
	
	if (value == 2)
		cout << "Il numero e' un due";
	else
		cout << "Il numero non e' un due";

	cout << "\n\nInserisci il primo valore da confrontare: ";
	cin >> confronto1;
	cout << "Inserisci il secondo valore da confrontare: ";
	cin >> confronto2;
	
	if (confronto1 > confronto2)
		cout << confronto1 << " e' maggiore di " << confronto2;
	else
		if (confronto1 == confronto2)
			cout << confronto1 << " e' uguale a " << confronto2;
		else
			cout << confronto1 << " e' minore di " << confronto2;
			
	if ((confronto1 %2) == 0)
		cout << "\n\nIl numero " << confronto1 << " e' pari";
	else
		cout << "\n\nIl numero " << confronto1 << " e' dispari";
		
	if ((confronto2 %2) == 0)
		cout << "\nIl numero " << confronto2 << " e' pari";
	else
		cout << "\nIl numero " << confronto2 << " e' dispari";
		
	if ((confronto1 % confronto2 ) == 0)
		cout << "\n" << confronto1 << " e' divisibile per " << confronto2;
	else
		cout << "\nI due numeri non sono divisibili";
		
	return 0;
	
/*
Operatori di confronto

==		Uguaglianza
>		Maggiore
>=		Maggiore o uguale
<		Minore
<=		Minore o uguale
!=		Diverso
*/
	
}

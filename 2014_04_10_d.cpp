#include <iostream>

using namespace std;

int main() {
	
	int operand1;
	int operand2;
	char operation;

	cout << "Inserisci il primo valore e premi Invio: ";
	cin >> operand1;
	cout << "Inserisci il secondo valore e premi Invio: ";
	cin >> operand2;
	cout << "Inserisci l'operazione da fare (+, -, *, /): ";
	cin >> operation;
	
	if (operation == '+')
		cout << "L'operazione scelta e' " << operand1 << " + " << operand2 << " = " << operand1 + operand2;
	else
		if (operation == '-')
			cout << "L'operazione scelta e' " << operand1 << " - " << operand2 << " = " << operand1 - operand2;
		else
			if (operation == '*')
				cout << "L'operazione scelta e' " << operand1 << " * " << operand2 << " = " << operand1 * operand2;
			else
				if (operation == '/')
					cout << "L'operazione scelta e' " << operand1 << " / " << operand2 << " = " << (double)operand1 / operand2;
				else
					cout << "L'operazione scelta non esiste";

	return 0;
	
}

#include <iostream>

using namespace std;

int main() {
	
	int operand1, operand2;
	char operation;
	
	cout << "Inserisci l'operazione nel formato (Operando 1, Operazione, Operando 2): ";
	cin >> operand1 >> operation >> operand2;
	
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
					if (operation == '%')
						cout << "L'operazione scelta e' " << operand1 << " mod " << operand2 << " = " << operand1 % operand2;
					else
						cout << "L'operazione scelta non esiste";
	
	return 0;
}

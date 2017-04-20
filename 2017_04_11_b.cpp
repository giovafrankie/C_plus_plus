#include <iostream>

using namespace std;

int sum (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 + operando2;
	return risultato;
	
}

int diff (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 - operando2;
	return risultato;
	
}

int mul (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 * operando2;
	return risultato;
	
}

double div (int operando1, int operando2) {
	
	double risultato;
	risultato = (double)operando1 / operando2;
	return risultato;
	
}

int mod (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 % operando2;
	return risultato;
	
}

int main () {
	
	int operand1, operand2;
	char operation;
	
	cout << "Inserisci l'operazione nel formato (Operando 1, Operazione, Operando 2): ";
	cin >> operand1 >> operation >> operand2;
	
	if (operation == '+')
		cout << "L'operazione scelta e' " << operand1 << " + " << operand2 << " = " << sum(operand1, operand2);
	else
		if (operation == '-')
			cout << "L'operazione scelta e' " << operand1 << " - " << operand2 << " = " << diff(operand1, operand2);
		else
			if (operation == '*')
				cout << "L'operazione scelta e' " << operand1 << " * " << operand2 << " = " << mul(operand1, operand2);
			else
				if (operation == '/')
					cout << "L'operazione scelta e' " << operand1 << " / " << operand2 << " = " << div(operand1, operand2);
				else
					if (operation == '%')
						cout << "L'operazione scelta e' " << operand1 << " mod " << operand2 << " = " << mod(operand1, operand2);
					else
						cout << "L'operazione scelta non esiste";
	
	return 0;
	
}

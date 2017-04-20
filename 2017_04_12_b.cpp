#include <iostream>
#include <string>

using namespace std;

int inserisci_operando1 () {
	int operando1;
	cout << "\nInserisci il primo operando: ";
	cin >> operando1;
	return operando1;
}

int inserisci_operando2 () {
	int operando2;
	cout << "Inserisci il secondo operando: ";
	cin >> operando2;
	return operando2;
}

void istruzione_back () {
	cout << "Inserisci il valore '0' al primo e al secondo operando per tornare al menu precedente\n";
}

int sum (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 + operando2;
	return risultato;
	
}

void do_sum () {
	int k = 1;
	int op1, op2;
	while (k!=0) {
		cout << "Hai scelto di fare la somma\n";
		istruzione_back();
		op1 = inserisci_operando1();
		op2 = inserisci_operando2();
			if (op1 == 0 && op2 == 0)
				k = 0;
			else
				cout << "L'operazione eseguita e' " << op1 << " + " << op2 << " = " << sum(op1, op2) << "\n\n";
		}
}

int sub (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 - operando2;
	return risultato;
	
}

void do_sub () {
	int k = 1;
	int op1, op2;
	while (k!=0) {
		cout << "Hai scelto di fare la differenza\n";
		istruzione_back();
		op1 = inserisci_operando1();
		op2 = inserisci_operando2();
			if (op1 == 0 && op2 == 0)
				k = 0;
			else
				cout << "L'operazione eseguita e' " << op1 << " - " << op2 << " = " << sub(op1, op2) << "\n\n";
		}
}

int mul (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 * operando2;
	return risultato;
	
}

void do_mul () {
	int k = 1;
	int op1, op2;
	while (k!=0) {
		cout << "Hai scelto di fare la moltiplicazione\n";
		istruzione_back();
		op1 = inserisci_operando1();
		op2 = inserisci_operando2();
			if (op1 == 0 && op2 == 0)
				k = 0;
			else
				cout << "L'operazione eseguita e' " << op1 << " * " << op2 << " = " << mul(op1, op2) << "\n\n";
		}
}

double div (int operando1, int operando2) {
	
	double risultato;
	risultato = (double)operando1 / operando2;
	return risultato;
	
}

void do_div () {
	int k = 1;
	int op1, op2;
	while (k!=0) {
		cout << "Hai scelto di fare la divisione\n";
		istruzione_back();
		op1 = inserisci_operando1();
		op2 = inserisci_operando2();
			if (op1 == 0 && op2 == 0)
				k = 0;
			else
				cout << "L'operazione eseguita e' " << op1 << " / " << op2 << " = " << div(op1, op2) << "\n\n";
		}
}

int mod (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 % operando2;
	return risultato;
	
}

void do_mod () {
	int k = 1;
	int op1, op2;
	while (k!=0) {
		cout << "Hai scelto di fare il modulo\n";
		istruzione_back();
		op1 = inserisci_operando1();
		op2 = inserisci_operando2();
			if (op1 == 0 && op2 == 0)
				k = 0;
			else
				cout << "L'operazione eseguita e' " << op1 << " mod " << op2 << " = " << mod(op1, op2) << "\n\n";
		}
}

int chiama_menu () {
	int choice;
	cout << "Che operazione vuoi fare? Inserisci il numero corrispondente\n";
	cout << "1 - Somma\n";
	cout << "2 - Sottrazione\n";
	cout << "3 - Moltiplicazione\n";
	cout << "4 - Divisione\n";
	cout << "5 - Modulo\n";
	cout << "6 - ESCI\n";
	cout << "Scelta: ";
	cin >> choice;
	return choice;
}

string register_username () {
	string user;
	cout << "REGISTRAZIONE\n";
	cout << "Inserisci il nome utente: ";
	cin >> user;
	return user;
}

string register_password () {
	string pass;
	cout << "Inserisci la password: ";
	cin >> pass;
	return pass;
}

clean_screen () {
	system("cls");
	cout << "Dati salvati !!!\n\n";
}

void check_username (string user_check) {
	string user;
	cout << "LOGIN\n";
	while (user != user_check) {
		cout << "Inserisci il nome utente: ";
		cin >> user;
		if (user == user_check)
			cout << "Nome utente corretto\n\n";
		else
			cout << "Nome utente errato\n\n";
	}
}

void check_password (string pass_check) {
	string user;
	while (user != pass_check) {
		cout << "Inserisci la password: ";
		cin >> user;
		if (user == pass_check)
			cout << "Password corretta\n\n";
		else
			cout << "Password errata\n\n";
	}	
}


int main() {
	
	int i = 1;
	int menu;
	
	string username, password;
	
	username = register_username();
	password = register_password();
	clean_screen();
	
	check_username(username);
	check_password(password);
	
	
	while (i!=0) {
	
		menu = chiama_menu();
	
		switch (menu) {
			
			case 1:
				do_sum ();
				break;
			case 2:
				do_sub();
				break;
			case 3:
				do_mul();
				break;
			case 4:
				do_div();
				break;
			case 5:
				do_mod();
				break;
			case 6:
				cout << "Hai scelto di uscire\n";
				i=0;
				break;
			default:
				cout << "Scelta non valida\n";
		}
	
	}
	
	return 0;
}

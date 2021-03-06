#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Struct per gestire i dati di un utente
struct utente {
	string name;
	string surname;
	string email;
	string username;
	string password;		
};

// Variabili globali, visibili in tutte le funzioni
utente user;
int EXIT_CALC;
int EXIT_FIRST;

// Funzioni per inserire gli operandi
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

// Funzione di istruzioni per tornare indietro
void istruzione_back () {
	cout << "Inserisci il valore '0' al primo e al secondo operando per tornare al menu precedente\n";
}

// Funzione per effettuare la somma
int sum (int operando1, int operando2) {
	
	int risultato;
	risultato = operando1 + operando2;
	return risultato;
	
}

// Funzione per chiamare l'operazione di somma
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

double power (double operando1, double operando2) {
	
	double risultato;
	risultato = pow (operando1, operando2);
	return risultato;
	
}

void do_power () {
	int k = 1;
	int op1, op2;
	while (k!=0) {
		cout << "Hai scelto di fare la potenza\n";
		istruzione_back();
		cout << "Il primo operando e' la base e il secondo e' l'esponente\n";
		op1 = inserisci_operando1();
		op2 = inserisci_operando2();
			if (op1 == 0 && op2 == 0)
				k = 0;
			else
				cout << "L'operazione eseguita e' " << op1 << " alla " << op2 << " = " << power(op1, op2) << "\n\n";
		}
}

double squareroot (double operando1) {
	
	double risultato;
	risultato = sqrt (operando1);
	return risultato;
	
}

void do_squareroot () {
	int k = 1;
	int op1, op2;
	while (k!=0) {
		cout << "Hai scelto di fare la potenza\n";
		istruzione_back();
		cout << "Il primo operando e' il numero di cui si fa la radice, il secondo serve per la sequenza di uscita (inserire un valore qualsiasi per il calcolo)\n";
		op1 = inserisci_operando1();
		op2 = inserisci_operando2();
			if (op1 == 0 && op2 == 0)
				k = 0;
			else
				cout << "L'operazione eseguita e' radice quadrata di " << op1 << " = " << squareroot(op1) << "\n\n";
		}
}

// Funzione per stampare i dati dell'utente
void print_user () {
	cout << "Nome: " << user.name << "\n";
	cout << "Cognome: " << user.surname << "\n";
	cout << "E-Mail: " << user.email << "\n";
	cout << "Nome Utente: " << user.username << "\n";
	cout << "Password: " << user.password << "\n";
	cout << "\n";
}

// Funzione per effettuare l'inserimento dei dati
utente registration () {

	cout << "REGISTRAZIONE\n";
	cout << "Inserisci il nome: ";
	cin >> user.name;
	cout << "Inserisci il cognome: ";
	cin >> user.surname;
	cout << "Inserisci l'e-mail: ";
	cin >> user.email;
	cout << "Inserisci il nome utente: ";
	cin >> user.username;
	cout << "Inserisci la password: ";
	cin >> user.password;
	return user;
}

// Funzione per pulire lo schermo a seguito dell'inserimento di dati
clean_screen () {
	system("cls");
	cout << "Dati salvati !!!\n\n";
}

// Funzione per effettuare il login del nome utente con un confronto
void login_username (string user_check) {
	string username;
	cout << "LOGIN\n";
	while (username != user_check) {
		cout << "Inserisci il nome utente: ";
		cin >> username;
		if (username == user_check)
			cout << "Nome utente corretto\n\n";
		else
			cout << "Nome utente errato\n\n";
	}
}

// Funzione per effettuare il login della password con un confronto
void login_password (string pass_check) {
	string password;
	while (password != pass_check) {
		cout << "Inserisci la password: ";
		cin >> password;
		if (password == pass_check) {
			cout << "Password corretta\n\n";
			EXIT_FIRST = 0;
		}
		else
			cout << "Password errata\n\n";
	}	
}

// Funzione per stampare il primo menu all'avvio del programma
int first_menu () {
	int choice_reg;
	cout << "Nuovo utente o login? Inserisci il numero corrispondente\n";
	cout << "1 - Nuovo utente\n";
	cout << "2 - Login\n";
	cout << "3 - ESCI\n";
	cout << "Scelta: ";
	cin >> choice_reg;
	cout << "\n";
	return choice_reg;
}

// Funzione che gestisce il primo menu all'avvio del programma
int first () {
	EXIT_CALC = 1;
	EXIT_FIRST = 1;
	int menu;
	
	while (EXIT_FIRST!=0) {
	
		menu = first_menu();
	
		switch (menu) {
			
			case 1:
				user = registration ();
				clean_screen ();
				break;
			case 2:
				login_username(user.username);
				login_password(user.password);
				break;
			case 3:
				cout << "Hai scelto di uscire\n";
				EXIT_CALC = 0;
				EXIT_FIRST = 0;
				break;
			default:
				cout << "Scelta non valida\n";
		}
	
	}

}

// Funzione per stampare il menu di modifica dei dati utente
int edit_utente_menu () {
	int choice_var_utente;
	cout << "Che dato vuoi modificare? Inserisci il numero corrispondente\n";
	cout << "1 - Nome\n";
	cout << "2 - Cognome\n";
	cout << "3 - E-Mail\n";
	cout << "4 - Nome Utente\n";
	cout << "5 - Password\n";
	cout << "6 - Torna indietro\n";
	cout << "Scelta: ";
	cin >> choice_var_utente;
	cout << "\n";
	return choice_var_utente;
	
}

// Funzione per modificare i dati utente
void edit_var_utente () {
	int exit_var_utente = 1;
	int menu;
	
	while (exit_var_utente!=0) {
	
		menu = edit_utente_menu();
	
		switch (menu) {
			
			case 1:
				cout << "Inserisci il nuovo Nome: ";
				cin >> user.name;
				clean_screen ();
				break;
			case 2:
				cout << "Inserisci il nuovo Cognome: ";
				cin >> user.surname;
				clean_screen ();
				break;
			case 3:
				cout << "Inserisci la nuova E-Mail: ";
				cin >> user.email;
				clean_screen ();
				break;
			case 4:
				cout << "Inserisci il nuovo Nome Utente: ";
				cin >> user.username;
				clean_screen ();
				break;
			case 5:
				cout << "Inserisci la nuova Password: ";
				cin >> user.password;
				clean_screen ();
				break;
			case 6:
				cout << "Hai scelto di tornare indietro\n\n";
				exit_var_utente = 0;
				break;
			default:
				cout << "Scelta non valida\n";
		}
	
	}

}

// Funzione per stampare il menu di scelta di modifica dei dati utente
int edit_menu () {
	int choice_edit;
	cout << "Vuoi modificare i tuoi dati? Inserisci il numero corrispondente\n";
	cout << "1 - Si\n";
	cout << "2 - No, voglio proseguire\n";
	cout << "3 - ESCI\n";
	cout << "Scelta: ";
	cin >> choice_edit;
	cout << "\n";
	return choice_edit;
}

// Funzione per gestire il menu di modifica dei dati utente
int edit () {
	EXIT_CALC = 1;
	int exit_edit = 1;
	int menu;
	
	while (exit_edit!=0) {
	
		menu = edit_menu();
	
		switch (menu) {
			
			case 1:
				edit_var_utente ();
				print_user ();
				break;
			case 2:
				exit_edit = 0;
				break;
			case 3:
				cout << "Hai scelto di uscire\n";
				exit_edit = 0;
				EXIT_CALC = 0;
				break;
			default:
				cout << "Scelta non valida\n";
		}
	
	}

}

// Funzione per stampare il menu di scelta delle operazioni
int calculator_menu () {
	int choice_calc;
	cout << "Che operazione vuoi fare? Inserisci il numero corrispondente\n";
	cout << "1 - Somma\n";
	cout << "2 - Sottrazione\n";
	cout << "3 - Moltiplicazione\n";
	cout << "4 - Divisione\n";
	cout << "5 - Modulo\n";
	cout << "6 - Potenza\n";
	cout << "7 - Radice quadrata\n";
	cout << "8 - ESCI\n";
	cout << "Scelta: ";
	cin >> choice_calc;
	return choice_calc;
}

// Funzione per gestire le chiamate delle operazioni
void calculator() {

	int menu;
	
	while (EXIT_CALC!=0) {
	
		menu = calculator_menu();
	
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
				do_power();
				break;
			case 7:
				do_squareroot();
				break;
			case 8:
				cout << "Hai scelto di uscire\n";
				EXIT_CALC = 0;
				break;
			default:
				cout << "Scelta non valida\n";
		}
	
	}
	
}

int main() {
	
	first();	// Chiamata della registrazione e del login
	
	edit();		// Chiamata della modifica dei dati utente
	
	calculator();	// Chiamata della calcolatrice
	
	return 0;
}

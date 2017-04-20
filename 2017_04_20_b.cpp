#include <iostream>
#include <string>

using namespace std;

// Struct per gestire i dati di un utente
struct utente {
	int id;
	string surname;
	string name;
	string username;
	string password;		
};

#define N 10	// N = 10 è il numero di utenti gestibili

// Variabili globali, visibili in tutte le funzioni
utente user[N];

void initialize_admin () {
	user[0].surname = "Amendolea";
	user[0].name = "Giovanfrancesco";
	user[0].username = "admin";
	user[0].password = "admin";
}

void print_user (int i) {
	cout << user[i].id << "\t" << user[i].surname << "\t\t" << user[i].name << "\t\t" << user[i].username << "\t\t" << user[i].password << "\n";
}

void print_header () {
	cout << "ID\t" << "COGNOME\t\t\t" << "NOME\t\t\t" << "USER ID\t\t" << "PASSWORD\n";
}

void initialize_users () {
	print_header();
	for (int i=0; i<N; i++) {
		user[i].id = i;
		print_user(i);
	}
}

void print_users () {
	print_header();
	for (int i=0; i<N; i++) {
		print_user(i);
	}
}

char print_modify () {
	char choice;
	cout << "Vuoi modificare il record? (S/N)\n";
	cout << "Scelta: ";
	cin >> choice;
	return choice;
}

void modify_user (int i) {
	cout << "Inserisci il Cognome: ";
	cin >> user[i].surname;
	cout << "Inserisci il Nome: ";
	cin >> user[i].name;
	cout << "Inserisci il Nome Utente: ";
	cin >> user[i].username;
	cout << "Inserisci il Password: ";
	cin >> user[i].password;
	print_header();
	print_user(i);
}

// Funzione per stampare il menu di scelta delle operazioni
int choice_id () {
	bool choiceIdError = 0;
	int choiceId;
	while (choiceIdError == 0) {
		cout << "\nChe ID vuoi visualizzare? Inserisci il numero corrispondente\n";
		cout << "Scelta: ";
		choiceIdError = cin >> choiceId;
		if (!choiceIdError)
			cout << "Carattere non valido. Va inserito un numero da 0 a " << N-1 << "\n";
			choiceIdError = 1;
	}
	return choiceId;
}

int max_choiceId (int id) {
	if (id < 0 || id >= N) {
		cout << "ID superiore al numero massimo di utenti. Riprovare!\n";
		id = choice_id();
		return id;
	}
	else
		return id;
}

void modify_row (int id) {
	char modify;
	
	print_header();
	print_user(id);
	modify = print_modify();
	if (modify == 'S' || modify == 's')
		modify_user(id);
	else if (modify == 'N' || modify == 'n')
		cout << "Hai scelto di non modificare il record\n";
	else
		cout << "Scelta non corretta\n";
}

string exit_sequence() {
	string exit;
	cout << "\nSe vuoi uscire digita 'exit'\n";
	cout << "Altrimenti digita un carattere qualsiasi per modificare un altro record\n";
	cout << "Scelta: ";
	cin >> exit;
	return exit;
}

int exit_check() {
	string exit;
	exit = exit_sequence();
	if (exit == "exit" || exit == "EXIT" || exit == "Exit") {
		return 1;
	}
	else {
		cout << "Prossima modifica";
		return 0;
	}
}

int main() {

	int id;
	int exit;
	
	initialize_admin();	// Crea l'utente admin

	initialize_users();	// Inizializza gli ID, stampando tutti gli utenti

	while (1) {
		
		id = choice_id();	// Scelgo l'ID da visualizzare
		
		if (!id){
			cout << "Inserimento errato. Programma terminato!\n";
			break;
		}
		
		id = max_choiceId(id);
		
		modify_row(id);		// Scelgo se voglio modificare un ID
		
		exit = exit_check();	// Richiesta e controllo di uscita
				
		if (exit)
			break;
		else
			cout << "\n";
		
	}

	return 0;
}

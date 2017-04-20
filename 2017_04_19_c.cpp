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
	cout << user[i].id << "\t\t" << user[i].surname << "\t\t" << user[i].name << "\t\t" << user[i].username << "\t\t" << user[i].password << "\n";
}

void initialize_users () {
	cout << "ID\t\t" << "COGNOME\t\t\t" << "NOME\t\t\t" << "USER ID\t\t" << "PASSWORD\n";
	for (int i=0; i<N; i++) {
		user[i].id = i;
		print_user(i);
	}
}

void print_header () {
	cout << "ID\t" << "COGNOME\t\t" << "NOME\t\t\t" << "USER ID\t\t" << "PASSWORD\n";
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
	cout << "\n";
	print_user(i);
}

// Funzione per stampare il menu di scelta delle operazioni
int edit_menu () {
	int choiceId;
	cout << "\nChe ID vuoi visualizzare? Inserisci il numero corrispondente\n";
	cout << "Inserisci 10 per uscire\n";
	cout << "Scelta: ";
	cin >> choiceId;
	return choiceId;
}

int main() {

	int menu;
	string exit;
	char modify;
	
	initialize_admin();	// Crea l'utente admin

	initialize_users();	// Inizializza gli ID, stampando tutti gli utenti

	while (exit != "exit") {
		
		menu = edit_menu();
		
		switch (menu) {
			
			case 0:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 1:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			
			case 2:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 3:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 4:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			
			case 5:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 6:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 7:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 8:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 9:
				print_header();
				print_user(menu);
				modify = print_modify();
				if (modify == 'S' || modify == 's')
					modify_user(menu);
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
				
			case 10:
				cout << "Hai scelto di uscire\n";
				exit = "exit";
				break;
				
			default:
				cout << "Scelta non valida\n";
				break;
				
		}
		
	}

	return 0;
}


/* ARRAY
Un array è un insieme di dati omogenei identificato da un nome.
Ogni elemento è identificato dal nome dell'array e da un indice,
che può variare da 0 a N-1 (N=numero di elementi dell'array)

Dichiarazione:	int x[10];
Modifica/Accesso: 	x[5] = 7;
					y = x[5];
					
Nel trattamento degli array, è importante l'utilizzo dei costrutti
iterativi (do/while, for)

Dichiarazione:
FOR (valore_iniziale; condizione_di_test; incremento) {
	istruzione;
}

Esempio:	for (int i=0; i<10; i++) {
				cout << x[i];
			}
*/

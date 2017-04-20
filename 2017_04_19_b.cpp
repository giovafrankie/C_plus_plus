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

// Variabili globali, visibili in tutte le funzioni
int N = 10;	// Numero di utenti gestibili
int EXIT;

/*
void print_users () {
	cout << "ID\t" << "COGNOME\t\t" << "NOME\t\t" << "USER ID\t\t" << "PASSWORD\n";
	for (int i=0; i<N; i++) {
		//cout << i << "\t" << user[i].surname << "\t\t" << user[i].name << "\t\t" << user[i].username << "\t\t" << user[i].password << "\n";
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
*/

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

// Funzione per stampare il menu di scelta delle operazioni
string edit_menu () {
	string choiceCalc;
	cout << "\nChe ID vuoi visualizzare? Inserisci il numero corrispondente\n";
	cout << "Inserisci EXIT per uscire\n";
	cout << "Scelta: ";
	cin >> choiceCalc;
	return choiceCalc;
}

int main() {

	utente user[N];
	string menu;
	string exit;
	char modify;

	user[0].id = 0;
	user[0].surname = "Amendolea";
	user[0].name = "Giovanfrancesco";
	user[0].username = "admin";
	user[0].password = "admin";

	
//	print_users();
	

	print_header();
	for (int i=0; i<N; i++) {
		user[i].id = i;
		cout << user[i].id << "\t" << user[i].surname << "\t" << user[i].name << "\t\t" << user[i].username << "\t\t" << user[i].password << "\n";
	}
	
	while (exit != "exit") {
	
		menu = edit_menu();
	
		switch (menu) {
			
			case "0":
				print_header();
				cout << user[0].id << "\t" << user[0].surname << "\t" << user[0].name << "\t\t" << user[0].username << "\t\t" << user[0].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[0].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[0].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[0].username;
					cout << "Inserisci il Password: ";
					cin >> user[0].password;
					print_header();
					cout << user[0].id << "\t" << user[0].surname << "\t" << user[0].name << "\t\t" << user[0].username << "\t\t" << user[0].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "1":
				print_header();
				cout << user[1].id << "\t" << user[1].surname << "\t" << user[1].name << "\t\t" << user[1].username << "\t\t" << user[1].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[1].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[1].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[1].username;
					cout << "Inserisci il Password: ";
					cin >> user[1].password;
					print_header();
					cout << "\n";
					cout << user[1].id << "\t" << user[1].surname << "\t" << user[1].name << "\t\t" << user[1].username << "\t\t" << user[1].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "2":
				print_header();
				cout << user[2].id << "\t" << user[2].surname << "\t" << user[2].name << "\t\t" << user[2].username << "\t\t" << user[2].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[2].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[2].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[2].username;
					cout << "Inserisci il Password: ";
					cin >> user[2].password;
					print_header();
					cout << "\n";
					cout << user[2].id << "\t" << user[2].surname << "\t" << user[2].name << "\t\t" << user[2].username << "\t\t" << user[2].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "3":
				print_header();
				cout << user[3].id << "\t" << user[3].surname << "\t" << user[3].name << "\t\t" << user[3].username << "\t\t" << user[3].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[3].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[3].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[3].username;
					cout << "Inserisci il Password: ";
					cin >> user[3].password;
					print_header();
					cout << "\n";
					cout << user[3].id << "\t" << user[3].surname << "\t" << user[3].name << "\t\t" << user[3].username << "\t\t" << user[3].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "4":
				print_header();
				cout << user[4].id << "\t" << user[4].surname << "\t" << user[4].name << "\t\t" << user[4].username << "\t\t" << user[4].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[4].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[4].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[4].username;
					cout << "Inserisci il Password: ";
					cin >> user[4].password;
					print_header();
					cout << "\n";
					cout << user[4].id << "\t" << user[4].surname << "\t" << user[4].name << "\t\t" << user[4].username << "\t\t" << user[4].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "5":
				print_header();
				cout << user[5].id << "\t" << user[5].surname << "\t" << user[5].name << "\t\t" << user[5].username << "\t\t" << user[5].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[5].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[5].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[5].username;
					cout << "Inserisci il Password: ";
					cin >> user[5].password;
					print_header();
					cout << "\n";
					cout << user[5].id << "\t" << user[5].surname << "\t" << user[5].name << "\t\t" << user[5].username << "\t\t" << user[5].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "6":
				print_header();
				cout << user[6].id << "\t" << user[6].surname << "\t" << user[6].name << "\t\t" << user[6].username << "\t\t" << user[6].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[6].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[6].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[6].username;
					cout << "Inserisci il Password: ";
					cin >> user[6].password;
					print_header();
					cout << "\n";
					cout << user[6].id << "\t" << user[6].surname << "\t" << user[6].name << "\t\t" << user[6].username << "\t\t" << user[6].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "7":
				print_header();
				cout << user[7].id << "\t" << user[7].surname << "\t" << user[7].name << "\t\t" << user[7].username << "\t\t" << user[7].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[7].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[7].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[7].username;
					cout << "Inserisci il Password: ";
					cin >> user[7].password;
					print_header();
					cout << "\n";
					cout << user[7].id << "\t" << user[7].surname << "\t" << user[7].name << "\t\t" << user[7].username << "\t\t" << user[7].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "8":
				print_header();
				cout << user[8].id << "\t" << user[8].surname << "\t" << user[8].name << "\t\t" << user[8].username << "\t\t" << user[8].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[8].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[8].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[8].username;
					cout << "Inserisci il Password: ";
					cin >> user[8].password;
					print_header();
					cout << "\n";
					cout << user[8].id << "\t" << user[8].surname << "\t" << user[8].name << "\t\t" << user[8].username << "\t\t" << user[8].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "9":
				print_header();
				cout << user[9].id << "\t" << user[9].surname << "\t" << user[9].name << "\t\t" << user[9].username << "\t\t" << user[9].password << "\n";
				modify = print_modify();
				if (modify == 'S' || modify == 's') {
					cout << "Inserisci il Cognome: ";
					cin >> user[9].surname;
					cout << "Inserisci il Nome: ";
					cin >> user[9].name;
					cout << "Inserisci il Nome Utente: ";
					cin >> user[9].username;
					cout << "Inserisci il Password: ";
					cin >> user[9].password;
					print_header();
					cout << "\n";
					cout << user[9].id << "\t" << user[9].surname << "\t" << user[9].name << "\t\t" << user[9].username << "\t\t" << user[9].password << "\n";
				}
				else if (modify == 'N' || modify == 'n')
					cout << "Hai scelto di non modificare il record\n";
				else
					cout << "Scelta non corretta";
				break;
			case "EXIT":
				cout << "Hai scelto di uscire\n";
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

#include <iostream>

using namespace std;

#define N 10

int x[10];

void valorizza () {
	for (int i=0; i<N; i++) {
		x[i]=i;
	}
}

void print_out () {
	for (int i=0; i<N; i++) {
		cout << x[i] << endl;
	}
}

void reverse () {
	for (int i=N-1; i>=0; i--) {
		cout << x[i] << endl;
	}
}


int main() {
	
	valorizza();
	
	print_out();
	
	reverse();
	
	return 0;
}

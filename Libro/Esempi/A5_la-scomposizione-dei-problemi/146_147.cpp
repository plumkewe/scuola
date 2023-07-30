#include <iostream>

using namespace std;

//  

void stampariga (int lunghezza, char carattere) {
	
	int i;
	for (i = 1; i <= lunghezza; i++) cout << carattere;
	
}

void stampaquadratto (int altezza) {
	
	int i, j;
	for (i = 1; i <= altezza; i++) {
		
		stampariga(altezza, '*');
		
		cout << '\n';
		
	}
	
}

void stampatriangolo (int altezza) {
	
	int i, j;
	
	for (i = 1; i <= altezza; i++) {
		
		stampariga(altezza - i, ' ');
		stampariga(2 * i - 1, '*');
		
		cout << '\n';
		
	}
	
	
}

int main() {
	setlocale(LC_ALL, "italian");
	
	char ch; int altezza;
	
	do {
		
		cout << "Digita " << '\n';
		cout << "q: per visualizzare un quadrato" << '\n';
		cout << "t: per visualizzare un triangolo" << '\n';
		cout << "f: per terminare il programma" << '\n';
		
		cin >> ch;
		
		if ((ch == 'q') || (ch == 't')) {
			
			cout << "Altezza ? ";
			cin >> altezza;
			
		}
		
		switch (ch) {
			
			case 'q' : stampaquadratto(altezza);
				break;
			case 't' : stampatriangolo(altezza);
				break;
		}
		
	} while (ch != 'f');
	
	
	return 0;
}
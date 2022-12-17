#include <iostream>

using namespace std;

//  

class Rettangolo {
	
private:
	int base, altezza;
	
public:
	Rettangolo () {
		
		base = 0;
		altezza = 0;
		
	}
	
	Rettangolo (int b, int a) {
		
		base = b;
		altezza = a;
		
	}
	
	int area () {
		
		return base * altezza;
		
	}
	
	int perimentro () {
		
		return (base + altezza) * 2;
		
	}
	
	
};

int main() {
	setlocale(LC_ALL, "italian");
	
	int a, b, area, perimetro;
	
	cout << "Inserisci la base: ";
	cin >> b;
	
	cout << "Inserisci l'altezza: ";
	cin >> a;
	
	Rettangolo rect = Rettangolo(b, a);
	area = rect.area();
	perimetro = rect.perimentro();
	
	cout << "Area: " << area << '\n';
	cout << "Perimetro: " << perimetro;
	
	
	return 0;
}
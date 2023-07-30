#include <iostream>

using namespace std;

//  

class cerchio {
	
public:
	
	double x, y , raggio;
	
	cerchio () {
		
		x = 0;
		y = 0;
		raggio = 1;
	
	}
	
	cerchio (double pX, double pY, double pRaggio) {
		
		x = pX;
		y = pY;
		raggio = pRaggio;
		
	}
	
	double circoferenza() {
		
		const double PIGRECO = 3.141593;
		return (2 * raggio * PIGRECO);
		
	}
	
	double area () {
		
		const double PIGRECO = 3.141593;
		return (raggio * raggio * PIGRECO);
		
	}
	
};

int main() {
	setlocale(LC_ALL, "italian");
	
	double x1, y1, x2, y2, raggio1, raggio2;
	
	cout << "Valore coordinata x: ";
	cin >> x1;
	
	cout << "Valore coordinata y: ";
	cin >> y1;
	
	cout << "Valore raggio: ";
	cin >> raggio1;
	
	
	
	cerchio c1 = cerchio (x1, y1, raggio1);
	
	cout << "Cerchio c1 circonferenza = " << '\n';
	cout << c1.circoferenza();
	
	cout << "Area = " << c1.area() << '\n';
	
	cout << "Valore coordinata x: ";
	cin >> x2;
	
	cout << "Valore coordinata y: ";
	cin >> y2;
	
	cout << "Valore raggio: ";
	cin >> raggio2;
	
	
	cerchio c2 = cerchio(x2, y2, raggio2);
	
	cout << "Cerchio c1 circonferenza = " << '\n';
	cout << c2.circoferenza();
	
	cout << "Area = " << c2.area() << '\n';
	
	
	return 0;
}
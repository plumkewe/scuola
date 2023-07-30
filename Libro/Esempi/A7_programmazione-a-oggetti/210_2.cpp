#include <iostream>

using namespace std;

//  


class Rettangolo {
	
private:
	int base, altezza;
	
public:
	int area () {
		
		return base * altezza;
		
	}
	
	int perimentro () {
		
		return (base + altezza) * 2;
		
	}
	
};
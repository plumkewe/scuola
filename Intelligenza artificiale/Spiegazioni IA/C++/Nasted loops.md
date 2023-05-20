# Nasted loops

I loop annidati (nested loops) in C++ sono loop che si trovano all'interno di altri loop. Il loop interno viene eseguito completamente per ogni iterazione del loop esterno. Ecco un esempio di come utilizzare i loop annidati per stampare una tabella di moltiplicazione in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i * j << " ";
		}
		cout << endl;
	}
	return 0;
}
```
Questo codice utilizza due loop `for` annidati per stampare una tabella di moltiplicazione 10x10. Il loop interno calcola il prodotto di `i` e `j` per ogni coppia di valori e lo stampa, mentre il loop esterno fa avanzare il valore di `i` e va a capo dopo ogni riga della tabella.
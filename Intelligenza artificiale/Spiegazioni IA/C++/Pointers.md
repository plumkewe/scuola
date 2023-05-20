# Pointers

I puntatori in C++ sono variabili che contengono l'indirizzo di memoria di un'altra variabile. Possono essere utilizzati per accedere e modificare il valore della variabile puntata tramite il suo indirizzo di memoria. Ecco un esempio di come utilizzare i puntatori in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
	int x = 5;
	int *p = &x;
	cout << *p << endl;
	*p = 10;
	cout << x << endl;
	return 0;
}
```

Questo codice dichiara una variabile intera `x` e la inizializza con il valore 5. Viene quindi dichiarato un puntatore `p` all'indirizzo di memoria di `x` utilizzando l'operatore `&`. Il valore di `x` viene quindi stampato tramite il puntatore `p` utilizzando l'operatore `*`. Infine, il valore di `x` viene modificato tramite il puntatore `p` e il nuovo valore viene stampato.
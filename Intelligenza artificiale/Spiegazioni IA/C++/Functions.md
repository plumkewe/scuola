# Functions

Le funzioni in C++ sono blocchi di codice che eseguono un'azione specifica. Possono accettare parametri di input e restituire un valore di output. Le funzioni possono essere chiamate da altre parti del codice e possono essere definite dall'utente o fornite dalla libreria standard del C++. Ecco un esempio di come definire e chiamare una funzione in C++:

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
return a + b;
}

int main() {
int result = add(3, 4);
cout << result << endl;
return 0;
}
```

Questo codice definisce una funzione `add` che accetta due parametri interi e restituisce la loro somma. La funzione viene quindi chiamata nel `main` per calcolare la somma di 3 e 4 e il risultato viene stampato.
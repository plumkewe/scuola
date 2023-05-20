# Arrays

Gli array in C++ sono una collezione di elementi dello stesso tipo, memorizzati in posizioni di memoria contigue. Gli elementi possono essere acceduti tramite un indice intero che rappresenta la loro posizione nell'array. Ecco un esempio di come dichiarare e inizializzare un array di interi in C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}
```

Questo codice dichiara un array di cinque interi e lo inizializza con i valori da 1 a 5. Il ciclo `for` stampa tutti gli elementi dell'array.
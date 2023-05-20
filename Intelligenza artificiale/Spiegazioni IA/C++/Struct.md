# Struct

Le struct in C++ sono tipi di dati composti che possono contenere variabili di diversi tipi. Possono essere utilizzate per raggruppare insieme dati correlati e per creare tipi di dati più complessi. Ecco un esempio di come definire e utilizzare una struct in C++:

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Student {
string name;
int age;
double gpa;
};

int main() {
Student s1 = {"Alice", 20, 3.9};
cout << s1.name << " " << s1.age << " " << s1.gpa << endl;
return 0;
}
```

Questo codice definisce una struct `Student` che contiene tre campi: `name`, `age` e `gpa`. Viene quindi dichiarata una variabile `s1` di tipo `Student` e inizializzata con i valori specificati. Infine, i valori dei campi della struct vengono stampati.
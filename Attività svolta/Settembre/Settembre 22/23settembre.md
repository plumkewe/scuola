# :closed_book:
# 22 settembre 2022

###### Esercizio:

Realizzare un programma in linguaggio C++ che calcoli il costo della benzina necessaria per arrivare a scuola. Il programma deve prendere in input:
- ill costo della benzina al litro
- quanti km si può percorrere con un litro di benzina
- i km che si deve percorrere per arrivare a scuola
calcolare il costo e poi visualizzare il risultato come output.


****** Svolgimento:

```cpp
#include <iostream> //  includiamo un HEADER di iosteam che sarebbe input e output standard (cin >> e cout <<)

using namespace std; //  è una colezione con delle funzionalalita basilari che servono per scrivere i programmi

//  Primo esercizio

int main() {
setlocale(LC_ALL, "italian"); //  per pottee utilzizare gli accenti

double oCostoscuola, iUnlitro, iKmperscuola, iCostobenzina; //  dichiariazione delle variabili di tipo double

cout << "Quanto costa la benzina?"
<< "\n- la benzina costa €"; //  '\n' sta per newline, "vai da capo"
cin >> iCostobenzina;

cout << "\nQuanti km puoi percorrere con un litro di benzina"
<< "\n- con un litro di benzina ne posso percorrere: ";
cin >> iUnlitro;

cout << "\nQuanti km percorri mentre vai a scuola? " 
<< "\n- mentre vado a scuola percorro: ";
cin >> iKmperscuola; 


oCostoscuola = iKmperscuola/iUnlitro * iCostobenzina; //  calcolo per comodita è stato messo fuori, ma nulla ti vieta di metterlo diretamente nel cout, ma è sempre meglio evitarlo.

cout << "\nSpendi €" << oCostoscuola << " per andare a scuola";


return 0; //  fine del programma restituisci 0 (nulla)
}
```
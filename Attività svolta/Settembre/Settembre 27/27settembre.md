# :closed_book: <br /> 27 settembre 2022

###### Esercizio 1:

Realizzare un programma in linguaggio C++ che calcoli l'ammontare delle tasse relative ad una moto. Il programma deve prendere in input la cilindrata della moto, il numero di anni da quando è stata immatricolata e calcoli le tasse da pagare secondo il seguente criterio: le tasse sono il 20 del prodotto tra la cilindrata della moto ed il numero di anni da quando è stata immatricolata. Visualizzare come output il risultato

###### Svolgimento:

`! questo codice è sbagliato (il calcolo)`


```cpp
#include <iostream>

using namespace std;


int main() {

int iAnniImmatricolata, iCilindrata, oCalcolo, oAnni; //  dichiarazione delle variabili di tipo intero


const double cTASSA = 0.20; //  costante di tipo double che sarebbe il 20%

cout << "Salve, questo programma è in grado di calcolare le tasse da pagare per una moto\n";

cout << "\nInnanzitutto inserisci la cilindrata della tua moto: cc"; 
cin >> iCilindrata;

cout << "\nInserisci la data della immatricolata: ";
cin >> iAnniImmatricolata;

// non so se il calcolo è giusto (me dal futuro: non lo è)

oCalcolo = ((2022 - iAnniImmatricolata) * iCilindrata) * cTASSA; //  calcolo fuori per comodita 

cout << "\nbeh dovrai pagare €" << oCalcolo ;


return 0;
}
```



###### Esercizio 2:

Realizzare un programma in linguaggio C++ che calcoli il costo di una vacanza in base al numero di giorni in hotel, il numero di pasti e la tassa di soggiorno. Il programma deve  prendere in input:

- il numero di giorni di durata della vacanza
- il costo dell'hotel al giorno
- il numero di pasti che si svolgeranno in hotel
- il costo di ogni singolo pasto
- il costo della tassa d soggiorno che si pagherà una sola volta per tutta la vacanza
Realizzare il programma per calcolare il costo finale della vacanza visualizzando il risultato come output

###### Svolgimento:


```cpp
#include <iostream>
#include <iomanip> //  per manipulare output (R45-50)

using namespace std;

//  esercizio vacanza

int main() {
setlocale(LC_ALL, "italian"); //  per pottee utilzizare gli accenti


short int iDurata, iNumeroPasti;
double iTassaDiSoggiorno, iCostoHotel, iCostoXpasto, oCalcoloGiorni, oCalcoloPasti, oTotale; //  dichiarazione di diverse variabili di tipo double 


cout << "==== Costo delle Vacanze ====\n";

cout << "\nQuanti giorni durerà la tua prossima vacanza ?\n"
<< "inserisci il numero dei giorni: ";
cin >> iDurata;

cout << "\nOkay, e quanto pagherai per un giorno del Hotel ?\n" 
<< "inserisci il costo di un singolo giorno €";
cin >> iCostoHotel;

cout << "\nBene, bene... e quanti pasti si svolgeranno ?"
<< "\n" << "inserisci il numero dei pasti: ";
cin >> iNumeroPasti;

cout << "\ne quanto costerà un singolo pasto ?"
<< "\ninserisci il costo del singolo pasto €";
cin >> iCostoXpasto;


cout << "\n...\n" 
<< "Oh WoW, nel Hotel che stai per visitare ce una tassa di soggiorno da pagare..."
<< "\ninserisci il costo della tassa €"; 
cin >> iTassaDiSoggiorno;

oCalcoloGiorni = iDurata * iCostoHotel; //  calcoli fuori per una questione di comodita
oCalcoloPasti = iNumeroPasti * iCostoXpasto;
oTotale = oCalcoloPasti + oCalcoloGiorni + iTassaDiSoggiorno;


cout << setprecision(2) << fixed;

cout << "\n=====[Fattura]=====";
cout << "\nGiorni:" << setw(8) << "€" << oCalcoloGiorni; //  '\n' sta per newline, setw in poche parole sposta output di un tot caratteri vuoti (sono indicati tra le parantesi)
cout << "\nPasti:" << setw(9) << "€" << oCalcoloPasti;
cout << "\nTassa:" << setw(9) << "€" << iTassaDiSoggiorno;
cout << "\nTOTALE:" << setw(8) << "€" << oTotale;
cout << "\n===================";


return 0;

}
```
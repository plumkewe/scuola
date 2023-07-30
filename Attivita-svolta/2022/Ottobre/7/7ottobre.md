# :closed_book: <br /> 7 ottobre 2022

###### Esercizio 1:

Scrivi un algoritmo e relativo codice C++ che calcoli la somma spesa da un cliente tenendo conto delle seguenti condizioni: <br />
a. per spese inferiori a euro 50, sconto 10%; <br />
b. per spese inferiori a euro 100, sconto 20%; <br />
c. per spese superiori a euro 100, sconto 30%.


###### Svolgimento:

```cpp
#include <iostream>
#include <string> //  per stampare lo stesso testo
#include <iomanip> //  per manipolare cout di double (fare scrivere soltanto i decimi)

using namespace std;


int main() {
setlocale(LC_ALL, "italian"); //  per pottee utilzizare gli accenti

double iSommaSpesa;


cout << "Benvenuto nella bottega di Nook, in occasione della mia assenza applichiamo uno sconto speciale... maggiore è il tuo totale, maggiore è lo sconto! Si-si...\n\n"
<< "inserisci il totale della tua spesa €";
cin >> iSommaSpesa;

double cSCONTO50 = iSommaSpesa - iSommaSpesa * 0.10; //  calcoli fuori per comodita
double cSCONTO99 = iSommaSpesa - iSommaSpesa * 0.20;
double cSCONTO101 = iSommaSpesa - iSommaSpesa * 0.30;

const string oScontrino = "Facendo tutti i calcoli... e applicando lo sconto... dovrai pagare €"; //  costante di tipo string, per non scrivere lo stesso testo più e più volte... 

cout << setprecision(2) << fixed; //  non fa nient'altro che limitare il double ai decimi (2)

if (iSommaSpesa <= 0) { //  se il totale della spesa sarà uguale o minore (numero negativo) di 0 verrà stampato un avviso
cout << "\n[!] uh... a quanto pare non hai acquistato niente, riavvia il programma e riprova";

return 0; //  per fermare il programma
}

else {
if (iSommaSpesa > 100) {cout << "\n" << oScontrino << cSCONTO101;}

else {
if (iSommaSpesa >= 50 && iSommaSpesa <= 100) {cout << "\n" << oScontrino << cSCONTO99;} //  un range && sta per and (e) letteralmente vorrebbe dire se limporto della spessa è maggiore o uguale a 50 ed è minore o uguale a 100

else {cout << "\n" << oScontrino << cSCONTO50;}
}
}

cout << "\n\n" << "Grazie per aver visitato la mia bottega, spero che i tuoi articoli ti piacciono... alla prossima";

return 0;
}
```



###### Esercizio 2:

Date le misure dei lati di un rettangolo a, b fornite da tastiera, scrivi un programma che calcoli il perimetro, l'area o la diagonale del rettangolo secondo la richiesta dell'utente (Supponi che l'utente possa inserire come scelta: 1 = perimetro, 2 = area o 3 = diagonale)


###### Svolgimento:

```cpp
#include <iostream>
#include <cmath> //  per la radice quadrata

using namespace std;

//  rettangolo area, perimetro e diagonale (switch)
//  versione 0.1, semplice. gli errori non sono previsti a parte il default.

int main() {
setlocale(LC_ALL, "italian"); //  serve per poter utilizzare gli accenti

double iLato1, iLato2; //  dichiariazione delle due variabili per due lati (base e altezza)

short int iSelezione; //  una variabile di short int per la condizione nel switch, short int non è differente da int occupa meno bit e ha anche un limito più grande (-32768 fino a 32767)

cout << "Sarò in grado di calcolare l'area, il perimetro o la diagonale del tuo rettangolo... ma prima di tutto inserisci i due lati\n\n" 
<< "inserisci il primo lato: "; //  breve spiegazione di ciò che sarà in grado di fare questo programmino e la richiesta di inserire il primo lato
cin >> iLato1;

cout << "inserisci il tuo secondo lato: ";
cin >> iLato2; //  secondo lato


double oArea = iLato1 * iLato2,
oPerimetro = (iLato1 + iLato2) * 2.0,
oDiagonale = (iLato1 * iLato1 + iLato2 * iLato2); //  tutte le formule, lo si fa solitamente per la comodita e legibilita, ma nulla vieta di inserirle diretamente le cout 


cout << "\n1. [Perimetro]  2. [Area]  3. [Diagonale]\n"
<< "Digita il numero corrispondente al calcolo: ";
cin >> iSelezione; //  selezione 


switch (iSelezione) {

case 1:
cout << "\nIl perimetro del tuo rettangolo è: " << oPerimetro;
break;
case 2:
cout << "\nL'area del tuo rettangolo è: " << oArea;
break;
case 3:
cout << "\nLa diagonale del tuo rettangolo è: " << sqrt(oDiagonale); //  sqrt sta per square root ovvero radice quadrata.
break; //  parola chiave break serve per uscire dallo switch e per evitare esecuzione dei tutti case ! che vanno dal baso (3, 2 e 1)

default:
cout << "\nhmm... hai solo 3 opzioni a disposizione... riavvia il programma e riprova"; //  risposta che verrà mostrata nel caso in cui il numero inserito non è compreso nei CASE (in questo caso 1, 2 e 3) volendo lo si può mettere anche all'inzio (in quel caso bisognerà mettere anche un break proprio come nei CASE)

}

return 0;
}
```



###### Esercizio 3:

Scrivi un algoritmo e relativo codice C++ che, dati in input due numeri interi, visualizzi, a scelta dell'utente, il risultato di una delle quattro operazioni fondamentali (addizione, sottrazione, moltiplicazione, divisione)


###### Svolgimento:

```cpp
#include <iostream>

using namespace std;


int main() 
{

long int iNumero1, iNumero2;
short int iSelezione;


cout << "Mini calcolatrice ti da il benvenuto, sarò in grado di applicare una delle quattro operazioni ai tuoi due numeri interi inseriti !tip, puoi usare anche numeri grandi\n\n"
<< "inserisci il tuo primo numero: ";
cin >> iNumero1;

cout << "inserisci il tuo secondo numero: ";
cin >> iNumero2;


cout << "\n1. [Addizione]  2. [Sottrazione]  3. [Moltiplicazione]  4. [Divisione]"
<< "\nDigita il numero corrispondente alla operazione: ";
cin >> iSelezione;


switch (iSelezione) { //  switch che come la condizione ha "iSelezione" che di seguito fa scorerre tra i case

case 1:
cout << "\n" << iNumero1 << " + " << iNumero2 << " = " << iNumero1 + iNumero2; 
break;
case 2:
cout << "\n" << iNumero1 << " - " << iNumero2 << " = " << iNumero1 - iNumero2;
break;
case 3:
cout << "\n" << iNumero1 << " * " << iNumero2 << " = " << iNumero1 * iNumero2;
break;
case 4:
cout << "\n" << iNumero1 << " : " << iNumero2 << " = " << iNumero1 / iNumero2; 
break;

default: cout << "\nhmm... hai solo 4 operazioni a disposizione... riavvia il programma e riprova"; //  in case l'utente inserisca un numero (operazione) non previsto nei case
}


return 0;
}
```
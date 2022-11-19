# :closed_book: <br /> 14 ottobre 2022

###### Esercizio 1:

Scrivi un alaoritmo e relativo codice C++ che, dato in input il numero corrispondente al mese del anno, visualizzi il numero di giorni di cui l'anno è composto

###### Svolgimento:


```cpp
#include <iostream>
#include <string> //  per la costante di tipo string

using namespace std;


int main() {
setlocale(LC_ALL, "italian"); //  per poter usare gli accenti

short int iMese; //  dichiarazione della variabile per la condizione nel switch

const string oMESEHA = "questo mese ha ";

cout << "Questo programmino sarà in grado di dirti quanti giorni ha uno dei 12 mesi\n" //  spiegazione e richiesta
<< "inserisci il mese, es 12 = dicembre: ";
cin >> iMese;

//	gennaio 1, marzo3, maggio5, luglio7, agosto8, ottobre10, dicembre12 (31)
//	novembre11, aprile4, giugno6, settembre9 (30)
//	febbraio2 (28)

switch (iMese) { //  switch che come case ha i "mesi"
case 11: case 4: case 6: case 9: cout << "\n" << oMESEHA << 30 << "giorni";
break;
case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << "\n" << oMESEHA << 31 << "giorni"; //  tutti i mesi nei cui i giorni sono pari a 31
break;
case 2: cout << "\n" << oMESEHA << 28 << "giorni";
break;

default: cout << "[!] l'anno ha soltanto 12 mesi, riavvia il programma"; //  errore
}

return 0;
}
```



###### Esercizio 2:

Un negozio decide di applicare uno sconto del 10% su tutte le borse e del 15% sugli accessori. Inoltre, sulle borse in pelle lo sconto è del 20% e sugli accessori in stoffa il 25%. Realizzare un algoritmo che, introdotto il tipo (borsa o accessorio), la finitura (pelle o stoffa) e il prezzo da listino, determini il prezzo scontato.

###### Svolgimento:

```cpp
#include <iostream>
#include <string> //  per la costante di tipo stringa

using namespace std;

//  è un codice molto chiaro quindi non ha bisogni di spigazioni 

int main() {
setlocale(LC_ALL, "italian");

short int oSELEZIONE;

double iCOSTO;

const string oDIGITA = "Digita il numero corrispondente alla scelta: "; //  costante di tipo string per non riscrivere tante volte la stessa cosa


cout  << "1. [Borse]  2. [Accessori]\n" << oDIGITA;
cin >> oSELEZIONE;



if (oSELEZIONE <= 0 || oSELEZIONE > 2) {
cout << "mi dispiace, sono disponibili soltanto due tipologie dei oggetti";
}
else {
if (oSELEZIONE == 1) {

cout << "\nQuanto ti è costato? €";
cin >> iCOSTO;

if (iCOSTO <= 0) {cout << "non regaliamo le borse...";
return 0;
}

cout << "\n1. [Borsa generica]  2. [Borsa in pelle]\n" << oDIGITA ;
cin >> oSELEZIONE;

float oSCONTO10 = iCOSTO - (iCOSTO * 0.10);
float oSCONTO20 = iCOSTO - (iCOSTO * 0.20);

switch (oSELEZIONE) {
case 1: cout << "\nWoW una borsa particolare... dovrai pagare €" << oSCONTO10; 
break;
case 2: cout << "\nQuesta borsa piacerà anche a CF, dovrai pagare soltanto €" << oSCONTO20;
break;

default: cout << "\n[!] Non abbiamo le borse liquide, riavvia il programma e riprova";
}
}

else {
if (oSELEZIONE == 2) {

cout << "\nQuanto ti è costato? €";
cin >> iCOSTO;

if (iCOSTO <= 0) {cout << "non regaliamo accessori gratis..."; 
return 0;
}

cout << "1. [Accesorio generico]  2. [Acceosorio in stoffa]\n" << oDIGITA ;
cin >> oSELEZIONE;

float oSCONTO25 = iCOSTO - (iCOSTO * 0.25); //  formule fuori per la comodita 
float oSCONTO15 = iCOSTO - (iCOSTO * 0.15);

switch (oSELEZIONE) {
case 1: cout << "\nBella scelta... dovrai pagare €" << oSCONTO15;
break;
case 2: cout << "\nOh bene, hai deciso di acquistare un accesero in stoffa... dovrai pagare €" << oSCONTO25;
break;

default: cout << "\nI nostri accessori non sono F-A-K-E riavvia il programma e riprova";
}
}
}
}

return 0;
}
```

`! c'eranno altri esercizi ma li avovi già fatto e postato (quello del rettangolo e calcolatrice)`
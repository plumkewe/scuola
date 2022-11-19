# :notebook_with_decorative_cover: <br /> Switch case

###### In questo articolo:

- che cosa è
- perché e quando usarlo
- parole chiavi
- esempio

#switch #default #break #case

### Lo switch case,
“lo switch case è una struttura selettiva che in espressione accetta soltanto le variabili di due tipi lo Char (carattere) e Int (intero) e in base ad esse effettua un controllo, dopodiché esegue i comandi contenuti al interno dei case

dunque perché usarlo e quando,

1. usiamo lo switch quando lavoriamo con numeri interi o caratteri.
2. lo si usa per risparmiare il tempo, al posto di utilizzare molti if e else si può usare comodamente lo switch. 
3. lo si usa quando abbiamo a che fare con delle scelte (es. menu).



```cpp
#include <iostream>

using namespace std;

//  struttura dello swith case


int main () {

	switch (condizione) {
		case 1:
			// codice
		case 2:
			// codice
	}

	return 0;
}
```

questa è la struttura dello switch, come potete vedere dopo il case abbiamo il segno di interpunzione (:) e non punto e virgola (;).

- facciamo finta che io voglio prendere in input un numero intero e in output in base al numero inserito faccio stampare un messaggio testuale differente.

```cpp
int main () {

	int x;
	
	cin >> x;
	
	switch (x) {
	
		case 1:
			cout << "uno";
		case 2:
			cout << "due";
	}

return 0;

```

###### output:
```cpp
1
unodue
```


bene abbiamo compilato, vediamo se funziona, inseriamo il numero 1 e vediamo che non scrive soltanto "uno" ma scrive anche tutto ciò che è al di sotto della risposta che desideravamo ottenere, come risolverlo?

```cpp
int main () {

	int x;
	
	cin >> x;
	
	switch (x) {
	
		case 1:
			cout << "uno";
			break;
		case 2:
			cout << "due";
			break;
	}

return 0;
```


### Break <br />
per risolvere bisogna mettere una parola chiave, il Break. Break serve per uscire dallo switch.  per comodità lo si mette sotto al case, ma nulla vi vieta di metterlo un po’ dove vi pare, basta che lo mettiate dopo il codice che volete eseguire. 

###### output:
```cpp
1
uno
```

riproviamo, facciamo partire il nostro programmino e inseriamo nuovamente il numero uno e vediamo il risultato. 

oh bene come potete vedere tutto funziona alla perfezione, ma cosa succederà se inserisco un numero che va oltre i casi previsti? vediamo… 

###### output:
```cpp
3
```


### Default
beh vediamo che non succederà niente e come faccio a prevenire e dire al utente che ha inserito un numero che va oltre i casi previsti, semplicemente bisogna utilizzare un’altra parola chiave “default” questa a differenza dei break va messa soltanto una volta. e verrà eseguita nel caso in cui nel input verrà messo un numero che va oltre i casi compressi. 

```cpp
int main () {

	int x;
	
	cin >> x;
	
	switch (x) {
	
	default: cout << "no";
	break;
	
		case 1:
			cout << "uno";
			break;
		case 2:
			cout << "due";
			break;
	}

return 0;
```

default lo possiamo mettere sia al inizio *per evidenziarlo* sia all fine, una cosa importante è se volete metterlo al inizio non scordatevi di mettere anche il break *come dopo i casi.* 


ecco possiamo dire che il nostro switch case è completo, questo non vuol dire che dev’essere sempre così semplice, potete inserire in ogni case tante altre azioni da eseguire, potete unire i case per ottenere lo stesso input ad esempio come qui e tanto altro.

```cpp
getline(cin, g);

if (g == "didudu") {
cout << "fufufu";
}
else {
cout << "okay, scegli ";

cin >> f;
switch (f) {
case 1: case 2: case 3: cout << "gogogo";
break;
default: g = "jojojo" ;

if (g == "kukuku") {
cout << "\nwewewe";
}
}
}

```

`! ci possono essere dei errori di ortografia`

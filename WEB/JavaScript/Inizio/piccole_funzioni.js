function pos_neg (numero) {
	
	if (numero >= 0) {
		
		return numero;
	
	} else {
		
		return -numero;
		
	}
	
	
}


function fattoriale_while (numero) {
	
	let prodotto = 1;
	
	
	while (numero > 1) {
		
		prodotto *= numero;
		
		
		numero--;
		
	}
	
	return prodotto;
	
	
}


function fattoriale_for (numero) {
	
	let i, prodotto = 1;
	
	
	for (i = 2; i <= numero; i++)
		
		prodotto *= i;
	
	
	return prodotto;
	
	
}


function somma (array) {
	
	let somma = 0;
	
	for (let x of array) {
		
		somma += x;
		
	}
	
	return somma;
	
	
}

let primes = [2, 3, 5, 7, 10, 10.1, 100.40, 0.40];

console.log(fattoriale_while(4));
console.log(fattoriale_for(10));
console.log(pos_neg(-10));
console.log(somma(primes));
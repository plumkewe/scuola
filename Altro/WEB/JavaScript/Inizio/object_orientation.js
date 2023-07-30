class Point {
	
	constructor (x, y) {
		
		this.x = x;
		this.y = y;
		
	}
	
	
	distance () {
		
		return Math.sqrt ((this.x * this.x) + (this.y * this.y)); //  ho aggiunto () in più per comodita, in realta nel libro è scritto in un modo un pò più diverso. ma la salsa è sempre quella.
		
	}
	
	
}

let p = new Point(1, 1);


console.log (p.distance())
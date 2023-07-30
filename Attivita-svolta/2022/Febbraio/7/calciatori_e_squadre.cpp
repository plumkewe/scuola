#include <iostream>
#include <string>

using namespace std;

//  

class Giocatore
{
private:
	
	string squadra;    int autogoal;
	string cognome;    int     goal;
	string   ruolo;
	string    nome;	   int    punti;
	
	
public:
	
	Giocatore (string n, string c, string r, string s, int g, int ag)
	: nome(n), cognome(c), ruolo(r), squadra(s), goal(g), autogoal(ag), punti(goal * 3 + autogoal * (-3)) {}

//	int Punteggio() { return goal * 3 + autogoal * (-3); };  farei void anche qui
//	void Punteggio () { cout << "Punti: " << goal * 3 + autogoal * (-3) << endl; };
	
	void Punteggio () { cout << "Punti: " << punti << endl; }; //  personalmente non sono un grande amante di fare i calcoli nel cout
	void Identicativo () { cout << "Giocatore: " << nome << " " << cognome << endl; };
	
};


int main()
{
	setlocale(LC_ALL, "italian");
	
	Giocatore Antonino ("Antonino", "Il grande", "Attacante", "CC Milano", 21, 0);
	
	Antonino.Identicativo();
	Antonino.Punteggio();
	
	
	return 0;
}
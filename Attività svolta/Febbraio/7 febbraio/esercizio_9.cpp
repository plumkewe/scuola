#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//  non ho capito il concetto di accelerazione, avevo pensato di fare una sorta di
//  techimetro ma vabbe

class Motocicletta
{
private:
	
	int capacita_max;     bool stato_motore;    string colore;
	int   cilindrata;     bool stato_frecia;    string  marca;
	int    serbatoio;     bool   stato_luci;
	int       marcia;
	
	
public:
	
	Motocicletta (string marca, string colore, int cilindrata);

	int getSerbatoio(); //  nella es di macchina era double bho per me non aveva senso, 8bytes vs 4 i mean...
	int setSerbatoio(int litri);
	
	void saliMarcia();
	void scendiMarica();
	
	void accendiFrecia();
	void accendiLuci();
	
	void frena();
	void avviaMotore();

	void mostraStato();	
};

int Motocicletta::setSerbatoio (int litri)
{
	if ((litri + serbatoio) <= (capacita_max)) { serbatoio += litri; return 0; }
	else return -1;
}

Motocicletta::Motocicletta (string u_marca, string u_colore, int u_cilindrata)
{
	marca         = u_marca;        stato_frecia  = false;   marcia        = 0;
	colore        = u_colore;       stato_luci    = false;   serbatoio     = 0;
	cilindrata    = u_cilindrata;   stato_motore  = false;   capacita_max  = 45;
}

int Motocicletta::getSerbatoio () { return serbatoio; }

void Motocicletta::saliMarcia ()
{
	if (stato_motore) { if (marcia < 8) marcia ++; }
	else cout << "Motore spento, cambio non attivo" << endl;	
}

void Motocicletta::scendiMarica () 
{	
	if (stato_motore) { if (marcia > 1) marcia --; }
	else cout << "Motore spento, cambio non attivo" << endl;
}

void Motocicletta::avviaMotore ()
{
	if (serbatoio != 0) stato_motore = true;
	else cout << "Impossibile avviare, serbatoio vuoto" << endl;
}

void Motocicletta::accendiFrecia ()
{
	if (stato_frecia) { cout << "La freccia è già accesa" << endl; }
	else stato_frecia = true;
}
	
void Motocicletta::accendiLuci ()
{
	if (stato_luci) { cout << "Le luci sono già accese" << endl; }
	else stato_luci = true;
}
	
void Motocicletta::frena ()
{
	if (marcia == 0) { cout << "Sei già fermo" << endl; }
	else marcia = 0;
}

void Motocicletta::mostraStato() 
{
	cout << setw(17) << left << "Motocicletta: " << marca << " " << cilindrata << "cc " << colore << endl;	
	cout << setw(17) << left << "Serbatoio: " << serbatoio << " litri di carburante" << endl;
	cout << setw(17) << left << "Marcia: " << marcia << endl;
	
	cout << endl;
	
	if (stato_motore) cout << "Motore è accesso" << endl;
	else cout << "Motore spento" << endl;
	
	if (stato_frecia) { cout << "La freccia è accesa" << endl; }
	else cout << "Freccia è spenta" << endl;
	
	if (stato_luci) { cout << "Le luci sono accese" << endl; }
	else cout << "Fe luci sono spenta" << endl;
}
	


int main()
{
	setlocale(LC_ALL, "italian");
	
	Motocicletta la_mia_moto ( "audi", "nero", 300 );
	
	
	cout << "Chiamo la funzione membro MostraStato()" << endl;
	la_mia_moto.mostraStato();
	
	cout << "\v================================" << endl;
	cout << "\tChiamo la funzione membro setSerbatoio()" << endl;
	la_mia_moto.setSerbatoio(5);
	
	cout << "\t================================" << endl;
	cout << "\tAvvio il motore" << endl;
	la_mia_moto.avviaMotore();
	
	cout << "\t================================" << endl;
	cout << "\tChiamo la funzione membro saliMarcia()" << endl;
	la_mia_moto.saliMarcia();
	
	cout << "\t================================" << endl;
	cout << "\tChiamo la funzione membro accendiLuci()" << endl;
	la_mia_moto.accendiLuci();
	
	cout << "\n================================" << endl;
	cout << "Chiamo la funzione membro accendiFrecia()" << endl;
	la_mia_moto.accendiFrecia();
	
	cout << "\n================================" << endl;
	cout << "Chiamo la funzione membro mostraStato()" << endl;
	la_mia_moto.mostraStato();
	
	
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

//  questo è come lo farei io, ovvio in questo caso sarebbe più """comodo""" rendere gli
//  attributi public, ma per me non è una cosa giusta, data DEVE essere protteta e modificata
//  solo attraverso i metodi

class DVD
{
private:
	
	float prezzo;
	int   spazio;
	int    tempo;
	
	string contenuto;
	
	
public:
	
	DVD() : prezzo(0.0f), spazio(0.0f), tempo(0), contenuto("NULL") { cout << "=====libreria=====" << endl; }
//  nel mio libro ma anche sul web è consigliato fare gli costr in questo modo anche se funzionano se fatti in modo diverso
	void setPrezzo (float costo) { prezzo = costo; };
	void setSpazio (int megabytes) { spazio = megabytes; };
	void setTempo (int minuti) { tempo = minuti; };
	void setContenuto (string argomento) { contenuto = argomento; };
	
	void getPrezzo () { cout << "Il prezzo è di: " << prezzo << "€" << endl; };
	void getSpazio () { cout << "Lo spazio che occupa è di: " << spazio << "MB" << endl; };
	void getTempo () { cout << "La durata del è di: " << tempo << " minuti" << endl; };
	void getContenuto () { cout << "Il contenuto parla di: " << contenuto << endl; };
	
	void ShowAll();  //  la potrei mettere anche qui ma dato che è una funzine inline opterei sempre
					 //  di metterle fuori, ma anche per il motivo della legibilità (affinche non si trati di fare a + b)

	~DVD() { cout << "=================="; };   //  ho pensato che è un idea abbastanza carino di usare
};											    //  costr e dist per stampare un "hey" e un "fine"

void DVD::ShowAll ()
{
	cout << "Il prezzo è di: " << prezzo << "€" << endl;
	cout << "Lo spazio che occupa è di: " << spazio << "MB" << endl;
	cout << "La durata del è di: " << tempo << " minuti" << endl;
	cout << "Il contenuto parla di: " << contenuto << endl;
}


int main()
{
	setlocale(LC_ALL, "italian");
	
	DVD film_preferito;
	
	film_preferito.setContenuto("Animali nel loro habitat naturale");
	film_preferito.setPrezzo(10.99);
	film_preferito.setSpazio(1208);
	film_preferito.setTempo(120);
	
	film_preferito.ShowAll();
	
	
	return 0;
}
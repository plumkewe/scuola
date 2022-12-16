#include <iostream>

using namespace std;

//  

void caricamento (float [][5], int, int);
void stampa (float [][5], int, int);

int main() {
	setlocale(LC_ALL, "italian");
	
	
	int rig = 5, col = 5;
	float mat2[5][5], mat[5][5];
	int i, j;
	
	cout << "Inserisci elementi della matrice: " << '\n';

	caricamento(mat, rig, col);
	
	for (i = 0; i < rig; ++i)
		for (j = 0; j < col; ++j)
			mat2[i][j] = mat[j][i];
		
	cout << "Matrice originale: " << '\n';
	stampa (mat, rig, col);
	
	cout << "Matrice trasportata: " << '\n';
	stampa (mat2, rig, col);
	
	
	return 0;
}

void stampa (float mat[][5], int n, int m) {
	
	int i, j;
	
	for (i = 0; i < n; ++i) {
		
		for (j = 0; j < m; ++j)
			cout << '\t' << mat[i][j];
			cout << '\n';
			
	}
	
}

void caricamento (float mat[][5], int n, int m) {
	
	int i, j;
	
	for (i = 0; i < n; ++i)
		for (j = 0; j < m; ++j) {
			
			cout << "Inserisci elemento (" << i << ", " << j << ")";
			cin >> mat[i][j];
			
		}
	
	
}
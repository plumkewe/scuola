#include <iostream>

using namespace std;

//  

void stampa (int [][10], int, int);

int main() {
	setlocale(LC_ALL, "italian");
	
	int rig = 10, col = 10;
	int mat [10][10];
	
	int i, j;
	
	for (i = 0; i < rig; ++i) {
	
		for (j = 0; j < col; ++j)
			mat[i][j] = (i + 1) * (j + 1);
	}
	
	cout << "Matrice: " << rig << " x " << col << '\n';
	stampa (mat, rig, col);
	
	
	return 0;
}

void stampa (int mat[][10], int n, int m) {
	
	int i, j;
	
	for (i = 0; i < n; ++i) {
		
		for (j = 0; j < m; ++j)
			cout << mat[i][j] << "\t";
		
		cout << '\n';
	}
	
	
}
#include <iostream>
using namespace std;
#define MAX 10;
int main(){
	
	// SINTAXE
	int matriz_exemplo[3][5];
	int matriz[3][2] = { {1, 0} , {5 , 2}  , {7 ,4 } };
	int L=3;
	int c=2;
	
	// 0D
	cout << matriz[2][0] << endl;
	matriz[1][1] = 12;
	
	// IMPRIMIR TODA A MATRIZ  2D
	for(int i=0; i<L; i++) {
		for(int j=0; j<c; j++) 
			cout << matriz[i][j] << " ";
		cout << endl;
	}
	
	// IMPRIMIR A 2A LINHA e calcular a soma
	cout << endl;
	int soma = 0;
	for (int i=0; i<c; i++) {
		cout << matriz[1][i] << " ";
		soma += matriz[1][i];
	}
	cout << endl << "soma=" << soma;
	
	int m[3][4] = { {3, -2, 7, 5}, {11, 4, 0, -1}, {-5, 6, 8, -4}};
	L=3;
	c=4;
	
	// Calcular o maximo da 3a coluna
	int max = -1000;
	for (int i = 0; i<L; i++)
		max = ( m[i][2] > max ) ? m[i][2] : max;
	cout << endl << "max=" << max;
	
	// Decidir se todos os elementos da diagonal principal sao pares
	bool flag = true;
	for(int i=0; i<L; i++)
		if (m[i][i]%2==0)
			flag = false;
	cout << endl << (flag? "Sim" : "Nao");
	
	// Repetindo o percurso na diagonal com 2 indices, mas calcula min
	int min = 100000;
	for(int i=0,j=0; i<L; i++,j=i)
		min = (m[i][j] < min ? m[i][j] : min);
	cout << endl << "min=" << min;	

	// Percorrer o sub-retangulo entre 2a e 3a linhas, 2a e 4a colunas
	soma = 0;
	for(int i=1; i<=2; i++)
		for(int j=1; j<=3; j++)
			soma += m[i][j];
	cout << endl << "soma=" << soma;
	
	// Percorrer o sub-triangulo  -2 7 5    4 0   6
	cout << endl;
	for (int i=0; i<=2; i++)
		for (int j=1; j<=3-i; j++)
			cout << m[i][j] << " ";
	
	// Idem copiando em um array
	int copia[100];
	int tam_copia;
	int k = 0;
	for (int i=0; i<=2; i++)
		for (int j=1; j<=3-i; j++)
			copia[k++] = m[i][j];
	tam_copia = k;
	
	for (int i=0; i<tam_copia; i++)
		cout << copia[i] << "|";
	
	
	// Decidir se todas as linhas tem pelo menos um elemento negativo
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MAX 100
void sortear(int a[MAX], int *qtde);
void imprimir(int a[MAX], int qtde);
void copiar(int a[MAX], int qtde_a, int b[MAX], int *qtde_b);
int main() {
	srand(time(NULL));

	int vals[MAX];
	int tam_vals;

	sortear(vals, &tam_vals);
	imprimir(vals,tam_vals);
	
	// COPIANDO ARRAYS
	int origem[7] = {-6, 0, 6, 16, 36, 66, 60};
	int tam_orig = 7;
	int destino[MAX];
	int tam_dest;
	for(int i=0; i<tam_orig; i++)
		destino[i] = origem[i];
	tam_dest = tam_orig;
	imprimir(destino, tam_dest);

	sortear(destino, &tam_dest);	
	copiar(origem, tam_orig, destino, &tam_dest);
	imprimir(destino, tam_dest);
	
	// COPIAR INVERTENDO A ORDEM
	for(int i=0; i<tam_orig; i++) 
		destino[i] = origem[tam_orig-1-i];
	tam_dest = tam_orig;
	imprimir(destino, tam_dest);
	
	// DE NOVO, MAS COM 2 INDICES (i e j)
	for(int i=0, j=tam_orig-1; i<tam_orig; i++, j--)
		destino[i] = origem[j];
	tam_dest = tam_orig;
	imprimir(destino,tam_dest);

	// POWER OF ++
	for(int i=0, j=tam_orig-1; i<tam_orig; )
		destino[i++] = origem[j--];
	tam_dest = tam_orig;

	// FILTRAR (ELIMINAR) OS NAO POSITIVOS
	sortear(origem, &tam_orig);
	imprimir(origem, tam_orig);
	
	int i, j;
	for (i=0, j=0; i<tam_orig; i++) {
		if (origem[i]>0) {
			destino[j] = origem[i];
			j++;
		}
	}
	tam_dest = j;
	imprimir(destino, tam_dest);
}

void copiar(int a[MAX], int qtde_a, int b[MAX], int *qtde_b) {
	for(int i=0; i<qtde_a; i++)
		b[i] = a[i];
	*qtde_b = qtde_a;
}

void imprimir(int a[MAX], int qtde) {
	cout << endl;
	for(int i = 0; i < qtde; i++)
		cout << a[i] << ", ";
}
void sortear(int a[MAX], int *qtde) {
	*qtde = rand() % 6 + 7;
	for(int i=0; i< *qtde; i++)
		a[i] = rand() % 31 - 5;
}

#include <iostream>
using namespace std;

#define MAX_SIZE 10
#define MIN_SIZE 3

void preencherArray(int arr[], int numElementos)
{
    for (int i = 0; i < numElementos; ++i)
    {
        arr[i] = i + 1; // Preenche o array com valores sequenciais a partir de 1
    }
}

void imprimirArrayTabulado(const int arr[], int numElementos)
{
    cout << "Elementos do array:" << endl;
    for (int i = 0; i < numElementos; ++i)
    {
        cout << arr[i] << "\t"; // Tabula a saída
    }
    cout << endl;
}

int main()
{
    int numElementos;

    // Solicitar ao usuário o número de elementos
    do
    {
        cout << "Digite o numero de elementos (entre " << MIN_SIZE << " e " << MAX_SIZE << "): ";
        cin >> numElementos;

        if (numElementos < MIN_SIZE || numElementos > MAX_SIZE)
        {
            cout << "Numero invalido. Por favor, digite um valor entre " << MIN_SIZE << " e " << MAX_SIZE << "." << endl;
        }
    } while (numElementos < MIN_SIZE || numElementos > MAX_SIZE);

    int meuArray[MAX_SIZE];

    preencherArray(meuArray, numElementos);
    imprimirArrayTabulado(meuArray, numElementos);

    return 0;
}

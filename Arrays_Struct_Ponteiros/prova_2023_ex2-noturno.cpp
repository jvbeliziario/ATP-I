#include <iostream>
#include <cstdlib>
#define MAX 100
#define MIN 3

using namespace std;

void coletarAmostras(int amostras[], int &qtd_amostras)
{
    do
    {
        cout << "Digite a quantidade de amostras (entre " << MIN << " e " << MAX << "): ";
        cin >> qtd_amostras;

        if (qtd_amostras < MIN || qtd_amostras > MAX)
        {
            cout << "Quantidade invalida. Digite um valor entre " << MIN << " e " << MAX << "." << endl;
        }
    } while (qtd_amostras < MIN || qtd_amostras > MAX);

    for (int i = 0; i < qtd_amostras; i++)
    {
        amostras[i] = i + 1;
    }
}

void localidade(int arrlocalidade[], int qtd_amostras)
{
    int codigo_localidade;
    int contador = 0;

    while (contador < qtd_amostras)
    {
    cout << "Digite o código da localidade de cada amostra (entre 1111 e 9999): " << endl;
    cin >> codigo_localidade;
        
        arrlocalidade[contador] = codigo_localidade;
        contador++;
    }
    
}

void pH(int arrpH[], int qtd_amostras)
{
    float valor_pH;
    cout << "Digite o valor do pH de cada amostra (entre 0 e 14): " << endl;
    cin >> valor_pH;

    for (int i = 0; i < qtd_amostras; i++)
    {
        arrpH[i] = valor_pH;
    }
}

void imprimirAmostras(int amostras[], int qtd_amostras)
{
    cout << "Amostras:" << endl;
    for (int i = 0; i < qtd_amostras; i++)
    {
        cout << amostras[i] << "\t";
    }
    cout << endl;
}

void imprimirLocalidade(int arrlocalidade[], int qtd_amostras)
{
    cout << "Localidade:" << endl;
    for (int i = 0; i < qtd_amostras; i++)
    {
        cout << arrlocalidade[i] << "\t";
    }
    cout << endl;
}

void imprimirPH(int arrpH[], int qtd_amostras)
{
    cout << "Valor do pH:" << endl;
    for (int i = 0; i < qtd_amostras; i++)
    {
        cout << arrpH[i] << "\t";
    }
    cout << endl;
}

int main()
{

    int qtd_amostras;
    int amostras[MAX];
    int arrlocalidade[MAX];
    int arrpH[MAX];

    coletarAmostras(amostras, qtd_amostras);
    localidade(arrlocalidade, qtd_amostras);


    cout << "\n\n\n";
    imprimirAmostras(amostras, qtd_amostras);
    imprimirLocalidade(arrlocalidade, qtd_amostras);
 

    return 0;
}
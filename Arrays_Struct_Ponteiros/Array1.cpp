#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 10

void ler_conjunto1(int c[MAX], int *p)
{
    *p = 0;
    int i;
    int elemento;
    bool flag_elemento_repetido;
    char fechar;

    do
    {

        cout << "Digite o elemento do conjunto 1: ";
        cin >> elemento;
        flag_elemento_repetido = true;
        i = 0;

        while (i < *p)
        {

            if (elemento == c[i])
            {
                cout << "Elemento repetido. Digite outro elemento: ";
                flag_elemento_repetido = false;
                i = i + 1;
            }
        }
            if (flag_elemento_repetido)
            {
                c[*p] = elemento;
                *p = *p + 1;
                if (*p > MAX)
                {
                    cout << "Conjunto cheio.";
                    exit(1);
                }
            }
            cout << "Deseja fechar o conjunto? (s/n): ";
            cin >> fechar;
        
        
    }while (fechar != 's')
            ;
}

void ler_conjunto2(int c[MAX], int *p)
{
    *p = 0;
    int i;
    int elemento;
    bool flag_elemento_repetido;
    char fechar;

    do
    {

        cout << "Digite o elemento do conjunto 2: ";
        cin >> elemento;
        flag_elemento_repetido = true;
        i = 0;

        while (i < *p)
        {

            if (elemento == c[i])
            {
                cout << "Elemento repetido. Digite outro elemento: ";
                flag_elemento_repetido = false;
                i = i + 1;
            }
        }
            if (flag_elemento_repetido)
            {
                c[*p] = elemento;
                *p = *p + 1;
                if (*p > MAX)
                {
                    cout << "Conjunto cheio.";
                    exit(1);
                }
            }
            cout << "Deseja fechar o conjunto? (s/n): ";
            cin >> fechar;
        
        
    }while (fechar != 's')
            ;
}

void printar_conjunto(int c[MAX], int p)
{
    for (int i = 0; i < p; i++)
        cout << c[i] << " ";
    cout << endl;
}

void interseccao(int c1[MAX], int t1, int c2[MAX], int t2)
{
    int intersec[MAX];
    int t_intersec = 0;

    for (int i = 0; i < t1; i++)
    {
        for (int j = 0; j < t2; j++)
        {
            if (c1[i] == c2[j])
            {
                intersec[t_intersec] = c1[i];
                t_intersec++;
                break;
            }
        }
    }

    cout << "Interseccao dos conjuntos: ";
    printar_conjunto(intersec, t_intersec);
}



int main()
{
    int conjunto1[MAX];
    int tamanho1;

    ler_conjunto1(conjunto1, &tamanho1);

}
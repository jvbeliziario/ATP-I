#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 10

void ler_conjunto(int c[MAX], int *p)
{
    *p = 0;
    int i;
    int elemento;
    bool flag_elemento_repetido;
    char fechar;

    do
    {
        cout << "Digite o elemento do conjunto: ";
        cin >> elemento;
        flag_elemento_repetido = true;
        i = 0;

        while (i < *p)
        {
            if (elemento == c[i])
            {
                cout << "Elemento repetido. Digite outro elemento: ";
                flag_elemento_repetido = false;
                break; // Evitar loop infinito
            }
            i = i + 1;
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
    } while (fechar != 's');
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
                break; // Evitar adicionar o mesmo elemento várias vezes
            }
        }
    }

    cout << "Interseccao dos conjuntos: ";
    printar_conjunto(intersec, t_intersec);
}

bool elemento_repetido(int arr[MAX], int tamanho, int elemento)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (elemento == arr[i])
        {
            return true;
        }
    }
    return false;
}

void uniao(int c1[MAX], int t1, int c2[MAX], int t2)
{

    int uniao[MAX];
    int t_uniao = 0;

    for (int i = 0; i < t1; i++)
    {
        uniao[t_uniao] = c1[i];
        t_uniao++;
    }

    for (int i = 0; i < t2; i++)
    {
        if (!elemento_repetido(uniao, t_uniao, c2[i]))
        {
            uniao[t_uniao] = c2[i];
            t_uniao++;
        }
    }

    cout << "Uniao dos conjuntos: ";
    printar_conjunto(uniao, t_uniao);
}

void diferenca(int c1[MAX], int t1, int c2[MAX], int t2)
{
    int diferenca[MAX];
    int t_diferenca = 0;

    for (int i = 0; i < t1; i++)
    {
        diferenca[t_diferenca] = c1[i];
        t_diferenca++;
    }
    for (int i = 0; i < t2;){
        if (elemento_repetido(diferenca, t_diferenca, c2[i]))
        {
            for (int j = i; j < t2 - 1; j++)
            {
                c2[j] = c2[j + 1];
            }
            t2--;
        }
        else
        {
            i++;
        }
    
    }
    cout << "Diferenca dos conjuntos: ";
    printar_conjunto(diferenca, t_diferenca);
}

int main()
{
    int conjunto1[MAX], conjunto2[MAX];
    int tamanho1, tamanho2;

    cout << "Lendo conjunto 1:\n";
    ler_conjunto(conjunto1, &tamanho1);

    cout << "Lendo conjunto 2:\n";
    ler_conjunto(conjunto2, &tamanho2);

    cout << "Conjunto 1: ";
    printar_conjunto(conjunto1, tamanho1);

    cout << "Conjunto 2: ";
    printar_conjunto(conjunto2, tamanho2);

    interseccao(conjunto1, tamanho1, conjunto2, tamanho2);
    uniao(conjunto1, tamanho1, conjunto2, tamanho2);
    diferenca(conjunto1, tamanho1, conjunto2, tamanho2);

    return 0;
}

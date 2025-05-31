#include <iostream>
#include <cstdlib>

using namespace std;
#define MAX 10

void ler_conjunto1(int c[MAX], int *t)
{
    *t = 0;
    int i, elem;
    char opcao;
    bool flag_novo;

    cout << "Lendo o conjunto 1 (Pressione 0 para interromper)\n";
    do
    {

        cout << "Informe novo elemento: ";
        cin >> elem;
        i = 0;
        flag_novo = true;

        while (i < *t)
        {
            if (elem == c[i])
            {
                flag_novo = false;
                cout << "Elemento ja existe!";
            }
            i = i + 1;
        }

        if (flag_novo)
        {
            c[*t] = elem;
            *t = *t + 1;
            if (*t > MAX)
            {
                cout << "Numero maximo de elementos atingido!";
                exit(1);
            }
        }
    } while (elem != 0);
}

void ler_conjunto2(int c[MAX], int *t)
{
    *t = 0;
    int i, elem;
    char opcao;
    bool flag_novo;

    cout << "Lendo o conjunto 2\n";
    do
    {

        cout << "Informe novo elemento (Pressione 0 para interromper): ";
        cin >> elem;
        i = 0;
        flag_novo = true;
        while (i < *t)
        {
            if (elem == c[i])
            {
                flag_novo = false;
                cout << "Elemento ja existe!";
            }
            i = i + 1;
        }

        if (flag_novo)
        {
            c[*t] = elem;
            *t = *t + 1;
            if (*t > MAX)
            {
                cout << "Numero maximo de elementos atingido!";
                exit(1);
            }
        }
    } while (elem != 0);
}

void printar_conjunto(int c[MAX], int t)
{
    for (int i = 0; i < t; i++)
        cout << c[i] << " ";
}

int main()
{
    int conjunto1[MAX], conjunto2[MAX];
    int tamanho1, tamanho2;

    ler_conjunto1(conjunto1, &tamanho1);
    ler_conjunto2(conjunto2, &tamanho2);
    printar_conjunto(conjunto2, tamanho1);
}

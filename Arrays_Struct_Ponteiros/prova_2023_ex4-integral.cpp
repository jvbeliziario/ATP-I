#include <iostream>
using namespace std;

int main()
{
    const int N = 7;
    int matriz[N][N];
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    // Leitura da matriz
    cout << "Digite os elementos da matriz 7x7:" << endl;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calculo das somas das diagonais
    for (int i = 0; i < N; ++i)
    {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][N - i - 1];
    }

    // Comparação das somas e exibição do resultado
    cout << "Soma da diagonal principal: " << somaDiagonalPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaDiagonalSecundaria << endl;

    if (somaDiagonalPrincipal > somaDiagonalSecundaria)
    {
        cout << "A soma da diagonal principal e maior do que a soma da diagonal secundaria." << endl;
    }
    else if (somaDiagonalPrincipal < somaDiagonalSecundaria)
    {
        cout << "A soma da diagonal principal e menor do que a soma da diagonal secundaria." << endl;
    }
    else
    {
        cout << "A soma da diagonal principal e igual a soma da diagonal secundaria." << endl;
    }

    return 0;
}

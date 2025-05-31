#include <iostream>
using namespace std;
#define MAX 1000

void registrarimpares(int n, int impares[MAX], int &contagemimpares)
{
    int imparessubsequentes[MAX];
    int contagemimparessubsequentes = 0;
    contagemimpares = 0;
    while (n != 0)
    {
        if (n % 2 != 0)
        {
            impares[contagemimpares] = n;
            contagemimpares++;
        }
        n--;
    }
    for (int i = 0; i < contagemimpares - 1; i++) // Ajuste aqui para evitar acesso fora dos limites
    {
        if (impares[i + 1] - impares[i] == 2)
        {
            imparessubsequentes[contagemimparessubsequentes] = impares[i];
            contagemimparessubsequentes++;
        }
    }
    for (int i = 0; i < contagemimparessubsequentes; i++)
    {
        cout << imparessubsequentes[i] << " " << imparessubsequentes[i] + 2 << endl;
    }
}

int main()
{
    int n;
    int impares[MAX];
    int contagemimpares;
    while (true)
    {
        cout << "Digite os dados (pressione 0 para encerrar): ";
        cin >> n;
        if (n == 0) break;
        registrarimpares(n, impares, contagemimpares);
    }
    return 0;
}

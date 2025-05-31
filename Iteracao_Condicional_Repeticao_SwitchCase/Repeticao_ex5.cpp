#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float valor;
    float somatorio;
    float numerador;
    float denominador;
    int sinal;
    int quant_termos;
    int contador;
    int base;
    int expoente;
    int a;

    cout << "Digite o valor de X: ";
    cin >> valor;

    quant_termos = 20;
    contador = 1;
    somatorio = 0;
    sinal = 1;
    a = 3;

    while (contador <= quant_termos)
    {
        denominador = 1;

        if (contador == 1)
        {
            numerador = valor;
        }
        else
        {
            base = valor;
            expoente = 2 * (contador - 1);
            numerador = pow(base, expoente);

            for (int i = a; i >= 1; --i)
            {
                denominador *= i;
            }

            a = a + 2;
        }

        somatorio = somatorio + (numerador / denominador) * sinal;
        contador = contador + 1;
        sinal = -sinal;
        cout << "Somatório: " << somatorio << endl;
    }

    cout << "Somatório: " << somatorio << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    float numerador;
    float denominador;
    float somatorio;
    int potencia;
    int raiz_quadrada;
    int sinal;

    somatorio = 0;
    potencia = 1;
    raiz_quadrada = 15;
    sinal = 1;

    while (denominador != 1)
    {
        numerador = potencia;
        denominador = raiz_quadrada * raiz_quadrada;
        somatorio = somatorio + sinal * (numerador / denominador);

        potencia = potencia * 2;
        raiz_quadrada = raiz_quadrada - 1;
        sinal = sinal * -1;
    }

    cout << "O valor do somatório é: " << somatorio << endl;

    return 0;
}
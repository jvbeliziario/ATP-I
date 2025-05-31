#include <iostream>
using namespace std;

main()
{
    /*
    Ler numeros inteiros entre -100 e 100, exceto 0
    Interrompe com 0
    Mostrar:
    a) média dos pares
    b)média dos impares
    c) se todos são múltiplos de 3
    */

    int n, soma, conta, menor;
    bool flag_3x;

    soma = 0;
    conta = 0;
    menor = 100;
    flag_3x = true;

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        if (n % 2 == 0)
        {
            soma = soma + n;
            conta = conta + 1;
        }
        else
        {
            if (n < menor)
            {
                menor = n;
            }
        }
        if (n % 3 != 0)
            ;
        {
            flag_3x = false;
        
        }
    }
    if (conta > 0)
    {
        cout << "média = " << 1.0 * soma / conta << endl;
    }
    else
    {
        cout << "sem pares" << endl;
    }
    cout << "menor = " << menor;
    if (flag_3x)
    {
        cout << " todos são múltiplos";
    }
    else
    {
        cout << " nem todos são multiplos";
    }

    return 0;
}
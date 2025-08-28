#include <iostream>
using namespace std;

main()
{
    int n, soma;
    n = 98;
    soma = 0;
    while (n < 200)
    {
        n = n + 2;
        soma = soma + n;
    }
    cout << soma;
    return 0;
}
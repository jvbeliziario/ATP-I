#include <iostream>
using namespace std;

main () {
    int n, conta, soma;
    n = 27;
    conta = 0;
    soma=0;
    do {
        cout << n << "->" << conta << "=>" << soma << " ";
        n = n + 3;
        conta = conta + 1;
        soma = soma + n;
    } while (n!=60);
    cout << endl << endl << n << " " << conta << " " << soma;
    cout << endl << soma / conta;




}
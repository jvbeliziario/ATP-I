#include <iostream>
using namespace std;

main()
{

    int termo, razao, nro, conta;

    cout << "Digite o termo inicial, a razão e a quantidade de termos: ";
    cin >> termo >> razao >> nro;

    
    if (nro == 0) {
    cout << "Número de termos incorreto.";
    }
    for (conta = 1; conta <= nro; ++conta, termo += razao){
    cout << termo << " ";
   }

    return 0;
}
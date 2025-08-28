#include <iostream>
using namespace std;

main()
{

    int pais1, pais2, pais3, pais;
    double peso, grama, preco, pesog, codigo, imposto, valor;

    cout << "Digite o peso do produto em kg: ";
    cin >> peso;

    cout << "Digite o código do produto: ";
    cin >> codigo;

    cout << "Digite o código do país de origem: ";
    cin >> pais;

    if (codigo <= 4) {
        grama = 10;
    }
     if ( codigo >= 5 && codigo <= 7) {
        grama = 25;
    } 
    if (codigo >= 8){
        grama = 35;
    }

    pesog = (peso * 1000);
    preco = (pesog * grama);


    if (pais == 1) {
       imposto = 0;
     }
      else if (pais == 2){
       imposto = (preco * 15)/100;        
    }
     else if (pais == 3) {
       imposto = (preco * 25)/100;     
    }

    valor = preco + imposto;   

    cout << "Peso em g: " << pesog << " | Preço Total: " << preco << " | Imposto: " << imposto << " | Valor Total: " << valor;

    return 0;
}
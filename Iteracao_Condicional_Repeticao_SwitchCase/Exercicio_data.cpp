#include <iostream>
using namespace std;

int main()
{

    int numero;

    cout << "Digite um numero do mês desejado sendo de 1 a 12: ";
    cin >> numero;

    if (numero == 2)
    {
        cout << "O mês de fevereiro tem 28 dias";
    }
    else
    {
        if

            (numero == 2)
        {
            cout << "O mês de fevereiro tem 28 dias";
        }
        else
        {
            if (numero == 4 || numero == 6 || numero == 9 || numero == 11)
            {
                cout << "O mês tem 30 dias";
            }
            else {
            
                if (numero == 1 || numero == 3 || numero == 5 || numero == 7 || numero == 8 || numero == 10 || numero == 12)
                {
                    cout << "O mês tem 31 dias";
                }
                else
                {
                    cout << "Mês inválido"; 
                }
            }
        }
    }


    return 0;
}
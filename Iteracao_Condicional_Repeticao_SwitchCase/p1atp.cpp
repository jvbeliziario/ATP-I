#include <iostream>
using namespace std;

main()
{

    int a, b, c, d, e;
    char rota;
    int total;

    a = 50;
    b = 40;
    c = 30;
    d = 60;
    e = 50;
    total = 0;
    bool flag_total = true;

    cout << "Digite o código da sua rota digite 0 para finalizar: ";
    cin >> rota;

    while (flag_total)
    {
        if (rota == 'a' || rota == 'e')
        {
            total = 50;
        }
        else if (rota == 'b')
        {
            total = 40;
        }
        else if (rota == 'c')
        {
            total = 30;
        }
        else if (rota == 'd')
        {
            total = 60;
        }
        else if (rota == '0')
        {
            flag_total = false;
        }
        else
        {
            cout << "Rota inválida";
        }
        total = total + total;
        cout << "Total: " << total << endl;
        cout << "Digite o código da sua rota digite 0 para finalizar: ";
        cin >> rota;
    }
    
    
}
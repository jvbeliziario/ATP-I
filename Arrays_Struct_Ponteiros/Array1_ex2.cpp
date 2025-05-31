#include <iostream>
using namespace std;
#define MAX 100

int main()
{
    int conj[MAX];
    int novo, i_novo = 0, i;
    char opcao = 'S';
    bool flag_novo;

    do
    {
        cout << "Informe um novo elemento: ";
        cin >> novo;
        flag_novo = true;
        for (i = 0; i < i_novo; i++)
        {
            if (conj[i] == novo)
            {
                flag_novo = false;
                break;
            }
        }
        if (flag_novo)
        {
            if (i_novo < MAX)
            {
                conj[i_novo] = novo;
                i_novo++;
            }
            else
            {
                cout << "Estrapolou o limite!" << endl;
                opcao = 'N';
            }
        }
        else
        {
            cout << "Elemento ja existe!" << endl;
        }
        if (i_novo < MAX && opcao == 'S')
        {
            cout << "Deseja informar outro elemento? (S/N): ";
            cin >> opcao;
            while (opcao != 'S' && opcao != 'N')
            {
                cout << "Opcao invalida! Digite S ou N: ";
                cin >> opcao;
            }
        }
    } while (opcao == 'S');

    return 0;
}

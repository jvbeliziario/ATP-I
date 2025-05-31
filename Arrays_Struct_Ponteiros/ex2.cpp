#include <iostream>
using namespace std;

struct estrelin
{
    int code;
    float brilin;
    char cor; // A amarelo, B branca, V vermelha
};

int main()
{
    int n;
    cout << "Digite a quantidade de estrelas que deseja inserir: ";
    cin >> n;

    struct estrelin star[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Estrela " << i + 1 << endl;
        cout << "Codigo: ";
        cin >> star[i].code;
        cout << "Brilho: ";
        cin >> star[i].brilin;
        cout << "Cor (A para amarela, V para vermelha, B para branca): ";
        cin >> star[i].cor;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "\n\nEstrela " << i + 1 << endl;
        cout << "Codigo: " << star[i].code << endl;
        cout << "Brilho: " << star[i].brilin << endl;
        cout << "Cor: " << star[i].cor << endl;
    }
    return 0;
}

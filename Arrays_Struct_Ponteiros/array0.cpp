#include <iostream>
using namespace std;

int main()
{
    int inteiros[10];
    inteiros[0] = -100;
    int maior_neg = 0;

    for (int i = 1; i <= size(inteiros); i++)
    {

        inteiros[i] = inteiros[i - 1] * 3;
    }

    for (int i = 0; i <= size(inteiros); i++)
    {
        cout << inteiros[i] << " ";
        if (inteiros[i] < maior_neg)
        {
            maior_neg = inteiros[i];
        }
    }
    cout << endl;
    cout << "O maior número negativo é: " << maior_neg << endl;

    return 0;
}

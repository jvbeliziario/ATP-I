#include <iostream>
using namespace std;

main()
{

    int a, b, c;

    cout << "Informe as 3 medidas do triângulo: " << endl;
    cin >> a >> b >> c;

    if ((a > b + c) || (b > a + c) || (c > a + b))
    {
        cout << " Essas medidas não formam um triângulo! ";
    }
     else if (a == b && a == c && b == c) {
        cout << "Triangulo Equilátero";
    } else if (a == b || a == c || b == c) {
        cout << "Triângulo Isósceles";
    } else if (a !=b && a != c && b != c){
        cout << "Triangulo Escaleno";
    }

    return 0;
}
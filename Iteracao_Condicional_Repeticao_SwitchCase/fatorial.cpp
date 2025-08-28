#include <iostream>
using namespace std;

int main() {
    int a = 27; // Número cujo fatorial queremos calcular
    int fatorial = 1; // Inicializamos o fatorial como 1

    for (int i = a; i >= 1; --i) {
        fatorial *= i; // Multiplicamos o fatorial pelo número atual
    }

    cout << "O fatorial de " << a << " é: " << fatorial << endl;

    return 0;
}
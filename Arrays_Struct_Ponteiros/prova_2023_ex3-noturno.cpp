#include <iostream>
using namespace std;

void SieveOfEratosthenes(int num, int arrayprimos[], int &primoscontagem)
{
    // Cria um array de booleanos para marcar se cada número é primo
    bool primos[num + 1];

    // Inicializa todos os valores do array como verdadeiro
    for (int i = 0; i <= num; i++)
    {
        primos[i] = true;
    }

    // 0 e 1 não são primos
    primos[0] = primos[1] = false;

    // Itera sobre os números para marcar os não primos
    for (int i = 2; i * i <= num; i++)
    {
        if (primos[i])
        {
            // Marca todos os múltiplos de i como não primos
            for (int j = i * i; j <= num; j += i)
            {
                primos[j] = false;
            }
        }
    }

    primoscontagem = 0;
    for (int i = 2; i <= num; i++)
    {
        if (primos[i])
        {
            arrayprimos[primoscontagem] = i;
            primoscontagem++;
        }
    }
}




void imprimirArray(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int num = 1888;
    int* arrayprimos = new int[num];
    int primoscontagem = 0; // Initialize primoscontagem
    int primosvizinhos;
    int* divisoresprimos = new int[num];
    int divisoresprimoscontagem = 0;
    int numero;
    SieveOfEratosthenes(num, arrayprimos, primoscontagem);

    primosvizinhos = 0;
    for (int i = 0; i < primoscontagem; i++)
    {

        if (arrayprimos[i + 1] - arrayprimos[i] == 2)
        {
            cout << arrayprimos[i] << " e " << arrayprimos[i + 1] << " são primos vizinhos" << endl;
            primosvizinhos++;
        }
    }
    cout << "Quantidade de primos vizinhos: " << primosvizinhos << endl;

    cout << "Forneça um número para encontrar divisores primos: ";
    cin >> numero;
    for (int i = 2; i <= 1000000; i++)
    {
        if (numero % i == 0)
        {
            for (int j = 0; j < primoscontagem; j++)
            {
                if (i == arrayprimos[j])
                {
                    divisoresprimos[divisoresprimoscontagem] = i;
                    divisoresprimoscontagem++;
                }
            }
        }
    }
    cout << "Divisores primos de " << numero << ": ";
    imprimirArray(divisoresprimos, divisoresprimoscontagem);
}

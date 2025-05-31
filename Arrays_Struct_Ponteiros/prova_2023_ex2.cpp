#include <iostream>
#include <cstdlib>
#include <cmath> // Add this line to include the cmath header
#include <cstring>
using namespace std;

#define MAX 10
#define MIN 3

void preencherArray(int arr[], int p)
{
    for (int i = 0; i < p; i++)
    {
        arr[i] = i + 1;
    }
}

void imprimirArray(int arr[], int p)
{
    cout << "Dados:" << endl;
    for (int i = 0; i < p; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void codigoEstrela(int arrayE[], int qtd_dados)
{
    int contador = 0;
    int codigo_estrela;
    bool elemento_repetido;

    while (contador < qtd_dados)
    {
        elemento_repetido = false;

        cout << "Digite o codigo estrela: ";
        cin >> codigo_estrela;

        // Verificar se o elemento já existe no arrayE
        for (int i = 0; i < contador; i++)
        {
            if (codigo_estrela == arrayE[i])
            {
                cout << "Elemento repetido. Digite outro elemento: ";
                elemento_repetido = true;
                break;
            }
        }

        if (!elemento_repetido)
        {
            arrayE[contador] = codigo_estrela;
            contador++;
        }
    }
}

void imprimirEstrela(int arrayE[], int qtd_dados)
{
    cout << "Código das Estrelas:" << endl;
    for (int i = 0; i < qtd_dados; i++)
    {
        cout << arrayE[i] << "\t";
    }
    cout << endl;
}

void brilhoEstrela(int ArrayB[], int qnt_dados)
{
    int contador = 0;
    double brilho_estrela;
    bool flag_brilho_invalido;
    bool elemento_repetido;

    while (contador < qnt_dados)
    {
        flag_brilho_invalido = false;
        elemento_repetido = false;

        cout << "Insira a intensidade do brilho das Estrelas (entre 1,0 * 10^-3 e 7,0 * 10^9): ";
        cin >> brilho_estrela;

        // Verifica se o brilho é válido
        if (brilho_estrela < 1.0 * pow(10, -3) || brilho_estrela > 7.0 * pow(10, 9))
        {
            cout << "Brilho inválido. Digite um valor entre 1,0 * 10^-3 e 7,0 * 10^9." << endl;
            flag_brilho_invalido = true;
        }

        // Verifica se o brilho é repetido
        for (int i = 0; i < contador; i++)
        {
            if (brilho_estrela == ArrayB[i])
            {
                cout << "Elemento repetido. Digite outro elemento: ";
                elemento_repetido = true;
                break;
            }
        }

        // Se o brilho não for inválido e não for repetido, armazena no array
        if (!elemento_repetido && !flag_brilho_invalido)
        {
            ArrayB[contador] = brilho_estrela;
            contador++;
        }
    }
}

void imprimirBrilho(int arrayB[], int qtd_dados)
{
    cout << "Intensidade do brilho das estrelas: " << endl;
    for (int i = 0; i < qtd_dados; i++)
    {
        cout << arrayB[i] << "\t";
    }
    cout << endl;
}



int main()
{
    int qtd_dados;    
    int dados[MAX];
    int codigosEstrela[MAX];
    int brilhoestrela[MAX];
    
    do
    {
        cout << "Digite a quantidade de dados (entre " << MIN << " e " << MAX << "): ";
        cin >> qtd_dados;
        if (qtd_dados < MIN || qtd_dados > MAX)
        {
            cout << "Quantidade invalida. Digite um valor entre " << MIN << " e " << MAX << "." << endl;
        }
    } while (qtd_dados < MIN || qtd_dados > MAX);


    preencherArray(dados, qtd_dados);
    codigoEstrela(codigosEstrela, qtd_dados);
    brilhoEstrela(brilhoestrela, qtd_dados);
 
    cout << "\n\n\n";
    imprimirArray(dados, qtd_dados);
    imprimirEstrela(codigosEstrela, qtd_dados);
    imprimirBrilho(brilhoestrela, qtd_dados);

    return 0;
}

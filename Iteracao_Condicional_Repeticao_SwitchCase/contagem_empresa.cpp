#include <iostream>
using namespace std;

main()
{

 //definindo as variáveis.
    int serv, dependentes, menor_serv, mais_dependentes, salario, maior_salario, sal_dependentes, soma, conta;
    double media;                                                                                       
    bool flag_10, flag_cargo;
    char cargo;

    menor_serv = 100;
    mais_dependentes = -1;
    maior_salario = -1;
    soma = 0;
    conta = 0;

    while (true) {
    cout << "Digite os salários: (digite 0 para interromper) " << endl;  
    cin >> salario;
        if (salario == 0)
            break;
        if (salario != -1) {
            if (salario > maior_salario){
                maior_salario = salario;
            }
        }
    cout << "Digite o tempo de serviços em anos: " << endl;
    cin >> serv;
        if (serv != 100){
            if (serv < menor_serv){
                menor_serv = serv;
            }
        }
        flag_10 = false;
            if (serv < 10){
                flag_10 = false;
            }
    cout << "Digite o número de dependentes: " << endl; 
    cin >> dependentes;
        if (dependentes != -1){
            if (dependentes > mais_dependentes){
                mais_dependentes = dependentes;
                sal_dependentes = salario;
                }
        }
    cout << "Ocupa cargo de segurança? (S/N)" << endl ;
    cin >> cargo;
    switch (cargo) {
        case 'S':
        case 's':
        flag_cargo = false;
            break;
        case 'N':
        case 'n':
        flag_cargo = true;
            break;
    default:
        flag_cargo = true;    
        }      
    if (flag_cargo)
    {
        soma = soma + salario;
        conta = conta + 1;
        media = soma / conta;
    }
    }
    cout << "o maior salário é: " << maior_salario << " reais." << endl;
    cout << "A média salarial dos funcionários que nunca ocuparam cargo de segurança é de: " << media << endl;
    cout << "O menor tempo de serviço é de: " << menor_serv << " ano(s)." << endl;
    cout << "O salário de quem tem mais dependentes é: " << sal_dependentes << " reais" << endl;
    if (!flag_10){
        cout << "Todos os funcionários tem mais de 10 anos de serviço." << endl;
      }
      else {
            cout << "Nem todos os funcionários tem mais de 10 anos de serviço." << endl;
        }



    return 0;
    }

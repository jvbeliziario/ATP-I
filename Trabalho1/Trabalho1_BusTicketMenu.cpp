#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

bool verificaAssento(const vector<string> &assentos, const string &assento)
{
    for (const auto &a : assentos)
    {
        if (a == assento)
        {
            return true;
        }
    }
    return false;
}

main()
{

    int valor_passagem, num_passagens, valor_total, sentido, linha, horario, assentos = 0;
    char coluna;
    vector<string> assentosSelecionados;
    bool flag_selecao, flag_sentido = false, flag_horario = false, flag_linha = false, flag_coluna = false, flag_nro_passagens = false;

    cout << "Seja bem-vindo a TransComp! " << endl;
    while (!flag_sentido)
    {
        cout << "\n \nSelecione o sentido da viagem: \n \n 1 - Rio Claro x Piracicaba (Norte-Sul) \n 2 - Piracicaba x Rio Claro (Sul-Norte) \n";
        cout << "\nValor da passagem: R$ 50,00 \n \n";
        cin >> sentido;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
        }
        else
        {
            switch (sentido)
            {
            case 1:
                flag_sentido = true;
                break;
            case 2:
                flag_sentido = true;
                break;
            default:
                cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
                flag_sentido = false;
            }
        }
    }

    if (sentido == 1)
    {
        while (!flag_horario)
        {
            cout << "\nVoce selecionou o sentido Rio Claro x Piracicaba (Norte-Sul) \n";
            cout << "\nSelecione o horario da viagem: \n \n 1 - 08:00 \n 2 - 10:00 \n 3 - 12:00 \n 4 - 14:00 \n 5 - 16:00 \n \n";
            cin >> horario;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
            }
            else
            {
                switch (horario)
                {
                case 1:
                    cout << "Voce selecionou o horario 08:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: D  \n";
                    flag_horario = true;
                    break;
                case 2:
                    cout << "Voce selecionou o horario 10:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: C e D \n";
                    flag_horario = true;
                    break;
                case 3:
                    cout << "Voce selecionou o horario 12:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: Nenhuma \n";
                    flag_horario = true;
                    break;
                case 4:
                    cout << "Voce selecionou o horario 14:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: A e B \n";
                    flag_horario = true;
                    break;
                case 5:
                    cout << "Voce selecionou o horario 16:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: A \n";
                    flag_horario = true;
                    break;
                default:
                    cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
                    flag_horario = false;
                }
            }
        }
    }
    else if (sentido == 2)
    {
        while (!flag_horario)
        {
            cout << "\nVoce selecionou o sentido Piracicaba x Rio Claro (Sul-Norte) \n";
            cout << "\n Selecione o horario da viagem: \n \n 1 - 08:00 \n 2 - 10:00 \n 3 - 12:00 \n 4 - 14:00 \n 5 - 16:00 \n \n";
            cin >> horario;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
            }
            else
            {
                switch (horario)
                {
                case 1:
                    cout << "Voce selecionou o horario 08:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: A  \n";
                    flag_horario = true;
                    break;
                case 2:
                    cout << "Voce selecionou o horario 10:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: A e B \n";
                    flag_horario = true;
                    break;
                case 3:
                    cout << "Voce selecionou o horario 12:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: Nenhuma \n";
                    flag_horario = true;
                    break;
                case 4:
                    cout << "Voce selecionou o horario 14:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: C e D \n";
                    flag_horario = true;
                    break;
                case 5:
                    cout << "Voce selecionou o horario 16:00 \n";
                    cout << "\nAssentos disponiveis estao marcado por 0: \n \n    A  B  C  D \n 1  0  0  X  0 \n 2  0  X  0  0 \n 3  X  0  0  0 \n 4  X  0  0  0 \n 5  0  0  X  0 \n\nColunas com sol: D \n";
                    flag_horario = true;
                    break;
                default:
                    cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
                    flag_horario = false;
                }
            }
        }
    }
    if (sentido == 1 || sentido == 2)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
        }
        else
        {
            while (!flag_nro_passagens)
            {
                cout << "\nQuantas passagens deseja comprar?\n";
                cin >> num_passagens;
                if (cin.fail() || num_passagens < 1)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Opcao invalida!  Por favor, digite um numero valido de passagens!\n";
                    flag_nro_passagens = false;
                }
                else
                {
                    flag_nro_passagens = true;
                }
            }
            while (assentos < num_passagens)
            {
                assentos = assentos + 1;
                flag_linha = false;
                flag_coluna = false;
                while (!flag_linha)
                {
                    cout << "Assento " << assentos << "\n";
                    cout << "Selecione a linha (1 a 5): \n";
                    cin >> linha;
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
                    }
                    else
                    {
                        switch (linha)
                        {
                        case 1:
                            flag_linha = true;
                            break;
                        case 2:
                            flag_linha = true;
                            break;
                        case 3:
                            flag_linha = true;
                            break;
                        case 4:
                            flag_linha = true;
                            break;
                        case 5:
                            flag_linha = true;
                            break;
                        default:
                            cout << "Opcao invalida!  Por favor, digite um numero dentre as opcoes fornecidas.\n";
                            flag_linha = false;
                        }
                    }
                }
                while (!flag_coluna)
                {
                    cout << "Selecione a coluna (A,B,C,D): \n";
                    cin >> coluna;
                    coluna = toupper(coluna);
                    switch (coluna)
                    {
                    case 'A':
                        flag_coluna = true;
                        break;
                    case 'B':
                        flag_coluna = true;
                        break;
                    case 'C':
                        flag_coluna = true;
                        break;
                    case 'D':
                        flag_coluna = true;
                        break;
                    case 'a':
                        flag_coluna = true;
                        break;
                    case 'b':
                        flag_coluna = true;
                        break;
                    case 'c':
                        flag_coluna = true;
                        break;
                    case 'd':
                        flag_coluna = true;
                        break;
                    default:
                        cout << "Opcao invalida!  Por favor, digite uma opcao valida.\n";
                        flag_coluna = false;
                    }
                }
                if (linha == 1)
                {
                    if (coluna == 'C' || coluna == 'c')
                    {
                        cout << "\n\nEscolha invalida, assento ocupado. Por favor, escolha outro assento.\n";
                        assentos = assentos - 1;
                        continue;
                    }
                }
                if (linha == 2)
                {
                    if (coluna == 'B' || coluna == 'b')
                    {
                        cout << "\n\nEscolha invalida, assento ocupado. Por favor, escolha outro assento.\n";
                        assentos = assentos - 1;
                        continue;
                    }
                }
                if (linha == 3)
                {
                    if (coluna == 'A' || coluna == 'a')
                    {
                        cout << "\n\nEscolha invalida, assento ocupado. Por favor, escolha outro assento.\n";
                        assentos = assentos - 1;
                        continue;
                    }
                }
                if (linha == 4)
                {
                    if (coluna == 'a' || coluna == 'A')
                    {
                        cout << "\n\nEscolha invalida, assento ocupado. Por favor, escolha outro assento.\n";
                        assentos = assentos - 1;
                        continue;
                    }
                }
                if (linha == 5)
                {
                    if (coluna == 'c' || coluna == 'C')
                    {
                        cout << "\n\nEscolha invalida, assento ocupado. Por favor, escolha outro assento.\n";
                        assentos = assentos - 1;
                        continue;
                    }
                }

                string assento = to_string(linha) + static_cast<char>(toupper(coluna));

                if (verificaAssento(assentosSelecionados, assento))
                {
                    cout << "\n\nEscolha invalida, assento ja selecionado. Por favor, escolha outro assento.\n";
                    assentos--;
                    continue;
                }
                else
                {
                    assentosSelecionados.push_back(assento);
                }
            }
            cout << "\nCompra realizada com sucesso! \n";
            cout << "Valor total da compra: R$ " << num_passagens * 50 << ",00 \n";
            cout << "Obrigado por usar nosso servico de reservas de onibus!\n";

            // marca registada da companhia
            cout << "(\\_/)\n";
            cout << "(^.^)\n";
            cout << "(> <)\n";
        }
    }
    cout << "\nDeseja encerrar o programa? \n 1 - Sim \n 2 - Nao \n";
    int encerrar;
    cin >> encerrar;
    if (encerrar == 1)
    {
        cout << "Obrigado por usar nosso servico de reservas de onibus!\n";
        cout << "Ate a proxima!\n";
        return 0;
    }
    else
    {
        main();
    }
    return 0;
}
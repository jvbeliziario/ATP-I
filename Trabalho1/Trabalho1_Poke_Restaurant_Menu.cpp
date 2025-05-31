#include <iostream>
#include <limits>
using namespace std;

int main(){
    char base,topping,crunch,proteina,nut,molho,tamanho,pedido;
    string base_escolhida, base_escolhida2, topping_escolhido,topping_escolhido2, crunch_escolhido,crunch_escolhido2, proteina_escolhida,nut_escolhida,nut_escolhida2, molho_escolhido,molho_escolhido2, tamanho_escolhido;
    float preco = 0;
    bool flag_opcao_ok = true, flag_tamanho_ok = true, flag_opcao_casa = false;
    int opcao, opcao2, opcaocasa, encerrar, contador_base, contador_topping, contador_crunch, contador_proteina, contador_nut, contador_molho;
    cout << "*************************************************************** \n                     BEM VINDO AO POKE-MON!! \n*************************************************************** \n\n";
    cout << "O Poke-Mon eh um restaurante especializado em pokes, um prato havaiano que consiste em peixe cru cortado em pedacos, servido com molho e outros ingredientes. \n";
    cout << "Aqui voce pode montar o seu poke do jeito que quiser, escolhendo entre diversas opcoes de bases, toppings, crunchs, proteinas, nuts e molhos. \n";
    cout << "O preco do seu poke varia de acordo com o tamanho e os ingredientes escolhidos. \n";
    while (!flag_opcao_casa){
        cout << "Selecione uma das opcoes a seguir:  \n";
        cout << "\n1 - Escolher o poke a moda da casa \n";
        cout << "2 - Montar um poke \n";
        cin >> opcao2;
        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opcao Invalida!  Por favor, digite um numero dentre as opcoes fornecidas\n";
        }else{
            switch (opcao2){
            case 1:
                flag_opcao_casa = true;
                break;
            case 2:
                flag_opcao_casa = true;
                break;
            default:
                cout << "Opcao Invalida!  Por favor, digite um numero dentre as opcoes fornecidas\n";
                flag_opcao_casa = false;
            }
        }
    }
    if (opcao2 == 1){
            cout << "\n*************************************************************** \n                        MONTE SEU POKE \n*************************************************************** \n\n";
            cout << "voce escolheu o poke a moda da casa! \n";
            cout << "O poke a moda da casa eh um poke mehdio com base de Arroz, topping de Abacate, crunch de Cebola Crispy, Salmao, nut de Amendoim e molho Shoyu. \n";
            cout << "O preco do poke a moda da casa eh de 40 reais. \n";
            cout << "Deseja fazer um novo pedido? \n\n";
            cout << "1 - Sim " << endl;
            cout << "2 - Nao " << endl;
            cout << "\n*************************************************************** \n";
            cin >> pedido;
        if (pedido == '1'){
            flag_opcao_ok = false;
            flag_tamanho_ok = true;
            preco = 40.0;
        }else if (pedido == '2'){
            flag_opcao_ok = false;
            flag_tamanho_ok = false;
            cout << "\n*************************************************************** \n O valor total do(s) pedido(s) eh: 40 reais\n"
                 << endl;
        }else{
            cout << "Opcao Invalida!" << endl;
        }
    }else if (opcao2 == 2){
        flag_tamanho_ok = true;
    }else{
        cout << "Opcao Invalida!" << endl;
    }while (flag_tamanho_ok){
        flag_opcao_ok = true;
            cout << "\nEscolha o tamanho do seu poke: \n\n";
        cout << "P - Pequeno (R$ 10,00)" << endl;
        cout << "M - Medio (R$ 15,00)" << endl;
        cout << "G - Grande (R$ 20,00)" << endl;
        cout << "\n*************************************************************** \n";
        cin >> tamanho;
        switch (tamanho){
        case 'P':
        case 'p':
            preco = preco + 10.0;
            tamanho_escolhido = "Pequeno";
            break;
        case 'M':
        case 'm':
            preco = preco + 15.0;
            tamanho_escolhido = "Medio";
            break;
        case 'G':
        case 'g':
            preco = preco + 20.0;
            tamanho_escolhido = "Grande";
            break;
        default:
            cout << "Opcao Invalida!" << endl;
            flag_tamanho_ok = true;
            flag_opcao_ok = false;
        }
        while (flag_opcao_ok){
            cout << "\n*************************************************************** \n                        MONTE SEU POKE \n*************************************************************** \n\n";
            cout << "1 - BASES \n2 - TOPPINGS \n3 - CRUNCH \n4 - PROTEINAS \n5 - NUTS \n6 - MOLHOS \n7 - ENCERRAR PEDIDO" << endl;
            cout << "\n*************************************************************** \n O preco atual da sua sessao eh: " << preco << " reais \n*************************************************************** \n";
            cin >> opcao;
            if (cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Opcao Invalida!  Por favor, digite um numero dentre as opcoes fornecidas\n";
            }else{
                if (opcao == 1){
                    contador_base = 1;
                    cout << "\nEscolha ate duas bases do seu poke: (0" << contador_base << "/02) \n\n";
                    while (contador_base <= 2){
                        cout << "1 - Arroz (R$ 6,00)" << endl;
                        cout << "2 - Batata Doce (R$ 8,00)" << endl;
                        cout << "3 - Couve (R$ 6,00)" << endl;
                        cout << "4 - Quinoa (R$ 6,00)" << endl;
                        cout << "5 - Alface (R$ 6,00)" << endl;
                        cout << "6 - Espinafre (R$ 6,00)" << endl;
                        cout << "7 - Repolho Roxo (R$ 6,00)" << endl;
                        cout << "8 - Mix de Folhas (R$ 10,00)" << endl;
                        cout << "9 - RETORNAR AO MENU " << endl;
                        cout << "\n*************************************************************** \n";
                        cin >> base;
                        switch (base){
                        case '1':
                            preco = preco + 6.0;
                            base_escolhida = "Arroz";
                            break;
                        case '2':
                            preco = preco + 8.0;
                            base_escolhida = "Batata Doce";
                            break;
                        case '3':
                            preco = preco + 6.0;
                            base_escolhida = "Couve";
                            break;
                        case '4':
                            preco = preco + 6.0;
                            base_escolhida = "Quinoa";
                            break;
                        case '5':
                            preco = preco + 6.0;
                            base_escolhida = "Alface";
                            break;
                        case '6':
                            preco = preco + 6.0;
                            base_escolhida = "Espinafre";
                            break;
                        case '7':
                            preco = preco + 6.0;
                            base_escolhida = "Repolho Roxo";
                            break;
                        case '8':
                            preco = preco + 10.0;
                            base_escolhida = "Mix de Folhas";
                            break;
                        case '9':
                            preco = preco + 0.0;
                            break;
                        default:
                            cout << "Opcao Invalida!" << endl;
                        }
                        contador_base++;
                        if (contador_base == 2){
                            switch (base){
                            case '1':
                                preco = preco + 6.0;
                                base_escolhida2 = "Arroz";
                                break;
                            case '2':
                                preco = preco + 8.0;
                                base_escolhida2 = "Batata Doce";
                                break;
                            case '3':
                                preco = preco + 6.0;
                                base_escolhida2 = "Couve";
                                break;
                            case '4':
                                preco = preco + 6.0;
                                base_escolhida2 = "Quinoa";
                                break;
                            case '5':
                                preco = preco + 6.0;
                                base_escolhida2 = "Alface";
                                break;
                            case '6':
                                preco = preco + 6.0;
                                base_escolhida2 = "Espinafre";
                                break;
                            case '7':
                                preco = preco + 6.0;
                                base_escolhida2 = "Repolho Roxo";
                                break;
                            case '8':
                                preco = preco + 10.0;
                                base_escolhida2 = "Mix de Folhas";
                                break;
                            case '9':
                                preco = preco + 0.0;
                                break;
                            default:
                                cout << "Opcao Invalida!" << endl;
                            }
                        }
                        cout << "O preco atual do seu pedido eh: " << preco << " reais.\nSelecione a segunda base ou retorne ao menu: (02/02)\n\n";
                    }
                }else if (opcao == 2){
                    contador_topping = 1;
                    cout << "\nEscolha ate dois toppings para seu poke: (0" << contador_topping << "/02) \n\n";
                    while (contador_topping <= 2){
                        cout << "1 - Abacate (R$ 5,00)" << endl;
                        cout << "2 - Cenoura (R$ 6,00)" << endl;
                        cout << "3 - Cream Cheese (R$ 7,00)" << endl;
                        cout << "4 - Rabanete (R$ 5,00)" << endl;
                        cout << "5 - Sunomono (R$ 6,00)" << endl;
                        cout << "6 - Kani (R$ 10,00)" << endl;
                        cout << "7 - Wakame (R$ 6,00)" << endl;
                        cout << "8 - Manga (R$ 5,00)" << endl;
                        cout << "9 - RETORNAR AO MENU " << endl;
                        cout << "\n*************************************************************** \n";
                        cin >> topping;
                        switch (topping){
                        case '1':
                            preco = preco + 5.0;
                            topping_escolhido = "Abacate";
                            break;
                        case '2':
                            preco = preco + 6.0;
                            topping_escolhido = "Cenoura";
                            break;
                        case '3':
                            preco = preco + 7.0;
                            topping_escolhido = "Cream Cheese";
                            break;
                        case '4':
                            preco = preco + 5.0;
                            topping_escolhido = "Rabanete";
                            break;
                        case '5':
                            preco = preco + 6.0;
                            topping_escolhido = "Sunomono";
                            break;
                        case '6':
                            preco = preco + 10.0;
                            topping_escolhido = "Kani";
                            break;
                        case '7':
                            preco = preco + 7.0;
                            topping_escolhido = "Wakame";
                            break;
                        case '8':
                            preco = preco + 5.0;
                            topping_escolhido = "Manga";
                            break;
                        case '9':
                            preco = preco + 0.0;
                            break;
                        default:
                            cout << "Opcao Invalida!" << endl;
                        }
                        contador_topping++;
                        if (contador_topping == 2){
                            switch (topping){
                            case '1':
                                preco = preco + 5.0;
                                topping_escolhido2 = "Abacate";
                                break;
                            case '2':
                                preco = preco + 6.0;
                                topping_escolhido2 = "Cenoura";
                                break;
                            case '3':
                                preco = preco + 7.0;
                                topping_escolhido2 = "Cream Cheese";
                                break;
                            case '4':
                                preco = preco + 5.0;
                                topping_escolhido2 = "Rabanete";
                                break;
                            case '5':
                                preco = preco + 6.0;
                                topping_escolhido2 = "Sunomono";
                                break;
                            case '6':
                                preco = preco + 10.0;
                                topping_escolhido2 = "Kani";
                                break;
                            case '7':
                                preco = preco + 7.0;
                                topping_escolhido2 = "Wakame";
                                break;
                            case '8':
                                preco = preco + 5.0;
                                topping_escolhido2 = "Manga";
                                break;
                            case '9':
                                preco = preco + 0.0;
                                break;
                            default:
                                cout << "Opcao Invalida!" << endl;
                            }
                        }
                        cout << "O preco atual do seu pedido eh: " << preco << " reais.\nSelecione o segundo topping ou retorne ao menu: (02/02)\n\n";
                    }
                }
                else if (opcao == 3){
                    contador_crunch = 1;
                    cout << "\nEscolha ate dois crunchs para seu poke: (0" << contador_crunch << "/02) \n\n";
                    while (contador_crunch <= 2){
                        cout << "1 - Cebola Crispy (R$ 3,00)" << endl;
                        cout << "2 - Castanha de Caju (R$ 4,00)" << endl;
                        cout << "3 - Chips de Batata Doce (R$ 3,00)" << endl;
                        cout << "4 - Couve Crispy (R$ 4,00)" << endl;
                        cout << "5 - Chips de Banana-da-Terra (R$ 3,00)" << endl;
                        cout << "6 - RETORNAR AO MENU " << endl;
                        cout << "\n*************************************************************** \n";
                        cin >> crunch;
                        switch (crunch){
                        case '1':
                            preco = preco + 3.0;
                            crunch_escolhido = "Cebola Crispy";
                            break;
                        case '2':
                            preco = preco + 4.0;
                            crunch_escolhido = "Castanha de Caju";
                            break;
                        case '3':
                            preco = preco + 3.0;
                            crunch_escolhido = "Chips de Batata Doce";
                            break;
                        case '4':
                            preco = preco + 4.0;
                            crunch_escolhido = "Couve Crispy";
                            break;
                        case '5':
                            preco = preco + 3.0;
                            crunch_escolhido = "Chips de Banana-da-Terra";
                            break;
                        case '6':
                            preco = preco + 0.0;
                            break;
                        default:
                            cout << "Opcao Invalida!" << endl;
                        }
                        contador_crunch++;
                        if (contador_crunch == 2){
                            switch (crunch){
                            case '1':
                                preco = preco + 3.0;
                                crunch_escolhido2 = "Cebola Crispy";
                                break;
                            case '2':
                                preco = preco + 4.0;
                                crunch_escolhido2 = "Castanha de Caju";
                                break;
                            case '3':
                                preco = preco + 3.0;
                                crunch_escolhido2 = "Chips de Batata Doce";
                                break;
                            case '4':
                                preco = preco + 4.0;
                                crunch_escolhido2 = "Couve Crispy";
                                break;
                            case '5':
                                preco = preco + 3.0;
                                crunch_escolhido2 = "Chips de Banana-da-Terra";
                                break;
                            case '6':
                                preco = preco + 0.0;
                                break;
                            default:
                                cout << "Opcao Invalida!" << endl;
                            }
                        }
                        cout << "O preco atual do seu pedido eh: " << preco << " reais.\nSelecione o segundo crunch ou retorne ao menu: (02/02)\n\n";
                    }
                }else if (opcao == 4){
                    cout << "\nEscolha a proteina do seu poke: \n\n";
                    cout << "1 - Salmao (R$ 10,00)" << endl;
                    cout << "2 - Atum (R$ 10,00)" << endl;
                    cout << "3 - Frango (R$ 10,00)" << endl;
                    cout << "4 - Salmao Grelhado (R$ 12,00)" << endl;
                    cout << "5 - Ceviche (R$ 10,00)" << endl;
                    cout << "6 - Ovo de Codorna (R$ 8,00)" << endl;
                    cout << "7 - Shimeji (R$ 10,00)" << endl;
                    cout << "8 - Salmao com Cream Cheese (R$ 15,00)" << endl;
                    cout << "9 - RETORNAR AO MENU " << endl;
                    cout << "\n*************************************************************** \n";
                    cin >> proteina;
                    switch (proteina){
                    case '1':
                        preco = preco + 10.0;
                        proteina_escolhida = "Salmao";
                        break;
                    case '2':
                        preco = preco + 10.0;
                        proteina_escolhida = "Atum";
                        break;
                    case '3':
                        preco = preco + 10.0;
                        proteina_escolhida = "Frango";
                        break;
                    case '4':
                        preco = preco + 12.0;
                        proteina_escolhida = "Salmao Grelhado";
                        break;
                    case '5':
                        preco = preco + 10.0;
                        proteina_escolhida = "Ceviche";
                        break;
                    case '6':
                        preco = preco + 8.0;
                        proteina_escolhida = "Ovo de Codorna";
                        break;
                    case '7':
                        preco = preco + 10.0;
                        proteina_escolhida = "Shimeji";
                        break;
                    case '8':
                        preco = preco + 15.0;
                        proteina_escolhida = "Salmao com Cream Cheese";
                        break;
                    case '9':
                        preco = preco + 0.0;
                        break;
                    default:
                        cout << "Opcao Invalida!" << endl;
                    }
                }else if (opcao == 5){
                    contador_nut = 1;
                    cout << "\nEscolha ate dois nuts para seu poke: (0" << contador_nut << "/02) \n\n";
                    while (contador_nut <= 2){
                        cout << "1 - Amendoim (R$ 2,00)" << endl;
                        cout << "2 - Castanha de Caju(R$ 3,00)" << endl;
                        cout << "3 - Milho Crunch (R$ 2,00)" << endl;
                        cout << "4 - Amendoa Laminada (R$ 3,00)" << endl;
                        cout << "5 - Ervilha Wasabi (R$ 2,00)" << endl;
                        cout << "6 - Castanha do Para (R$ 3,00)" << endl;
                        cout << "7 - Nozes (R$ 2,00)" << endl;
                        cout << "8 - RETORNAR AO MENU " << endl;
                        cout << "\n*************************************************************** \n";
                        cin >> nut;
                        switch (nut){
                        case '1':
                            preco = preco + 2.0;
                            nut_escolhida = "Amendoim";
                            break;
                        case '2':
                            preco = preco + 3.0;
                            nut_escolhida = "Castanha de Caju";
                            break;
                        case '3':
                            preco = preco + 2.0;
                            nut_escolhida = "Milho Crunch";
                            break;
                        case '4':
                            preco = preco + 3.0;
                            nut_escolhida = "Amendoa Laminada";
                            break;
                        case '5':
                            preco = preco + 2.0;
                            nut_escolhida = "Ervilha Wasabi";
                            break;
                        case '6':
                            preco = preco + 3.0;
                            nut_escolhida = "Castanha do Para";
                            break;
                        case '7':
                            preco = preco + 2.0;
                            nut_escolhida = "Nozes";
                            break;
                        case '8':
                            preco = preco + 0.0;
                            break;
                        default:
                            cout << "Opcao Invalida!" << endl;
                        }
                        contador_nut++;
                        if (contador_nut == 2){
                            switch (nut){
                            case '1':
                                preco = preco + 2.0;
                                nut_escolhida2 = "Amendoim";
                                break;
                            case '2':
                                preco = preco + 3.0;
                                nut_escolhida2 = "Castanha de Caju";
                                break;
                            case '3':
                                preco = preco + 2.0;
                                nut_escolhida2 = "Milho Crunch";
                                break;
                            case '4':
                                preco = preco + 3.0;
                                nut_escolhida2 = "Amendoa Laminada";
                                break;
                            case '5':
                                preco = preco + 2.0;
                                nut_escolhida2 = "Ervilha Wasabi";
                                break;
                            case '6':
                                preco = preco + 3.0;
                                nut_escolhida2 = "Castanha do Para";
                                break;
                            case '7':
                                preco = preco + 2.0;
                                nut_escolhida2 = "Nozes";
                                break;
                            case '8':
                                preco = preco + 0.0;
                                break;
                            default:
                                cout << "Opcao Invalida!" << endl;
                            }
                        }
                        cout << "O preco atual do seu pedido eh: " << preco << " reais.\nSelecione o segunda nut ou retorne ao menu: (02/02)\n\n";
                    }
                }else if (opcao == 6){
                    contador_molho = 1;
                    cout << "\nEscolha ate dois molhos para seu poke: (0" << contador_molho << "/02) \n\n";
                    while (contador_molho <= 2){
                        cout << "1 - Shoyu (R$ 2,00)" << endl;
                        cout << "2 - Tare (R$ 2,00)" << endl;
                        cout << "3 - Wasabi (R$ 2,00)" << endl;
                        cout << "4 - Maionese (R$ 2,00)" << endl;
                        cout << "5 - Mostarda e Mel (R$ 2,00)" << endl;
                        cout << "6 - Fresh Lime (R$ 2,00)" << endl;
                        cout << "7 - RETORNAR AO MENU " << endl;
                        cout << "\n*************************************************************** \n";
                        cin >> molho;
                        switch (molho){
                        case '1':
                            preco = preco + 2.0;
                            molho_escolhido = "Shoyu";
                            break;
                        case '2':
                            preco = preco + 2.0;
                            molho_escolhido = "Tare";
                            break;
                        case '3':
                            preco = preco + 2.0;
                            molho_escolhido = "Wasabi";
                            break;
                        case '4':
                            preco = preco + 2.0;
                            molho_escolhido = "Maionese";
                            break;
                        case '5':
                            preco = preco + 2.0;
                            molho_escolhido = "Mostarda e Mel";
                            break;
                        case '6':
                            preco = preco + 2.0;
                            molho_escolhido = "Fresh Lime";
                            break;
                        case '7':
                            preco = preco + 0.0;
                            break;
                        default:
                            cout << "Opcao Invalida!" << endl;
                        }
                        contador_molho++;
                        if (contador_molho == 2){
                            switch (molho){
                            case '1':
                                preco = preco + 2.0;
                                molho_escolhido2 = "Shoyu";
                                break;
                            case '2':
                                preco = preco + 2.0;
                                molho_escolhido2 = "Tare";
                                break;
                            case '3':
                                preco = preco + 2.0;
                                molho_escolhido2 = "Wasabi";
                                break;
                            case '4':
                                preco = preco + 2.0;
                                molho_escolhido2 = "Maionese";
                                break;
                            case '5':
                                preco = preco + 2.0;
                                molho_escolhido2 = "Mostarda e Mel";
                                break;
                            case '6':
                                preco = preco + 2.0;
                                molho_escolhido2 = "Fresh Lime";
                                break;
                            case '7':
                                preco = preco + 0.0;
                                break;
                            default:
                                cout << "Opcao Invalida!" << endl;
                            }
                        }
                        cout << "O preco atual do seu pedido eh: " << preco << " reais.\nSelecione o segundo molho ou retorne ao menu: (02/02)\n\n";
                    }
                }else if (opcao == 7){
                    cout << "\n*************************************************************** \n                         SEU PEDIDO \n*************************************************************** \n voce pediu um poke do tamanho: " << tamanho_escolhido << endl;
                    cout << " As bases escolhidas foram: " << base_escolhida << " | " << base_escolhida2 << endl;
                    cout << " Os toppings escolhidos foram: " << topping_escolhido << " | " << topping_escolhido2 << endl;
                    cout << " Os crunchs escolhidos foram: " << crunch_escolhido << " | " << crunch_escolhido2 << endl;
                    cout << " A proteina escolhida foi: " << proteina_escolhida << endl;
                    cout << " Os nuts escolhidos foram: " << nut_escolhida << " | " << nut_escolhida2 << endl;
                    cout << " Os molhos escolhidos foram: " << molho_escolhido << " | " << molho_escolhido2 << endl;
                    cout << " O valor atual do(s) pedido(s) eh: " << preco << " reais\n\n";
                    cout << "*************************************************************** \n";
                    cout << "\nDeseja fazer um novo pedido? \n\n";
                    cout << "1 - Sim " << endl;
                    cout << "2 - Nao " << endl;
                    cout << "\n*************************************************************** \n";
                    cin >> pedido;
                    if (pedido == '1'){
                        flag_opcao_ok = false;
                        flag_tamanho_ok = true;
                    }else if (pedido == '2'){
                        flag_opcao_ok = false;
                        flag_tamanho_ok = false;
                        cout << "\n*************************************************************** \n\nO valor total do(s) pedido(s) eh: " << preco << " reais\n\n";
                    }else{
                        cout << "Opcao Invalida!" << endl;
                    }
                }
            }
        }
    }
    cout << "\nDeseja encerrar o programa? \n1 - Sim \n2 - Nao \n";
    cin >> encerrar;
    if (encerrar == 1){
        cout << "\n\nObrigado por usar nosso servico de pedidos!\n";
		cout << "Ate a proxima!\n";
		cout <<"  ()_()\n";
    	cout <<"  (>.<)\n";
    	cout <<" (_)_(_)\n";
        return 0;
    }else{
    }
    return 0;    
    }
    

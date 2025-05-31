#include <iostream>
using namespace std;
main()
{
	char pao, recheio;
	bool flag_opcao_ok;
	float preco;
	cout << "Escolha a opção de pão" << endl;
	cout << "(F)rances" << endl;
	cout << "(I)taliano" << endl;
	cin >> pao;
	switch (pao)
	{
	case 'F':
	case 'f':
		preco = 1.5;
		flag_opcao_ok = true;
		break;
	case 'I':
	case 'i':
		preco = 1.7;
		flag_opcao_ok = true;
		break;
	default:
		flag_opcao_ok = false;
	}
	if (flag_opcao_ok)
	{
		cout << "Escolha uma opção de recheio" << endl;
		cout << "	(H)amburguer" << endl;
		cout << "	(F)rango" << endl;
		cout << "	(S)oja" << endl;
		cin >> (recheio);
		switch (recheio)
		{
		case 'H':
		case 'h':
			preco = preco + 7.0;
			break;
		case 'F':
		case 'f':
			preco = preco + 5.0;
			break;
		case 'S':
		case 's':
			preco = preco + 3.0;
			break;
		default:
			flag_opcao_ok = false;
		}
		if (flag_opcao_ok)
		{
			cout << "O preco é " << preco;
		}
		else
		{
			cout << "Opção invalida";
		}
	}
	else
		cout << "Opção invalida";
}

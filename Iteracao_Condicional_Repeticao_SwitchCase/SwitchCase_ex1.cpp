#include <iostream>
using namespace std;
main () {
	char casa;
	cout << "Informe a casa conforme o c�digo" << endl;
	cout << "(G)rifinória" << endl;
	cout << "(S)onserina" << endl;
	cout << "(L)ufa-Lufa" << endl;
	cout << "(C)orvinal" << endl;
	cin >> casa;
	switch (casa) {
		case 'G':
		cout << "Harry";
		break;
		case 'S':
		cout << "Draco";
		break;
		case 'L':
		cout << "Sprout";
		break;
		case 'C':
		cout << "Ravenclaw";
		
		break;
		default:
			cout << "Opção inexistente";
	}
}

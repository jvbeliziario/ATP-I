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
	if (casa == 'G' || casa == 'g') 
		cout << "Harry Potter";
	 else 
		if (casa == 'S' || casa == 's')
			cout << "Draco";
		 else 
			if (casa == 'C' || casa == 'c')
				cout << "Ravenclaw";
			 else 
				if (casa == 'L' || casa == 'l')
					cout << "Sprout";
				 else 
						cout << "Op��o inexistente";
				 
			
			
		 
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/*int main()
{

    srand(time(NULL));
    int num;

    do
    {
        num = rand() % 100 + 1;
        cout << num << " ";

    } while (num < 80);

    return 0;
}

*/
 
 
 // sorteio aleatório usuário achar o numero 

int main()
{

    srand(time(NULL));
    int segredo = rand() % 100 + 1;
    int chute;

    do
    {
        cout << "Advinhe o no. : ";
        cin >> chute;
        
        if (segredo > chute) {
            cout << " O numero é maior" << endl;
        } else if  (segredo < chute){
            cout << "O numero é menor" << endl;
        } else {
            cout << "Voce acertou o numero!";
            break;
        } 

    } while (true);

   
return 0;
}

#include <iostream>
using namespace std;

main()
{

    int a, conta;

    cout << "Digite o número inicial: ";
    cin >> a;
  
    conta = 0;

  if (a % 2 == 1){
  for (conta = 1; conta < 11; ++conta, a += 2) {

        cout << a << " ";
    }
  }

  if (a % 2 == 0){
    a = a + 1;
    for (conta = 1; conta < 11; ++conta , a+=2){
        cout << a << " ";
    }
  }      

    return 0;
}
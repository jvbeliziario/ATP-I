#include <iostream>
using namespace std;

main (){
int n, soma, media;
soma = 0;
n = 27;
while (true){
    if (n==60){
        break;
        }
        n = n + 3;
    soma = soma + n;
    
}
 cout <<"a soma é: " << soma ;
 media = soma / 11;
cout << " e a média é: " << media ;


    return 0;
}

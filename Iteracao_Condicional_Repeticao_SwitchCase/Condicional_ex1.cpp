#include <iostream>
using namespace std;

main (){

int dia1, dia2, mes1, mes2, ano1, ano2;

cout << "Informe a primeira data no formato, dia / mês / ano: ";
cin >> dia1 >> mes1 >> ano1;

cout << "Informe a segunda data no formato, dia / mês / ano: ";
cin >> dia2 >> mes2 >> ano2;

if (ano1 == ano2 && mes1 == mes2 && ano1 == ano2){
    cout << "As datas são iguais!";
} else if  (ano1 > ano2 || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2)) {
    cout << "A data mais recente é: " << dia1 << "-" << mes1 << "-" << ano1 << endl;
} else {
    cout << "A data mais recente é: " << dia2 << "-" << mes2 << "-" << ano2 << endl;
}


    return 0;
}
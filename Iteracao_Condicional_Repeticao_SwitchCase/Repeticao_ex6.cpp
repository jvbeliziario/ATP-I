#include <iostream>
using namespace std;

main()
{

    int horas;
    int minutos;
    int segundos;
    float massa_inicial;
    float massa_final;
    int tempo_decaimento;
    int contador;
    

    contador = 0;
    horas = 0;
    minutos = 0;
    segundos = 0;


    cout << "Digite a massa inicial: ";
    cin >> massa_inicial;

    for (massa_inicial; massa_inicial > 0.5; massa_inicial = massa_inicial / 2)
    {
       contador = contador + 1;
       tempo_decaimento = 50 * contador;
    
       if (tempo_decaimento >= 60)
       {
           horas = tempo_decaimento / 3600; 
           int segundos_restantes = tempo_decaimento % 3600; 
           minutos = segundos_restantes / 60; 
           segundos = segundos_restantes % 60;
       }
       else
       {
           segundos = tempo_decaimento;
       }      
       
    }  
    
        cout << "Massa Final: " << massa_inicial << "g" << endl;
        cout << "Tempo: " << horas << "h" << minutos << "m" << segundos << "s" << endl;
        
    return 0;
}
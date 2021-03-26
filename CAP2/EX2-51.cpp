#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Exercicio 2.51

int main()
{
    /* Este programa calcula quantia de dinheiro na conta ao fim de todo ano por 10 anos
     * tendo como base um depósito de R$1000(juros compostos). foram usados numeros
     * inteiros para o calculo
     */
    
    int amount,
        principal = 1000, //capital
        reais,
        centavos; 
        
    double rate = 0.05; //juros 5%

    cout << "Ano" << setw(24)
         << "Quantia em deposito R$" << endl;

    for(int year = 1; year <= 10; year++)
    {
        amount = principal * pow(1.0 + rate, year);
        centavos = amount % 100;
        reais = amount;
        cout << setw(4) << year << setw(21) << reais << ",";
        
        if(centavos < 10) 
        {
            cout << "0" << centavos << endl;
        }
        else 
        {
            cout << centavos << endl;
        }
    }

    return 0;
}
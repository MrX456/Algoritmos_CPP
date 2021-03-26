#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Exercicio 2.46

int main()
{

    //Uma pessoa deposita R$1000 com 5,6,7,8,9,10% de juros
    //quantia de dinheiro na conta ao fim de todo ano por 10 anos

    double amount; //quantia em depósito
    double principal = 1000.00; //capital
    
    cout << setiosflags(ios::fixed | ios::showpoint);
    
    for(int juros = 5; juros <= 10; juros++)
    {
        cout << "Juros de " << setprecision(2) << juros / 100.0;
        cout << "\nAno" << "\tQuantia em deposito" << endl;

        for(int year = 1; year <= 10; year++)
        {
            amount = principal * pow(1 + (juros / 100.0), year);
            cout <<  year << "\t" << setprecision(2) << amount << "\n";
        }
        
        cout << "\n";

    }
    
    cout << endl;
    
    return 0;
}
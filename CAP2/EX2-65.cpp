#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

//Exercicio 2.65

int main()
{

    /* Uma lenda diz que em 1626 Peter Minuit comprou Manhattan por $24.00.
     * Calcular juros compostos de 5 6 7 8 9 e 10 % sobre este valor até 
     * o ano atual
     */
    
    long double amount; //quantia em depósito
    double principal = 24.00; //capital
    //Ano atual
    time_t tempo = time(NULL);
    tm* tPtr = localtime(&tempo);
    int anos = (tPtr->tm_year + 1900) - 1626;
    
    cout << setiosflags(ios::fixed | ios::showpoint);
    
    cout << "Principal :  $" << setprecision(2) << principal << endl;
    
    for(int juros = 5; juros <= 10; juros++)
    {
        cout << "Juros de " << setprecision(2) << juros / 100.0;
        cout << "\nAno" << "\tQuantia em deposito" << endl;

        for(int year = 1; year <= anos; year++)
        {
            amount = principal * pow(1 + (juros / 100.0), year);
            cout <<  year << "\t" << setprecision(2) << amount << "\n";
        }
        
        cout << "\n";

    }
    
    cout << endl;
    
    return 0;
}
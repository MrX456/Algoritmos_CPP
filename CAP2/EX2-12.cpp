#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Exercicio 2.12

int main()
{
    //a- somar inteiros impares de 1 a 99 usando for
    int sum = 0;
    
    for(int i = 1; i <= 99; i += 2)
    {
        sum += i;
    }
    
    cout << "Somatorio dos impares de 1 a 99" << endl;
    cout << sum << endl;
    
    cout << "===========================================" << endl;
    
    //b- imprimir o valor 333.546372 em um campo de 15 caracteres com precisões de 1 2 e 3
    //cada número na mesma linha e a esquerda de seu campo
    double n = 333.546372;
    cout << "n formatado precisao 1 2 3 -> " << setiosflags (ios::fixed | ios::showpoint | ios::left) << "\n"
         << setprecision(1) << setw(15) << n << "\n"
         << setprecision(2) << setw(15) << n << "\n"
         << setprecision(3) << setw(15) << n << endl;
         
    cout << "===========================================" << endl;
    
    //c- calcular valor de 2.5 elevado a 3 com precisão de 2 em um campo de 10 caracteres
    cout << "2,5 elevado a 5 formatado " << setiosflags (ios::fixed | ios::showpoint) << "\n"
         << setprecision(2) << setw(10) << pow(2.5, 3) << endl;
         
    cout << "===========================================" << endl;
    
    //d- imprimir inteiros de 1 a 20 usando while, 5 inteiros por linha, variavel x não
    //foi inicializada
    int x;
    
    while(x <= 20) 
    {
        if(x != 0)
        {
            cout << x << "\t ";
            
            if(x % 5 == 0)
            {
                cout << "\n";
            }
        
        }

        x++;
    }
    
    cout << "===========================================" << endl;
    
    //e- item d usando for
    for(int x; x <= 20; x++) 
    {
        if(x != 0)
        {
            cout << x << "\t ";
            
            if(x % 5 == 0)
            {
                cout << "\n";
            }
        
        }
    }
    
    return 0;
}

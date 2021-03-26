#include <iostream>
#include <cmath>

using namespace std;

//Exercicio 2.30

int main()
{
    
    //Este programa recebe um valor binario e converte para decimal

    int bin, dec;
    
    cout << "Digite um valor binario  : ";
    cin >> bin;
    
    for(int i = 0; bin > 0; i++)
    {
        dec = dec + pow(2, i) * (bin % 10);
        bin = bin / 10;
    }
    
    cout << "valor em decimal = " << dec;

    return 0;
    
}
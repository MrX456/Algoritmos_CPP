#include <iostream>

using namespace std;

//Exercicio 2.4

int main()
{
    //a-declarar sum e x como int
    int x,
        sum;
        
    //b-inicializar x com 1
    x = 1;
    cout << "x = " << x << endl;
    
    //c-inicializar sum com 0
    sum = 0;
    cout << "sum = " << sum << endl;
    
    //d-atribuir a sum o valor de x + sum
    sum += x;
    
    //e-imprimir o resultado da soma
    cout << "A soma e " << sum << endl;

    return 0;
}
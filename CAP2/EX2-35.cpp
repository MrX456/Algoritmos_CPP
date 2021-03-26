#include <iostream>

using namespace std;

//Exercicio 2.35

int main()
{
    //Este programa recebe tres valores e verifica se eles podem formar um triangulo
    double l1,
           l2,
           l3;
           
    cout << "Digite tres valores para verificar se podem formar um triangulo." << endl;
           
    cout << "Digite o primeiro valor : ";
    cin >> l1;
    
    cout << "Digite o primeiro valor : ";
    cin >> l2;
    
    cout << "Digite o primeiro valor : ";
    cin >> l3;
    
    if((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2))
    {
        cout << "Estes valores podem formar um triangulo" << endl;
    }
    else 
    {
        cout << "Nao e possivel formar um triangulo com os valores digitados" << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

//Exercicio 2.36

int main()
{
    //Este programa recebe tres valores e verifica se eles podem formar um triangulo
    //usar Teorema de Pitagoras
    int c1,
        c2,
        hip;
           
    cout << "Digite tres valores para verificar se podem formar um triangulo retangulo." << endl;
           
    cout << "Digite o valor do primeiro cateto : ";
    cin >> c1;
    
    cout << "Digite o valor do segundo cateto : ";
    cin >> c2;
    
    cout << "Digite o valor da hipotenusa :  ";
    cin >> hip;
    
    //Aplicar condição de existencia triangulo retangulo
    if(pow(hip, 2) == (pow(c1, 2) + pow(c2, 2)))
    {
        cout << "Estes valores podem formar um triangulo retangulo" << endl;
    }
    else 
    {
        cout << "Nao e possivel formar um triangulo retangulo com os valores digitados" << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

//Exercicio 2.33

int main()
{
    
    //Este programa recebe o raio de um circulo e calcula o diametro, a circunferencia
    //e a area
    
    double raio;
    const double pi = 3.14159;
    
    cout << "Digite o raio do circulo : ";
    cin >> raio;
    
    cout << "Diametro : " << 2 * raio << endl;
    cout << "Circunferencia : " << 2 * pi * raio << endl;
    cout << "Area : " << pi * pow(raio, 2) << endl;
    
    return 0;
    
}
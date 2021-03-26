#include <iostream>

using namespace std;

//Exercicio 2.7

int main()
{
    //a- receber inteiro x como cin
    int x;
    cout << "Digite o valor de x : ";
    cin >> x;
    
    //b-  receber inteiro y como cin
    int y;
    cout << "Digite o valor de y : ";
    cin >> y;
    
    //c- inicialize i com 1
    int i = 1;
    
    //d- inicialize power com 1
    int power = 1;
    
    //e- multiplique power por x e atribua a power
    power *= x;
    
    //f- incremente y por 1
    y++;
    cout << "y incrementado " << y << endl;
    
    //g- verificar se y é menor que ou igual x
    if(y <= x)
    {
        cout << "x menor ou igual a y" << endl;
    }
    //h- exibir vaalor de power
    cout << "power = " << power << endl;

    return 0;
}
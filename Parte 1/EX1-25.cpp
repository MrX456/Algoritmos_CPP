#include <iostream>

using namespace std;

//Exercicio 1.25

int main()
{
    //Este programa recebe dois numeros e mostra qual o maior ou se
    //são iguais
    
    int x, y;
    
    cout << "Digite dois numeros" << endl;
    cin >> x;
    cin >> y;
    
    if(x > y)
        cout << x << " e o maior" << endl;
    
    if(x < y)
        cout << y << " e o maior" << endl;
    
    if(x == y)
        cout << "Estes numeros sao iguais" << endl;

    return 0;
}

#include <iostream>

using namespace std;

//Exercicio 1.32

int main()
{
    //Este programa le dois inteiros e determina se o primeiro
    //é multiplo do segundo

    int x, y;
    cout << "Digite dois inteiros" << endl;
    cin >> x;
    cin >> y;

    //Verificar multiplo
    if(x % y == 0)
    {
        cout << "O numero " << x << " e multiplo do numero " << y << endl;
    }
    else
    {
        cout << "Nao ha relacao entre os numeros digitados" << endl;
    }

    return 0;
}

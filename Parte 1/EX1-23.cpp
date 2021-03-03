#include <iostream>

using namespace std;

//Exercicio 1.23

int main()
{
    //Este programa calcula soma, produto, diferença e quociente
    //de dois numeros digitados pelo usuario

    int x, y;

    cout << "Digite dois numeros " << endl;
    cin >> x;
    cin >> y;

    cout << "A soma e " << x + y << endl;
    cout << "A diferenca e " << x - y << endl;
    cout << "O produto e " << x * y << endl;
    cout << "A quociente e " << x / y << endl;

    return 0;
}

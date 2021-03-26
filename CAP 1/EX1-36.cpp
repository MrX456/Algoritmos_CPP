#include <iostream>

using namespace std;

//Exercicio 1.36

int main()
{
    //Este programa recebe como entrada um numero de 5 digitos e o separa em digitos
    //individuais e os imprime com 3 espaços entre cada um
    int x;
    cout << "Digite um numero com 5 digitos : ";
    cin >> x;

    //Repatir e separar cada numero com 3 espaços
    cout << x / 10000 % 10 << "   ";
    cout << x / 1000 % 10 << "   ";
    cout << x / 100 % 10 << "   ";
    cout << x / 10 % 10 << "   ";
    cout << x % 10 << endl;

    return 0;
}

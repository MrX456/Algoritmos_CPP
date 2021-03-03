#include <iostream>

using namespace std;

//Exercicio 1.31

int main()
{
    //Este programa le um inteiro e determina se é par ou impar
    int x;
    cout << "Digite um inteiro : ";
    cin >> x;

    //Verificar se é par
    if(x % 2 == 0)
    {
        cout << "O numero " << x << " e par" << endl;
    }
    else
    {
        cout << "O numero " << x << " e impar" << endl;
    }
    return 0;
}

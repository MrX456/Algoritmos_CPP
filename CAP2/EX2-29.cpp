#include <iostream>

using namespace std;

//Exercicio 2.29

int main()
{
    
    //Este programa recebe uma sequencia de 5 inteiros e verifica se é um palindromo

    int num;
    
    cout << "Digite um inteiro de 5 digitos : ";
    cin >> num;
    
    if(num > 9999 && num < 100000)
    {
        //Separar número
        cout << num / 10000 % 10 << "   ";
        cout << num / 1000 % 10 << "   ";
        cout << num / 100 % 10 << "   ";
        cout << num / 10 % 10 << "   ";
        cout << num % 10 << endl;
        
        if((num / 10000 % 10 == num % 10) && (num / 1000 % 10 == num / 10 % 10))
        {
            cout << "O numero digitado e um palindromo!" << endl;
        }
        else
        {
            cout <<"Este numero NAO e um palindromo." << endl;
        }

    }
    else
    {
        cout << "O numero deve ter cinco digitos." << endl;
    }

    return 0;
    
}
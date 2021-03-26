#include <iostream>

using namespace std;

//Exercicio 1.35

int main()
{
    //Este programa imprime o valor inteiro equivalente dos caracteres
    //A B C a b c 0 1 2 $ * + /
    cout << "Inteiro equivalente ao caracter" << endl;
    cout << 'A' << '=' << static_cast<int> ('A') << endl;
    cout << 'B' << '=' << static_cast<int> ('B') << endl;
    cout << 'C' << '=' << static_cast<int> ('C') << endl;
    cout << 'a' << '=' << static_cast<int> ('a') << endl;
    cout << 'b' << '=' << static_cast<int> ('b') << endl;
    cout << 'c' << '=' << static_cast<int> ('c') << endl;
    cout << '0' << '=' << static_cast<int> ('0') << endl;
    cout << '1' << '=' << static_cast<int> ('1') << endl;
    cout << '2' << '=' << static_cast<int> ('2') << endl;
    cout << '$' << '=' << static_cast<int> ('$') << endl;
    cout << '*' << '=' << static_cast<int> ('*') << endl;
    cout << '+' << '=' << static_cast<int> ('+') << endl;
    cout << '/' << '=' << static_cast<int> ('/') << endl;
    return 0;
}

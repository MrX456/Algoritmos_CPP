#include <iostream>

using namespace std;

//Exercicio 2.37

int main()
{
    /*Este programa recebe um numero de 4 digitos e encripta adicionando a cada 
     *digito 7 e mostrando o módulo de 10 de todo valor, o primeiro e o terceiro
     *numeros foram trocados de ordem, assim como o segundo e o quarto, depois
     *o programa devolve o numero original
    */
    
    int first,
        second,
        third,
        fourth,
        number,
        temp,
        encriptado,
        decriptado;
    
    cout << "Digite um inteiro de quatro digitos : ";
    cin >> number;
    
    if((number >= 1000) && (number <= 9999))
    {
        cout << "Codificando..." << endl;
        
        first = (number / 1000 + 7) % 10;
        second = (number % 1000 / 100 + 7) % 10;
        third = (number % 1000 % 100 / 10 + 7) % 10;
        fourth = (number % 1000 % 100 % 10 + 7) % 10;
        
        //Trocando ordem dos números
        temp = first;
        first = third * 1000;
        third = temp * 10;
        
        temp = second;
        second = fourth * 100;
        fourth = temp * 1;
        
        encriptado = first + second + third + fourth;

        cout << "O valor encriptado e : " << encriptado << endl;
        
        cout << "\nDecodoficando..." << endl;
        
        first = encriptado / 1000;
        second = encriptado % 1000 / 100;
        third = encriptado % 1000 % 100 / 10;
        fourth = encriptado % 1000 % 100 % 10;
        
        //Trocando ordem dos números
        temp = (first + 3) % 10;
        first = (third + 3) % 10;
        third = temp;
        
        temp = (second + 3) % 10;
        second = (fourth + 3) % 10;
        fourth = temp;
        
        decriptado = first * 1000 + second * 100 + third * 10 + fourth;
        cout << "O numero decriptado e : " << decriptado << endl;
        
    }
    else
    {
        cout << "Numero invalido" << endl;
    }
    
    return 0;
}
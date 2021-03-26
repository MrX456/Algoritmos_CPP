#include <iostream>

using namespace std;

//Exercicio 2.20

int main()
{
    //Este programa verifica qual maior numero dentro de um conjunto de 10 numeros 
     
     int counter,
         number,
         largest;
         
    cout << "Digite 10 numeros, um por vez." << endl;
         
    for(counter = 1; counter <= 10; counter++)
    {
        cout <<"Numero " << counter << endl;
        cout <<"Digite o numero : ";
        cin >> number;
        
        if(number > largest)
        {
            largest = number;
        }
        
        cout << "\n";
        
    }
    
    cout << "O maior numero do conjunto e " << largest << endl;
    
    return 0;
    
}
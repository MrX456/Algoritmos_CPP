#include <iostream>

using namespace std;

//Exercicio 2.22

int main()
{
    //Este programa verifica quais os dois maiores numeros dentro de um conjunto de 10 numeros 
     
    int counter,
         number,
         largest1,
         largest2;

    cout << "Digite 10 numeros, um por vez." << endl;
         
    for(counter = 1; counter <= 10; counter++)
    {
        cout <<"Numero " << counter << endl;
        cout <<"Digite o numero : ";
        cin >> number;
        
        if(number > largest1)
        {
            
            if(largest1 > largest2)
            {
                largest2  = largest1;
            }
            
            largest1 = number;
        }
        
        if(largest1 >= largest2 && number != largest1)
        {
            
            if(number > largest2)
            {
                largest2 = number;
            }
        }
        
        cout << "\n";
        
    }

    
    cout << "Os maiores numeros do conjunto sao " << largest1 << " e " << largest2 << endl;
    
    return 0;
    
}

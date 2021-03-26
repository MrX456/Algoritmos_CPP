#include <iostream>

using namespace std;

//Exercicio 2.62

int main()
{
    // Este programa mostra como pular uma iteração sem usar o comando continue
    
    int i;
    
    for(i = 1; i <= 10; i++)
    {
        if(i == 4)
        {
            i++;
        }
        
        cout << i << " ";
    }
     
    cout << "\nUsado i++ para pular o valor 4" << endl;
    
    return 0;
}
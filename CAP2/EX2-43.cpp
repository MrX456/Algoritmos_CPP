#include <iostream>

using namespace std;

//Exercicio 2.43 

int main()
{
   /*Este programa recebe um numero que indica o tamanho da sequencia de numeros que sera digitada
    *e depois retorna qual o menor valor desta sequencia
    */
    
    int len,
          n,
     lowest = 0;
        
    cout << "Digite o tamanho da sequencia de numeros que sera digitada [Valor entre 1 e 10] : ";
    cin >> len;
    
    if((len > 0) && (len <= 10))
    {
        for(int i = 1; i <= len; i++)
        {
            cout << "Digite o valor : ";
            cin >> n;
            
            if(i == 1)
            {
                lowest = n;
            }
            
            if(n < lowest)
            {
                lowest = n;
            }
            
        }
    
        cout << "O menor numero da sequencia e " << lowest << endl;
    }
    else
    {
        cout << "Tamanho de sequencia invalida";
    }
        
    return 0;
}

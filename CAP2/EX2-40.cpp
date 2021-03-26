#include <iostream>

using namespace std;

//Exercicio 2.40 

int main()
{
   /*Este programa recebe um numero que indica o tamanho da sequencia de numeros que sera digitada
    *este numeros dessa sequencia serão somados
    */
    
    int len,
          n,
        sum = 0;
        
    cout << "Digite o tamanho da sequencia de numeros que sera digitada [Valor entre 1 e 10] : ";
    cin >> len;
    
    if((len > 0) && (len <= 10))
    {
        for(int i = 1; i <= len; i++)
        {
            cout << "Digite o valor : ";
            cin >> n;
            
            sum += n;
        }
    
        cout << "A soma da sequencia e " << sum << endl;
    }
    else
    {
        cout << "Tamanho de sequencia invalida";
    }
        
    return 0;
}

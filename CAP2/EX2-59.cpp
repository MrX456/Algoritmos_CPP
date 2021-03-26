#include <iostream>

using namespace std;

//Exercicio 2.59

int main()
{
    /* Este programa imprime um losango de tamanho escolhido pelo usuario
     * atraves de um numero impar entre 1 e 19
     */
     
    int tamanho;
    
    cout << "Digite o tamanho do losango(Impar entre 1 e 19) : " << endl;
    cin >> tamanho;
    
    if(((tamanho >= 1) && (tamanho <= 19)) && (tamanho % 2 == 1))
    {
        //cima
        for(int i = 1; i <= tamanho - 2; i += 2)
        {
            for(int spc = (tamanho - i) / 2; spc > 0; spc--)
            {
                cout << " ";    
            }
            
            for(int ast = 1; ast <= i; ast++)
            {
                cout << "*";
            }
            
            cout << endl;
        }
        
        //baixo
        for(int i = tamanho; i >= 0; i -= 2)
        {
            for(int spc = (tamanho - i) / 2; spc > 0; spc--)
            {
                cout << " ";    
            }
            
            for(int ast = 1; ast <= i; ast++)
            {
                cout << "*";
            }
            
            cout << endl;
        }
        
        cout << endl;
    }
    else
    {
        cout << "Tamanho invalido" << endl;
    }

    return 0;
}
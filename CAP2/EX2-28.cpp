#include <iostream>

using namespace std;

//Exercicio 2.28

int main()
{
    
    //Este programa imprime um quadrado de lado especificado pelo usuario

    int lado;
    
    cout << "Digite o tamanho do lado do quadrado : ";
    cin >> lado;
    
    if((lado >= 1) && (lado <= 20))
    {
        for(int row = 0; row < lado; row++)
        {
            for(int col = 0; col < lado; col++)
            {
                //Se não for primeira e ultima coluna e linha
                if((col > 0 && col < lado -1) && (row > 0 && row < lado -1))
                    cout << " ";
                else
                    cout << "*";
            }
            
            cout << "\n";
                
        }
    }
    else
    {
        cout << "Erro! Digite um valor entre 1 e 20" << endl;
    }
    
    return 0;
    
}
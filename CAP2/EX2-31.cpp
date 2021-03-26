#include <iostream>

using namespace std;

//Exercicio 2.31

int main()
{
    
    //Este programa imprime um tabuleiro de damas

    for(int row = 1; row <= 8; row++)
    {
        for(int col = 1; col <= 8; col++)
        {
            
            if((col == 1) && (row % 2 == 0))
            {
                cout << ' ';
            }
            
            cout << "* ";
                
        }
        
        cout << endl;
    }
    return 0;
    
}
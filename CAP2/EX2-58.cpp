#include <iostream>

using namespace std;

//Exercicio 2.58

int main()
{
    //Este programa imprime um losango
    
    //cima
    for(int i = 1; i <= 5; i++)
    {
        for(int spc = 1; spc <= 5 - i; spc++)
        {
            cout << " ";    
        }
        
        for(int ast = 1; ast <= 2 * i - 1; ast++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    //baixo
    for(int i = 4; i >= 1; i--)
    {
        for(int spc = 1; spc <= 5 - i; spc++)
        {
            cout << " ";    
        }
        
        for(int ast = 1; ast <= 2 * i - 1; ast++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    cout << endl;
  
    return 0;
}
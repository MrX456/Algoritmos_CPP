#include <iostream>
#include <cmath>

using namespace std;

//Exercicio 2.8

int main()
{
    //Calcular x elevado a y e usar repetição por sentinela
    int x;
    int y;

    cout << "Digite -1 para sair ou Digite o valor de x : ";
    cin >> x;
    
    if(x != -1)
    {
        cout << "Digite -1 para sair ou Digite o valor de y : ";
        cin >> y;
        
        if(y != -1)
        {
            cout << x << " elevado a " << y << endl;
            cout << pow(x, y) << endl;
            
            while((x != -1) && (y != -1))
            {
                
                cout << "Digite -1 para sair ou Digite o valor de x : ";
                cin >> x;
                
                if(x != -1)
                {
                    cout << "Digite -1 para sair ou Digite o valor de y : ";
                    cin >> y;
                    
                    if(y != -1)
                    {
                        cout << x << " elevado a " << y << endl;
                        cout << pow(x, y) << endl;
                    }
                }
               
            }
        }
    }

    cout << "Programa encerrado!" << endl;
    
    return 0;
}
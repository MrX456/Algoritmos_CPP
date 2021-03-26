#include <iostream>

using namespace std;

//Exercicio 2.21

int main()
{
    /*Este programa imprime uma tabela com a multiplicação dos valores
     * x*10; x*100; x*1000
     */
     
    cout << "N" << "\t10*N" << "\t100*N" << "\t1000*N" << endl;
    
    for(int n = 1; n <= 5; n++)
    {
        cout << n << "\t" << 10 * n
             << "\t" << 100 * n
             << "\t" << 1000 * n << endl;
    }
    
    return 0;
    
}
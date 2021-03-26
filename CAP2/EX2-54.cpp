#include <iostream>
#include <iomanip>

using namespace std;

//Exercicio 2.54

int main()
{
    //Este calcula valor de pi com série de números

    long double pi = 0.0,
           num = 4.0,
           denom = 1.0;
    long precisao = 4;
    
    cout << setiosflags(ios::fixed | ios::showpoint) << "Precisao : " << precisao
         << "\ntermo\t\t  pi\n";
         
    for(long i = 1; i <= precisao; i++)
    {
        if(i % 2 != 0)
        {
            pi += num / denom;
        }
        else
        {
            pi -= num / denom;
        }
        cout << i << "\t\t" << setprecision(8) << pi << "\n";
        denom += 2.0;
    }
    
    cout << endl;
   
    return 0;
}
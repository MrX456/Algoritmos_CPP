#include <iostream>

using namespace std;

//Exercicio 2.55

int main()
{
    //Este calcula as triplas pitagóricas menores que 500(Método de força bruta)

    int count = 0;
    long int hiptQuad,
             ladosQuad;
             
    for(long lado1 = 1; lado1 <= 500; lado1++)
    {
        for(long lado2 = 1; lado2 <= 500; lado2++)
        {
            for(long hipot = 1; hipot <= 500; hipot++)
            {
                hiptQuad = hipot * hipot;
                ladosQuad = (lado1 * lado1) + (lado2 * lado2);
                
                if(hiptQuad == ladosQuad)
                {
                    cout << lado1 << "\t" << lado2 << "\t" << hipot << endl;
                    count++;
                }
            }
        }
    }
    
    cout << "Um total de " << count << " triplas foram encontradas." << endl;
    
    return 0;
}
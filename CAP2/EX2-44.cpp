#include <iostream>

using namespace std;

//Exercicio 2.44 

int main()
{
   //Este programa calcula o produto dos inteiros impares de 1 a 15
   
   int prod = 1;
   
   for(int i = 1; i <= 15; i +=2)
   {
       prod *= i;
   }
   
   cout << "O produto dos impares de 1 a 15 e " << prod << endl;
    
    return 0;
}
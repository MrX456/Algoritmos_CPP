#include <iostream>

using namespace std;

//Exercicio 2.53

int main()
{
    
   /*Este programa imprime uma tabela que contém um número decimal e seus
    * correspondentes em binario, octal, e hexadecimal(até 256)
    */
    
   cout << "Decimal" << "\t\tBinario" << "\t\tOctal" << "\tHexadecimal" << endl;
   
   for(int i = 1; i <= 256; i++)
   {
       cout << dec << i << "\t\t";
       
       //bin
       int num = i;
       cout << (num == 256 ? "1" : "0");
       int fator = 256;
       
       do
       {
           cout << (num < fator && num >= (fator / 2) ? "1" : "0");
           fator /= 2;
           num %= fator;
       } while(fator > 2);
       
       //octal e hexadecimal
       cout << "\t" << oct << i << "\t" << hex << i << endl;
   }
   
    return 0;
}
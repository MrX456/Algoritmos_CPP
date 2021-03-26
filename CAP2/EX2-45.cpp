#include <iostream>

using namespace std;

//Exercicio 2.45 

int main()
{
   //Este programa mostra uma tabela com os fatoriais de 1 a 5
   
   cout << "N" << "\tN!" << endl;
   
   for(int n = 1; n <= 5; n++)
   {
       int fat = 1;
       
       for(int j = 1; j <= n; j++)
       {
           fat *= j;
       }
       
       cout << n << "\t" << fat << endl;
   }

    return 0;
}


#include <iostream>

using namespace std;

//Exercicio 2.47

int main()
{
   //Este programa imprime diversas figuras
   
   //a
   cout << "Figura A" << endl;
   for(int i = 1; i <= 10; i++)
   {
       
       for(int j = 1; j <= i; j++)
       {
           cout << "*";
       }
       
       cout << endl;
   }
   
   //b
   cout << "Figura B" << endl;
   for(int i = 10; i >= 1; i--)
   {
       cout << "*";
       
       for(int j = 1; j < i; j++)
       {
           cout << "*";
       }
       
       cout << endl;
   }
   
   //c
   cout << "Figura C" << endl;
   for(int i = 10; i >= 1; i--)
   {
       for(int spc = 1; spc <= 10 - i; spc++)
       {
           cout << " ";
       }
       
       for(int j = 1; j <= i; j++)
       {
           cout << "*";
       }
       
       cout << "\n";
       
   }
   
   //d
   cout << "Figura D" << endl;
   for(int i = 1; i <= 10; i++)
   {
       for(int spc = 1; spc <= 10 - i; spc++)
       {
           cout << " ";
       }
       
       for(int j = 1; j <= i; j++)
       {
           cout << "*";
       }
       
       cout << "\n";
   }
   
   cout << endl;
   
   return 0;
}

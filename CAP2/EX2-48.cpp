#include <iostream>

using namespace std;

//Exercicio 2.48

int main()
{
   /*Este programa le cinco numeros e para cada um imprime a quantidade
    *correspondente do caracter *
    */
   
   int n,
       c = 0;
       
    cout << "Digite 5 inteiros" << endl;
   
   while(c < 5)
   {
       cout << "Digite um inteiro [Entre 1 e 30]: ";
       cin >> n;
       
       if((n >= 1) && (n <= 30))
       {
           for(int i = 1; i <= n; i++)
           {
               cout << "*";
           }
           
           cout << endl;
           
           c++;
       }
       else 
       {
           cout << "Voce digitou um numero invalido!" << endl;
           break;
       }
   
   }
   
   cout << "Programa encerrado" << endl;
   return 0;
   
}
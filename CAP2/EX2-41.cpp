#include <iostream>

using namespace std;

//Exercicio 2.41 

int main()
{
   /*Este programa recebe uma sequencia de numeros e calcula sua média
    *o laço é encerrado pelo valor sentinela 9999
    */

   int n, soma = 0, counter = 0;
   double media;
   
   cout << "Calcular media de uma sequencia" << endl;
   
   do
   {
       cout << "Digite um inteiro para a sequencia [Digite 9999 para encerrar a sequencia] : ";
       cin >> n;
       
       if(n != 9999)
       {
           soma += n;
           counter++;
       }
       

   } while(n != 9999);
   
   media = (double) soma / counter;
   
   cout << "A media dos valores e " << (double) media << endl;
   
    return 0;
}

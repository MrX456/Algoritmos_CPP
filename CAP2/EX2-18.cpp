#include <iostream>
#include <iomanip>

using namespace std;

//Exercicio 2.18

int main()
{
    /*Este programa calcula quanto uma pessoa que trabalha no departamento de 
     *venddas de uma empresa ganha por semana. Ela ganha $200 + 9% das vendas
     *brutas da semana
     */
     
     float valorVendas;
     float salario;
     
     while(valorVendas != -1)
     {
         cout << "Digite o valor das vendas da semana[-1 para encerrar] :  ";
         cin >> valorVendas;
         
         if(valorVendas != -1 && valorVendas > 1)
         {
             salario = 200.00 + ((float)valorVendas *(9.00/100.00));
             cout << "O valor do salario e " << setiosflags(ios::fixed | ios::showpoint)
                  << setprecision(2) << salario << endl;
         }
     }
    
    return 0;
    
}
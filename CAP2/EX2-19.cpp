#include <iostream>
#include <iomanip>

using namespace std;

//Exercicio 2.19

int main()
{
    /*Este programa calcula o salario de um empregado que recebe um salario hora 
     *normal até 40 hrs trabalhadas e recebe uma vez e meia cada hora excedente
     */
     
     int horasTrabalhadas;
     float valorHora;
     float salario;
     
     while(horasTrabalhadas != -1)
     {
        cout << "Digite as horas trabalhadas[-1 para encerrar] : ";
        cin >> horasTrabalhadas;
        
        if(horasTrabalhadas != -1 && horasTrabalhadas >= 1)
        {
            cout << "Digite o salario-hora (00.00) : R$";
            cin >> valorHora;
            
            if(horasTrabalhadas <= 40)
            {
                salario = (float)(horasTrabalhadas * valorHora);
            }
            else
            {
                int horasExtras = horasTrabalhadas - 40;
                salario = (float)(40 * valorHora) + (float)(horasExtras * (valorHora * 1.5));
            }
            
            cout << "O salario e R$" << setiosflags(ios::fixed | ios::showpoint) 
                 << setprecision(2) << salario << endl;
        }
     }

    return 0;
    
}
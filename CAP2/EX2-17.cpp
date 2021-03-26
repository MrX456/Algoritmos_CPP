#include <iostream>

using namespace std;

//Exercicio 2.17

int main()
{
    /*Este programa recebe como entrada numero da conta, saldo no inicio do mes
     *total de itens comprados no mes, total dos creditos do cliente no mes e 
     *limite de credito permitido e mostra se cliente excedeu o limite de credito
     */
     
     int nmrConta;
     double saldoInicial;
     double debitosTotais;
     double creditosTotais;
     double limiteCredito;
     double novoSaldo;
     
     while(nmrConta != -1)
     {
         cout << "Digite o numero da conta [-1 para sair] : ";
         cin >> nmrConta;
         
         if(nmrConta != -1)
         {
             cout << "Digite o saldo inicial : ";
             cin >> saldoInicial;
             
             cout << "Digite os debitos totais : ";
             cin >> debitosTotais;
             
             cout << "Digite os creditos totais : ";
             cin >> creditosTotais;
             
             cout << "Digite o limite de credito : ";
             cin >> limiteCredito;
             
             novoSaldo = saldoInicial + debitosTotais - creditosTotais;
            
             if(novoSaldo > limiteCredito)
             {
                 cout << "Conta : " << nmrConta << endl;
                 cout << "Limite de credito : " << limiteCredito << endl;
                 cout << "Saldo : " << novoSaldo << endl;
                 cout << "Limte de credito excedido." << endl;
             }
             
             cout << "\n";
             
         }
         
         
     }

    return 0;
    
}
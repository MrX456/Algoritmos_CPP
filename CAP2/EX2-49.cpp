#include <iostream>
#include <iomanip>

using namespace std;

//Exercicio 2.49

int main()
{

   /*Este programa recebe um par de inteiros que representa o código de um produto
    *e as qtde de vendas, é retornado o valor total das vendas informadas do produto
    */
    
    int codigo,
          qtde;
          
    double total = 0.0;
          
    cout << "Codigo" << "\tValor" << endl;
    cout << "1" << "\tR$2.98" << endl;
    cout << "2" << "\tR$4.50" << endl;
    cout << "3" << "\tR$9.98" << endl;
    cout << "4" << "\tR$4.89" << endl;
    cout << "5" << "\tR$6.87" << endl;
    
    cout << "Entre com um par de numeros representando codigo do produto e depois entre com a quantidade vendida[# #]"
         << "[Digite -1 para encerrar]" << endl;
    cin >> codigo;
    
    while(codigo != -1)
    {
        cin >> qtde;
            
        switch (codigo)
        {
            case 1:
                total += qtde * 2.98;
                break;
            case 2:
                total += qtde * 4.50;
                break;
            case 3:
                total += qtde * 9.98;
                break;
            case 4:
                total += qtde * 4.49;
                break;
            case 5:
                total += qtde * 6.87;
                break;
            default:
                cout << "Codigo invalido " << codigo << "\nQuantidade : " << qtde << endl;
                break;
            }
            
            cout << setiosflags(ios::fixed|ios::showpoint) << "O valor total das vendas e "
                 << setprecision(2) << total << endl;
                 
            total = 0.0;
            
            cout << "Entre com um par de numeros representando codigo do produto e depois entre com a quantidade vendida[# #]"
                 << "[Digite -1 para encerrar]" << endl;
            cin >> codigo;
        }
    
    cout << "Programa encerrado" << endl;
    return 0;
   
}
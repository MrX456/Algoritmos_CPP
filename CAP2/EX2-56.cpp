#include <iostream>
#include <iomanip>

using namespace std;

//Exercicio 2.56

int main()
{
    /* Este mostra o pagamento de empregados dependendo do seu código, cada cargo
     * possui um código e salario diferente
     */
    
    int codigo,
        gerentes = 0,
        horistas =  0,
        comissionados = 0,
        tarefeiros = 0,
        tarefas;
    double salarioGerente,
           salarioHorista,
           salarioComissionado,
           salarioTarefeiro,
           horas,
           pagamento;
           
    cout << "Tabela de codigos" << endl;
    cout << "1" << "\tGerente" << endl;
    cout << "2" << "\tHorista" << endl;
    cout << "3" << "\tComissionado" << endl;
    cout << "4" << "\tTarefeiro" << endl;
           
    cout << "Entre com o codigo de pagamento (-1 para sair) : "
         << setiosflags(ios::fixed | ios::showpoint);
    cin >> codigo;
    
    while(codigo != -1)
    {
        switch (codigo)
        {
            case 1:
                cout << "Gerente selecionado"
                << "\nEntre com o salario : ";
                cin >> salarioGerente;
                     
                cout << "O pagamento do gerente e R$"
                    << setprecision(2) << salarioGerente << endl;
                gerentes++;
                break;
                
            case 2:
                cout << "Horista selecionado"
                << "\nEntre com o salario por hora : ";
                cin >> salarioHorista;
                
                cout << "Entre com o total de horas trabalhadas : ";
                cin >> horas;
                
                pagamento = horas > 40 ? (horas - 40) * 1.5 * salarioHorista + salarioHorista * 40.0 :
                                        salarioHorista * horas;
                     
                cout << "O pagamento do horista e R$"
                    << setprecision(2) << pagamento << endl;
                horistas++;
                break;
                
            case 3:
                cout << "Comissionado selecionado"
                << "\nEntre com as vendas semanais brutas : ";
                cin >> salarioComissionado;
                
                pagamento = 250.0 + (0.057 * salarioComissionado);
                     
                cout << "O pagamento do comissionado e R$"
                    << setprecision(2) << pagamento << endl;
                comissionados++;
                break;
                
            case 4:
                cout << "Tarefeiro selecionado"
                << "\nEntre o numero de tarefas realizadas : ";
                cin >> tarefas;
                
                cout << "Entre com o valor pago por tarefa : ";
                cin >> salarioTarefeiro;
                
                pagamento = tarefas * salarioTarefeiro;
                     
                cout << "O pagamento do tarefeiro e R$"
                    << setprecision(2) << pagamento << endl;
                tarefeiros++;
                break;
                
            case -1:
                break;
                
            default:
                cout << "Codigo invalido" << endl;
                break;
            
        }
        
        cout << "Entre com o codigo de pagamento (-1 para sair) : "
              << setiosflags(ios::fixed | ios::showpoint);
        cin >> codigo;
    
    }
    
    cout << "Total de gerentes pagos : " << gerentes << endl;
    cout << "Total de horistas pagos : " << horistas << endl;
    cout << "Total de comissionados pagos : " << comissionados << endl;
    cout << "Total de tarefeiros pagos : " << tarefeiros << endl;
   
    return 0;
}
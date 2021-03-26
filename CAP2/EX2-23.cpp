#include <iostream>

using namespace std;

//Exercicio 2.23

int main()
{
    /*Este programa recebe como entrada a nota de dez alunos e verifica quantos
     *foram aprovados e reprovados
     */
     
    int passes = 0,
        failures = 0,
        studentCounter = 1,
        result;
        
    while(studentCounter <= 10)
    {
        cout << "Forneca o resultado[aprovado = 1 / reprovado = 2] : ";
        cin >> result;
        
        switch (result)
        {
            case 1:
                passes++;
                studentCounter++;
                break;
            case 2:
                failures++;
                studentCounter++;
                break;
            default:
                cout << "Valor invalido, digite novamente! ";
                break;
        }
        
    }
    
    cout << "aprovados : " << passes << endl;
    cout << "reprovados : " << failures << endl;

    return 0;
    
}

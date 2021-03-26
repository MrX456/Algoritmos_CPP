#include <iostream>

using namespace std;

//Exercicio 2.16

int main()
{
    /*Este programa recebe como entrada os quilometros rodados de um carro e os 
     *litros gastos de cada tanque. Exibir km por litros para cada tanque e 
     *depois exibir a média
     */
    double litros ; 
    double quilometros;
    double kmLitro;
    double sum;
    int counter;
    
    while((litros != -1) && (quilometros != -1))
    {
        cout << "Digite os litros usados [-1 para encerrar] : ";
        cin >> litros;
                 
        if(litros != -1)
        {
            cout << "Digite os quilometros rodados [-1 para encerrar] : ";
            cin >> quilometros;
            
            if(quilometros != -1)
            {
                kmLitro = quilometros / litros;
                cout << "Os quilometros/litro para este tanque foram " << kmLitro << endl;
                cout << "\n";
                
                sum += kmLitro;
                counter++;
            }
            
        }
                 
    }
    
    cout << "\n";
    cout << "A media de quilometros/litro foi " << sum / counter << endl;
    
    cout << "Programa encerrado." << endl;
    return 0;
    
}
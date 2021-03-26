#include <iostream>

using namespace std;

//Exercicio 2.50

int main()
{
   /*Este programa recebe as notas de uma turma representada por letras e depois
    *mostra a quantidade de cada nota(A vale 4 pontos, B 3 pontos ...)
    */
    
    char grade;
    int value,
        aCount = 0,
        bCount = 0,
        cCount = 0,
        dCount = 0,
        fCount = 0,
        total = 0,
        sum = 0;
    double media;
    
    cout << "Forneca as notas representada por letras [a,b,c,d,f]"
         << "\nA=4 B=3 C=2 D=1 F=0\n"
         << "Digite q para terminar a entrada dos dados." << endl;
         
    while(grade != 'q')
    {
        cout << "Forneca a nota [Digite 'q' para encerrar] : ";
        cin >> grade;
        
        switch (grade)
        {
            case 'q':
                break;
                
            case 'A':
            case 'a':
                aCount++;
                value = 4;
                sum += value;
                total++;
                break;
                
            case 'B':
            case 'b':
                bCount++;
                value = 3;
                sum += value;
                total++;
                break;
                
            case 'C':
            case 'c':
                cCount++;
                value = 2;
                sum += value;
                total++;
                break;
                
            case 'D':
            case 'd':
                dCount++;
                value = 1;
                sum += value;
                total++;
                break;
                
            case 'F':
            case 'f':
                fCount++;
                value = 0;
                sum += value;
                total++;
                break;
                
            default:
                cout << "Letra invalida." << endl;
                break;
  
        }
    }
    
    cout << "Os totais de cada nota sao : " << endl;
    cout << "A: "<< aCount << endl;
    cout << "B: "<< bCount << endl;
    cout << "C: "<< cCount << endl;
    cout << "D: "<< dCount << endl;
    cout << "F: "<< fCount << endl;
    
    media = (double) sum / total;
    
    cout << "A media da turma e " << media << endl;

    return 0;
}
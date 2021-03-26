#include <iostream>
#include <iomanip>

using namespace std;

//Exercicio 2.38 

int main()
{
    //a-Receber um inteiro e calcular seu fatorial
    int number, fat = 1;
    cout << "Calcular fatorial" << endl;
    cout << "Digite um inteiro positivo (Entre 1 e 10) : ";
    cin >> number;
    
    if((number > 0) && (number < 11)) 
    {
        for(int i = 1; i <= number; i++)
        {
            fat *= i;
        } 
        
        cout << "O fatorial de " << number << " e " << fat << endl;
    }
    else
    {
        cout << "Valor invalido" << endl;
    }
    
    cout << "----------------------------------" << endl;
    
    //b-Estimar valor da constante e
    cout << "Valor da constante matemática e : ";
    
    int n = 0,
        fator = 1,
        accurancy = 10;
    double e = 1;
    
    while(++n < accurancy)
    {
        fator *= n;
        e += 1.0 / fator;
    }
    
    cout << e << endl;
    
    //c-Estimar valor da constante e^x para x = 3
    cout << "Valor da constante matemática e^x: " << endl;
    
    int num = 0,
        precisao = 15,
        x = 3.0,
        times = 0,
        count;
        
    double exponential = 0.0,
           fact = 1.0;
           
    e = 1.0;
           
    while(num++ <= precisao)
    {
        count = num;
        fact *= num == 0 ? 1.0 : num;
        
        while(times < count)
        {
            
            if(times == 0)
            {
                exponential = 1.0;
            }
            
            exponential *= x;
            ++times;
        }
        
        e += exponential / fact;
        
    }
    
    cout << setiosflags(ios::fixed | ios::showpoint) << "e^" << x <<" : "
         << setprecision(4) << e << endl;
    
    return 0;
}
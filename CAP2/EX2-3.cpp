#include <iostream>

using namespace std;

//Exercicio 2.3

int main()
{
    //a-atribuir soma de x e y a z e incrementar x após o calculo
    int x = 1,
        y = 2,
        z = 0;
        
    z = x + y;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout <<"soma x e y = " << z << endl;
    
    ++x;
    
    cout << "x incrementado = " << x << endl;
    
    cout << "============================" << endl;
    
    //b-testar se o valor de counter é maior que 10
    int counter = 11;
    
    if(counter > 10) 
    {
        cout << "counter e maior do que 10" << endl;
    }
    
    cout << "============================" << endl;
    
    //c-decrementar x em 1 e subtrair da variavel total
    cout << "x = " << x << endl;
    int total = 10;
    cout << "total = " << total << endl;
    
    --x;
    cout << "x decrementado = " << x << endl;
    
    total -= x;
    cout << "total - x = " << total << endl;
    
    cout << "============================" << endl;
    
    //d-calcular resto apos q ser por divisor e atribuir resultado a q de dois 
    //modos diferentes
    int q = 3;
    int divisor = 2;
    
    cout << "q = " << q << endl;
    cout << "divisor = " << divisor << endl;
    
    //q = q % divisor;
    q %= divisor;
    cout << "resto q/divisor = " << q << endl;
    
    return 0;
}
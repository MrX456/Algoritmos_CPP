#include <iostream>

using namespace std;

//Exercicio 2.5

int main()
{
    //usar while para somar valores de 1 a 10
    int x,
        sum;

    x = 1;
    sum = 0;

    cout << "Somatorio de 1 a 10" << endl;
    
    while(x <= 10)
    {
        sum += x;
        x++;
    }
    
    cout << sum << endl;
    
    return 0;
}
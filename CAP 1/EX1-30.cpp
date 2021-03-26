#include <iostream>

using namespace std;

//Exercicio 1.30

int main()
{
    //Este programa le 5 inteiros detemina e imprime o maior
    //e o menor valor do grupo
    int a, b, c, d, e;
    cout << "Digite 5 inteiros" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    //maior inteiro
    if(a > b && a > c && a > d && a > e)
    {
        cout << "Maior valor : " << a << endl;
    }
    if(b > a && b > c && b > d && b > e)
    {
        cout << "Maior valor : " << b << endl;
    }
    if(c > a && c > b && c > d && c > e)
    {
        cout << "Maior valor : " << c << endl;
    }
    if(d > a && d > b && d > c && d > e)
    {
        cout << "Maior valor : " << d << endl;
    }
    if(e > a && e > b && e > c && e > d)
    {
        cout << "Maior valor : " << e << endl;
    }

    //menor inteiro
    if(a < b && a < c && a < d && a < e)
    {
        cout << "Menor valor : " << a << endl;
    }
    if(b < a && b < c && b < d && b < e)
    {
        cout << "Menor valor : " << b << endl;
    }
    if(c < a && c < b && c < d && c < e)
    {
        cout << "Menor valor : " << c << endl;
    }
    if(d < a && d < b && d < c && d < e)
    {
        cout << "Menor valor : " << d << endl;
    }
    if(e < a && e < b && e < c && e < d)
    {
        cout << "Menor valor : " << e << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

//Exercicio 1.26

int main()
{
    //Este programa recebe tres inteiros e imprime a soma, a media
    //e o produto entre eles e mostra o menor e o maior
    int x, y, z;

    cout << "Digite tres inteiros diferentes " << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    cout << "A soma e " << x + y + z << endl;
    cout << "A media e " << (x + y + z) / 3 << endl;
    cout << "O produto e " << x * y * z << endl;

    //Verificar menor
    if(x < y && x < z)
        cout << "O menor e " << x << endl;

    if(y < x && y < z)
        cout << "O menor e " << y << endl;

    if(z < x && z < y)
        cout << "O menor e " << z << endl;

    //Verificar maior
    if(x > y && x > z)
        cout << "O maior e " << x << endl;

    if(y > x && y > z)
        cout << "O maior e " << y << endl;

    if(z > x && z > y)
        cout << "O maior e " << z << endl;

    return 0;
}

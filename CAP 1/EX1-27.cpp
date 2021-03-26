#include <iostream>

using namespace std;

//Exercicio 1.27

int main()
{
    //Este programa le um raio de um circulo e calcula o diâmetro
    //area e circunferencia

    int raio;
    const float pi = 3.14159;

    cout << "Digite valor inteiro do raio do circulo" << endl;
    cin >> raio;

    cout << "O diametro e " << raio * 2 << endl;
    cout << "A area e " << pi * (raio * raio) << endl;
    cout << "A circunferencia e " << 2 * pi * raio << endl;

    return 0;
}

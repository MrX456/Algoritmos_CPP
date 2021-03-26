#include <iostream>

using namespace std;

//Exercicio 2.57

int main()
{
    //Leis de Morgan
    
    int x = 10,
        y = 1,
        a = 3,
        b = 3,
        g = 5,
        Y = 1,
        i = 2,
        j = 9;
        
    cout << "O valor das variaveis e "
         << "x " << x << "\n"
         << "y " << y << "\n"
         << "a " << a << "\n"
         << "b " << b << "\n"
         << "g " << g << "\n"
         << "Y " << Y << "\n"
         << "i " << i << "\n"
         << "j " << j << "\n";
    
    //a
    if((!(x < 5) && !(y >= 7)) && (!((x < 5) || (y >= 7))))
    {
        cout << "!(x < 5) && !(y >= 7) equivalente a "
             << "!((x < 5) || (y >= 7))" << endl;
    }
    else
    {
        cout << "!(x < 5) && !(y >= 7) NAO equivalente a "
             << "!((x < 5) || (y >= 7))" << endl;
    }
    
    //b
    if((!(a == b) || !(g != 5)) && (!((a == b) && (g != 5))))
    {
        cout << "!(a == b) || !(g != 5) equivalente a "
             << "!((a == b) && (g != 5))" << endl;
    }
    else
    {
        cout << "!(a == b) || !(g != 5) NAO equivalente a "
             << "!((a == b) && (g != 5))" << endl;
    }

    //c
    if(!((x <= 8) && (Y > 4)) && (!((x <= 8) || (Y > 4))))
    {
        cout << "!((x <= 8) && (Y > 4)) equivalente a "
             << "!((x <= 8) || (Y > 4))" << endl;
    }
    else
    {
        cout << "!((x <= 8) && (Y > 4)) NAO equivalente a "
             << "!((x <= 8) || (Y > 4))" << endl;
    }

    //d
    if(!((i > 4) || (j <= 6)) && !((i > 4) && (j <= 6)))
    {
        cout << "!((i > 4) || (j <= 6)) equivalente a "
             << "!((i > 4) && (j <= 6))" << endl;
    }
    else
    {
        cout << "!((i > 4) || (j <= 6)) NAO equivalente a "
             << "!((i > 4) && (j <= 6))" << endl;
    }
    
    return 0;
}
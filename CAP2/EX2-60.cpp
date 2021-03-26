#include <iostream>

using namespace std;

//Exercicio 2.60

int main()
{
    // Este programa mostra como quebrar um laço sem utilizar o commando break

    bool quebrar = false;
    int i;
    
    for(i = 1; i <= 10 && !quebrar; i++)
    {
        if(i == 4)
        {
            quebrar = true;
        }
        
        cout << i << " ";
    }
     
    cout << "\nLaco foi quebrado em " << i << endl;
    
    return 0;
}
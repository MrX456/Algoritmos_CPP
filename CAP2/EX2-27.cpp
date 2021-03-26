#include <iostream>

using namespace std;

//Exercicio 2.27

int main()
{
    
    int x = 5;
    int y = 8;
    
    
    cout << "Exercicio A" << endl;
    
    // a
    if(x == 5)
        if(y == 8)
        cout << "@@@@@" << endl;
 
    else 
        cout << "#####" << endl;
    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;
    
    cout << "Exercicio B" << endl;
    
    //b
    if(x == 5)
        if(y == 8)
        cout << "@@@@@" << endl;
 
    else
    {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }
    
    cout << "Exercicio C" << endl;
    
    //c
    if(x == 5)
        if(y == 8)
        cout << "@@@@@" << endl;
 
    else 
    {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
    }
    cout << "&&&&&" << endl;
    
    cout << "Exercicio D" << endl;
    
    //d
    y = 7;
    if(x == 5)
        if(y == 8)
        cout << "@@@@@" << endl;
    else
    { 
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }
   
    return 0;
    
}

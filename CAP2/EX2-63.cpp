#include <iostream>

using namespace std;

//Exercicio 2.63

int main()
{
   /*Este programa imprime a canção
    *The Twelve Days of Christmas
    */
    
    for(int day = 1; day <= 12; day++)
    {

        cout << "On the ";
        
        switch (day)
        {
            case 1:
                cout <<  "FIRST";
                break;
                
            case 2:
                cout << "SECOND";
                break;
            
            case 3:
                cout << "THIRD";
                break;
                
            case 4:
                cout << "FOURTH";
                break;
                
            case 5:
                cout << "FIFTH";
                break;
                
            case 6:
                cout << "SIXTH";
                break;
                
            case 7:
                cout << "SEVENTH";
                break;
                
            case 8:
                cout << "EIGHTH";
                break;
                
            case 9:
                cout << "NINETH";
                break;
                
            case 10:
                cout << "TENTH";
                break;
                
            case 11:
                cout << "ELEVENTH";
                break;
                
            case 12:
                cout << "TWELFTH";
                break;
 
        }
        
        cout << " day of Christmas, \nMy true love sent to me: \n";
        
        switch (day)
        {
            case 12:
                cout << "\tTwelve drummers drumming," << endl;
                
            case 11:
                cout << "\tEleven pipers piping" << endl;
                
            case 10:
                cout << "\tTen lords a-leaping," << endl;
                
            case 9:
                cout << "\tNine ladies dancing," << endl;
                
            case 8:
                cout << "\tEight maids a-milking," << endl;
                
            case 7:
                cout << "\tSeven swans a-swimming," << endl;
                
            case 6:
                cout << "\tSix geese a-laying," << endl;
                
            case 5:
                cout << "\tFive golden rings," << endl;
                
            case 4:
                cout << "\tFour calling birds," << endl;
                
            case 3:
                cout << "\tThree French hens," << endl;
                
            case 2:
                cout << "\tTwo turtle doves," << endl;
                
            case 1:
                cout << "\tA partridge in a pear tree.\n\n" << endl;
        }
    }
    
    cout << endl;
   
    return 0;
}
#include<iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositveNumber(string Message)
{
    int Number ;

    do
    {
        cout << Message  << endl ;

        cin >> Number; 
    } while ( Number <= 0);

    return Number;
    
}

int ReverseNumber(int Number)
{
    int Reminder = 0 , Number2 = 0;

    while (Number > 0)
    {
        Reminder = Number % 10 ;
        Number = Number / 10 ;
        Number2 = Number2 * 10 + Reminder;
        
    }
    return Number2 ;
    
}


bool IsPalidromeNumber(int Number  )
{
    if (Number  == ReverseNumber(Number))
    {
        return 1;
    }
    
}




int main ()
{
    

    if (IsPalidromeNumber(ReadPositveNumber(" please enter postive number ?")))
    
     cout << " is palidromeNumber \n";

    else
    cout << " is not palidromenumber \n";
    
        /* code */
    
    


    return 0; 
}
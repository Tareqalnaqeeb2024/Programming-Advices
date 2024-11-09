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

void PrintOrderNumber(int Number)
{
    while (Number > 0)
    {
        int i = 0 ;
        i = Number % 10;
        Number = Number /10;
      
        cout << i <<endl;
        
    }
    
}


int main ()
{
    PrintOrderNumber(ReverseNumber(ReadPositveNumber("please enter positve number ?")));
    return 0;
}
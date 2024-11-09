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


void PrintDigit(int Number)
{
    while (Number > 0)
    {
        int Reminder = 0 ;
        Reminder = Number % 10 ;
        Number = Number / 10 ;
        cout << Reminder <<endl ;
        
    }
    
    
}

int main ()
{
    PrintDigit(ReadPositveNumber("please enter positive number ? \n"));
    return 0 ;
}
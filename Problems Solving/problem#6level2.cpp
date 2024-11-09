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


int PrintSumOfDigits(int Number)
{
    
    int Sum = 0;
    int Reminder = 0 ;
    
    while (Number > 0)
    {
        
        
        Reminder = Number % 10 ;
        Number = Number / 10 ;
        Sum +=  Reminder;
        
    };
        return Sum;
    
}

int main ()
{
   cout<< PrintSumOfDigits(ReadPositveNumber("please enter positive number ? \n"));
    return 0 ;
}
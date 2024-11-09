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


int GetNumberOfFerquncey(int Digits , int Number)
{
    
    int Ferqcount= 0;
    int Reminder = 0 ;
    
    while (Number > 0)
    {
        
        
        Reminder = Number % 10 ;
        Number = Number / 10 ;
        if (Digits == Reminder)
        {
            Ferqcount++;
        }
        
        
    

        
    }
    return Ferqcount ;
        

}

int main ()
{
    int Number= ReadPositveNumber("please enter number ?\n");
    int Digits = ReadPositveNumber("please enter number of Ferquancey ?\n");
   cout << GetNumberOfFerquncey(Digits ,Number);
    return 0 ;
}




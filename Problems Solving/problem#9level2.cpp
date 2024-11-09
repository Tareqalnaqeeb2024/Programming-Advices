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



void PrintALlFerquncey(int Number)
{
    for (int i = 0; i < 10; i++)
    {
        /* code */
        int DigitsFerquncey = 0 ;
        DigitsFerquncey = GetNumberOfFerquncey(i ,  Number);
        if (DigitsFerquncey > 0)
        {
            /* code */cout << " digits"  <<i << "ferquncey " << DigitsFerquncey <<endl;
        }
        
        
    }
    

}

int main ()
{
    int Number= ReadPositveNumber("please enter number ?\n");
     int Digits = ReadPositveNumber("please enter number of Ferquancey ?\n");
   
    PrintALlFerquncey(Number);
    return 0 ;
}




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


void PrintInvertedNumber(int Number)
 {
     for (int i = Number; i >= 1; i--)
     {
         for (int J = i; 0 < J; J--)
         {
             /* code */
              cout << i  ;
         }
        cout << endl ;
     }
     

}


int main()
{
    PrintInvertedNumber(ReadPositveNumber(" please enter positve number ?"));

    return 0;
}
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
     
     for (int i =65; i <= 65 + Number - 1  ; i++)
     {
         for (int J = 1; J <= i - 65  + 1; J++)
         {
             /* code */
              cout << char(i) ;
         }
        cout << endl ;
     }
     

}


int main()
{
    PrintInvertedNumber(ReadPositveNumber(" please enter positve number ?"));

    return 0;
}
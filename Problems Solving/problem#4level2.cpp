
#include<iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadPositveNumber(string Message)
{
    int Number ;

    do
    {
        cout << Message  << endl ;

        cin >> Number; 
    } while ( Number <= 0);

    return Number;
    
}

bool IsPrefectNumber(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        

        Sum +=i;
        
    }
    
    return Number == Sum;
}


void PrintReslut(int  Number)
{
   for (int i= 1 ; i <= Number ; i++ )
   if (IsPrefectNumber(i))
   {
       cout <<i<<endl;
   }
   

}

int main()
{

    PrintReslut(ReadPositveNumber("please enetr a positve number ?"));
    return 0;
}
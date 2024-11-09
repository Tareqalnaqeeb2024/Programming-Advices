#include<iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositveNumber(string Message)
{
    int Number ;

    
        cout << Message  << endl ;

        cin >> Number; 
    

    return Number;
    
}

/* int ReturnToPositveNumber(int Number)
{

    int Count = 0;
    for (int i = Number; i < 0; i++) // may anwers
    {
        Count++;
    }
    return Count;
    
} */
int ReturnToPositveNumber(int Number)
{

   if (Number > 0)
   {
       return Number;
   }
   else
   {
       return Number * -1 ;
   }
   
    
}

int main ()
{
   int Number = ReadPositveNumber(" please enter positive number?");
   cout << " my abs ";

  cout << ReturnToPositveNumber(Number)<<endl;

  cout <<" C++ resulte " ;
  cout <<abs (Number);
    return 0 ;
}

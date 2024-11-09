#include<iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadPositveNumber(string Message)
{
    float Number ;

    
        cout << Message  << endl ;

        cin >> Number; 
    

    return  (float) Number;
    
}




int MyFloor(float Number)
{
   if (Number > 0)
   return int (Number);
   else
   return int (Number) - 1;
}
   
int main ()
{
   float Number = ReadPositveNumber(" please enter positive number?");
   cout << " my Floor ";

  cout << MyFloor(Number)<<endl;

  cout <<" C++ resulte " ;
  cout <<floor (Number);
    return 0 ;
}

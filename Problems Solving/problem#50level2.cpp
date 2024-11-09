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




int MySqrt(float Number)
{
   return pow(Number , 0.5);
}
   
int main ()
{
   float Number = ReadPositveNumber(" please enter positive number?");
   cout << " my Sqrt ";

  cout << MySqrt(Number)<<endl;

  cout <<" C++ resulte " ;
  cout <<sqrt (Number);
    return 0 ;
}

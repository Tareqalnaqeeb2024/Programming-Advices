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



float GetFractionPart(float Number)
{
    return   Number - int (Number)  ;

    
}

int MyRound(float Number)
{
    int InPart ;
    InPart = int (Number);
    float FractinNumber = GetFractionPart(Number);
    if ( abs(FractinNumber ) >= .5 )
    {
        if (Number > 0)
        
        return ++InPart;
        else
        return --InPart;
        
    }
    else
    {
        return InPart;
    }
    
}

int main ()
{
   float Number = ReadPositveNumber(" please enter positive number?");
   cout << " my Round ";

  cout << MyRound(Number)<<endl;

  cout <<" C++ resulte " ;
  cout <<round (Number);
    return 0 ;
}

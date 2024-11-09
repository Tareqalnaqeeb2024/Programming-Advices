#include<iostream>
#include <string>
#include <cmath>
using namespace std;


string RaedPassword()
{
    string PassWord ;
    cout << "please enter password ?\n";
    cin >>PassWord;
    return PassWord;
}

bool GeussLetter(string Password)
{
    string Word =" ";
    int Counter = 0;
    cout <<"\n";
     for (int i =65; i <= 90; i++)
     {
         for (int J =65 ; J <= 90 ; J++)
         {
             
              for (int Z  = 65 ; Z <= 90  ; Z++)
              {
                  Counter++;
                  Word =Word + char(i);
                  Word =Word + char(J);
                  Word =Word + char(Z);
                  cout <<  "trial [" <<Counter << "]"<<  Word<<endl;

                  if (Word == Password)
                  {
                      /* code */
                      cout << "your password is " << Word <<"\n";
                      cout << " found it after "<<Counter<<"trail" <<"\n";
                      return true;
                  }    
                  Word = " ";
              }
              
         }
        
     }
     return false;
     


}

  


int main()
{
   cout<<  GeussLetter(RaedPassword());
    

    return 0;
}
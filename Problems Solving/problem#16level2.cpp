#include<iostream>
#include <string>
#include <cmath>
using namespace std;



void PrintWordsFromAAAToZZZ()
 {
     string Word =" ";
     for (int i =65; i <= 90; i++)
     {
         for (int J =65 ; J <= 90 ; J++)
         {
             
              for (int Z  = 65 ; Z <= 90  ; Z++)
              {
                  Word =Word + char(i);
                  Word =Word + char(J);
                  Word =Word + char(Z);
                  cout << Word <<endl;
                  Word = " ";
              }
              
         }
        cout << endl ;
     }
     

}



int main()
{
     PrintWordsFromAAAToZZZ();
    

    return 0;
}
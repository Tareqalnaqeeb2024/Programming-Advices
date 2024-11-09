#include<iostream>
#include <string>
#include <cmath>
using namespace std;

void FillArry(int arry[100] ,  int& arrylenght)
{
    arrylenght = 10 ; 
    arry[0] = 10 ;
    arry[1] = 20 ;
    arry[2] = 30 ;
    arry[3] = 40 ;
    arry[4] = 50 ;  // Hard Coding 
    arry[5] = 50 ;
    arry[6] = 40 ;
    arry[7] = 30 ;
    arry[8] = 20 ;
    arry[9] = 10 ;

}





void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}


bool IsPalidromeNumber(int arry[100],int arrylength  )
{
   for (int i = 0; i < arrylength; i++)
   {
       if (arry[i] !=arry[arrylength -i -1])
       {
           return 0;
       }
       
   };
   return 1;
   
}





int main()
{
    int arry[100] , arrylength =0 ;
    cout << " arry element ?" <<endl ;


    FillArry(arry ,arrylength);
    PrintArry(arry , arrylength);
    if ( IsPalidromeNumber(arry , arrylength))
    
        cout << " is plidromenumber \n"; 
    else
     
     cout <<" is not plidromnumber\n";


    

   
    
    return 0;
}


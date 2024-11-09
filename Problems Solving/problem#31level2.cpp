#include<iostream>
#include <string>
#include <cmath>
#include<cstdlib>
using namespace std;


int RandomNumber(int From ,int To)
{
    int Random = rand() % (To - From + 1) + From;

    return Random;


}
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
void Swap (int&A ,int&B)
{
    int Temp = 0;
    Temp = A ;
    A = B ;
    B = Temp;
    }

void FillArryWith1toN(int arry[100] , int arrylenght)
{
    
    for (int i = 0 ; i < arrylenght ; i++)
    arry[i ]= i + 1;

}


void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}

 void ShuffleArry(int arry[100] , int arrylenght)
 {
     for (int i = 0; i < arrylenght; i++)
     {
         Swap (arry[RandomNumber(1 , arrylenght) - 1] , arry[RandomNumber(1 , arrylenght ) - 1 ] );
     }
     
 }

 


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] ;
     int arrylenght = ReadPositveNumber("please entr number of arry ?");
     FillArryWith1toN(arry , arrylenght);
     
     cout << " arry element befor shuffl  ";
     PrintArry(arry , arrylenght);
     ShuffleArry(arry , arrylenght);
     cout << " arry element after shuffl ";
     PrintArry(arry , arrylenght);




  
   return 0;
}
#include<iostream>
#include <string>
#include <cmath>
#include<cstdlib>
using namespace std;
enum enPrimeOrNotPrime { Prime = 1 , NotPrime =2};


enPrimeOrNotPrime CheckPrime(int Number)
{
    int M = round (Number / 2);
    for (int counter = 2 ; counter <= M; counter++) // I do not understand it !!!
    {
        if (Number %  counter == 0)
        return enPrimeOrNotPrime::NotPrime;
    }
    return enPrimeOrNotPrime::Prime;

}


int RandomNumber(int From ,int To)
{
    int Random = rand() % (To - From + 1) + From;

    return Random;


}

void FillArryWithRandomNumber(int arry[100] , int& arrylenght)
{
    cout << " enter number of element :\n";
    cin >> arrylenght;
    for (int i = 0 ; i < arrylenght ; i++)
    arry[i ]= RandomNumber(1 , 100);

}


void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}

   void CopyPrimeNumber(int arrySource[100] , int arryDestination[100 ], int arrylenght , int& arrylenght2)
{
     int counter =0;
     for (int i = 0; i < arrylenght; i++)
     {
         if (CheckPrime(arrySource[i] )== enPrimeOrNotPrime::Prime)
         {
             arryDestination[counter] = arrySource[i];
             counter++;
         }
         
         
     }
     arrylenght2 = --counter;
     

}


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght;
     FillArryWithRandomNumber(arry , arrylenght);
     int arry2[100] , arrylenght2= 0;
     cout << " arry element1 ";
     PrintArry(arry , arrylenght);
      CopyPrimeNumber(arry , arry2 ,arrylenght ,arrylenght2 );
     cout << " prime Number ";
     PrintArry(arry2 , arrylenght2);




  
   return 0;
}
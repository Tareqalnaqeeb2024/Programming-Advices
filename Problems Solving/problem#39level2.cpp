
#include<iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeOrNotPrime { Prime = 1 , NotPrime =2};



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

void AddArryElement( int Number, int arry[100] , int& arrylenght )
{
    arrylenght++ ;
    arry[arrylenght - 1] = Number  ;
}


void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}

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
    
   void  CopyPrimeNumberInArry(int arrySource[100] , int arryDestination[100 ], int arrylenght , int& arrylenghtDes)
{
    for (int i = 0; i < arrylenght; i++)
    {
       if (CheckPrime(arrySource[i]) == enPrimeOrNotPrime::Prime)
       {
           /* code */AddArryElement(arrySource[i] , arryDestination ,arrylenghtDes);
       }
       

    }
    
}
    
     


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght = 0 , arrylenght2= 0;
     FillArryWithRandomNumber(arry , arrylenght);
     int arry2[100];
    // CheckPrime(arry[100]);
     CopyPrimeNumberInArry(arry , arry2 ,arrylenght , arrylenght2);  

     cout << " arry element1: ";
     PrintArry(arry , arrylenght);
     cout << " arry of prime number: ";
     PrintArry(arry2 , arrylenght2);




  
   return 0;
}
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

int ReadNumber(string Message)
{
    int Number;
    cout << Message <<endl ;
    cin >> Number ;
    return Number ;

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
int FindNunberInArry(int arry[100] , int Number , int arrylenght )
{
    for (int i = 0; i < arrylenght; i++)
    {
       if (arry[i]== Number)
       return i ;

    }
    return -1 ;
    
    
}

bool IsFoundInArry(int arry[100] , int Number , int arrylenght)
{
    return FindNunberInArry(  arry , Number ,  arrylenght ) != -1 ;
}


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght;
     FillArryWithRandomNumber(arry , arrylenght);
     
     cout << " arry element1 ";
     PrintArry(arry , arrylenght);
     int Number = 0 ; 
     Number = ReadNumber("please enetr the number you looking for ?");

     cout << " the number you looking is " << Number <<endl ;
     
     if (!IsFoundInArry(arry,Number ,arrylenght))
     {
         cout << " is not found it in arry  )-:  " <<endl ;
     }
     else 
     { cout << " the number you looking for is " << Number <<endl ;
         cout << " is found it in arry  :-}"  <<endl ;

     }




  
   return 0;
}
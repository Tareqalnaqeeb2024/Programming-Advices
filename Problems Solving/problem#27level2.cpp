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

int SumNumber(int arry [100] , int arrylenght)
{
    int Sum = 0;
   
    for (int  i = 0; i < arrylenght; i++)
    {
       
           Sum+=arry[i];
        
    }
    
    return Sum;
}

float AvarageNumber(int arry[100], int arrylenght)
{
    return (float) SumNumber(arry ,arrylenght)/arrylenght;
}


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght;
     FillArryWithRandomNumber(arry , arrylenght);
     cout << " arry element ";
     PrintArry(arry , arrylenght);

     cout << " minnumber " ;
     cout << AvarageNumber(arry , arrylenght);



  
   return 0;
}
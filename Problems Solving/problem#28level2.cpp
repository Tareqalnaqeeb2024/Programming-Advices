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

   void CopyArry(int arrySource[100] , int arryDestination[100 ], int arrylenght)
{
    for (int i = 0; i < arrylenght; i++)
    
        arryDestination[i] = arrySource[i];
    
    
     
}


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght;
     FillArryWithRandomNumber(arry , arrylenght);
     int arry2[100];
     cout << " arry element1 ";
     PrintArry(arry , arrylenght);
     CopyArry(arry , arry2 ,arrylenght);
     cout << " arry element2 ";
     PrintArry(arry2 , arrylenght);




  
   return 0;
}
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

int CheckMaxNumber(int arry [100] , int arrylenght)
{
    int Max = 0;
    for (int  i = 0; i < arrylenght; i++)
    {
        if (arry[i ] > Max )
        {
            Max = arry[i];
        }
        
    }
    
    return Max;
}


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght;
     FillArryWithRandomNumber(arry , arrylenght);
     cout << " arry element ";
     PrintArry(arry , arrylenght);

     cout << " maxnumber " ;
     cout << CheckMaxNumber(arry , arrylenght);



  
   return 0;
}
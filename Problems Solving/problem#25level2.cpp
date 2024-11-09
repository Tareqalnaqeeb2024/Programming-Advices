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

int CheckMinNumber(int arry [100] , int arrylenght)
{
    int Min = 0;
    Min = arry[2]; // arry [0 ] or [ any number maybe it ture]
    for (int  i = 0; i < arrylenght; i++)
    {
        if (arry[i ] < Min )
        {
            Min = arry[i];
        }
        
    }
    
    return Min;
}


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght;
     FillArryWithRandomNumber(arry , arrylenght);
     cout << " arry element ";
     PrintArry(arry , arrylenght);

     cout << " minnumber " ;
     cout << CheckMinNumber(arry , arrylenght);



  
   return 0;
}
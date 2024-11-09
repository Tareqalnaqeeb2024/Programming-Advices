#include<iostream>
#include <string>
#include <cmath>
#include<cstdlib>
using namespace std;
// my answer 
/* 
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

int RandomNumber(int From ,int To)
{
    int Random = rand() % (To - From + 1) + From;

    return Random;


}


void ReadArry(int arry[100] , int& arrylenght)
{
    for (int i = 0; i < arrylenght; i++)
    {
        cout << RandomNumber(1 , 100) << " -";
        
        


    }
    

}
 */

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


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] , arrylenght;
     FillArryWithRandomNumber(arry , arrylenght);
     cout << " arry element ";
     PrintArry(arry , arrylenght);



  /*  int arrylenght= ReadPositveNumber("read number of arry :");
   int arry[100];
   cout << " Arry elment ";


   ReadArry(arry , arrylenght); */
   return 0;
}
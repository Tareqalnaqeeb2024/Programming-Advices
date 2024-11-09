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

void FillArryWithRandomNumber(int arry[100] , int arrylenght)
{
    
    {
    for (int i = 0 ; i < arrylenght ; i++)
    arry[i ]= RandomNumber(1 , 100);
    }

}


void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}

 

void SumArry(int arry[100] , int arry2[100] ,  int Sumarry[100],int arrylenght )
{
    for (int i = 0; i < arrylenght; i++)
    
        /* code */
        Sumarry[i] = arry[i] + arry2[i]; 

    
    

}


int main()
{
     srand((unsigned)time(NULL));

     int arry[100] ,arry2[100], arrylenght , Sumarry[100] ;

     arrylenght = ReadPositveNumber("please enter unmber of lenght ?\n");
     
     FillArryWithRandomNumber(arry , arrylenght);
      FillArryWithRandomNumber(arry2 , arrylenght);
      SumArry(arry , arry2 ,Sumarry , arrylenght);
     
     cout << " arry element1 ";
     PrintArry(arry , arrylenght);
     cout << " arry element2 ";
     PrintArry(arry2 , arrylenght);

     cout <<" sum of arrys";
     
     PrintArry(Sumarry , arrylenght);




  
   return 0;
}
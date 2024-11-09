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
    arry[i ]= RandomNumber(-100, 90);

}

void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}


int PositiveNumberCount(int arry[100],int arrylength  )
{
    
    int count = 0;
   for (int i = 0; i < arrylength; i++)
   {
       if (arry[i] > 0)
       {
        count++;


       }
       
   };
        return count;
   
   
}





int main()
{
    int arry[100] , arrylength =0 ;


    FillArryWithRandomNumber(arry ,arrylength);
    cout << " arry element ?" <<endl ;
    PrintArry(arry , arrylength);

     cout << " sum even muner "<< PositiveNumberCount(arry , arrylength)<<endl;
    


    



    

   
    
    return 0;
}


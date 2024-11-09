#include<iostream>
#include <string>
#include <cmath>
using namespace std;

void FillArry(int arry[100] ,  int& arrylenght)
{
    arrylenght = 10 ; 
    arry[0] = 1 ;
    arry[1] = 2 ;
    arry[2] = 3 ;
    arry[3] = 4 ;
    arry[4] = 5 ;  // Hard Coding 
    arry[5] = 6 ;
    arry[6] = 7 ;
    arry[7] = 8 ;
    arry[8] = 8 ;
    arry[9] = 10 ;

}





void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}


int OddCount(int arry[100],int arrylength  )
{
    int SumOdd = 1 ;
    int count;
   for (int i = 0; i < arrylength; i++)
   {
       if (arry[i] % 2 != 0)
       {
        count++;


       }
       
   };
        return count;
   
   
}





int main()
{
    int arry[100] , arrylength =0 ;
    cout << " arry element ?" <<endl ;


    FillArry(arry ,arrylength);
    PrintArry(arry , arrylength);

     cout << " sum odd muner "<< OddCount(arry , arrylength)<<endl;
    


    



    

   
    
    return 0;
}


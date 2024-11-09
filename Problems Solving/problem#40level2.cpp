#include<iostream>
#include <string>
#include <cmath>
using namespace std;

void FillArry(int arry[100] ,  int& arrylenght)
{
    arrylenght = 10 ; 
    arry[0] = 10 ;
    arry[1] = 10 ;
    arry[2] = 10 ;
    arry[3] = 50 ;
    arry[4] = 70 ;  // Hard Coding 
    arry[5] = 70 ;
    arry[6] = 60 ;
    arry[7] = 60 ;
    arry[8] = 80 ;
    arry[9] = 40 ;

}





void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}

short FindArryInPosition(int Number ,int arry[100] , int arrylenght)
{
    
    for (int i = 0; i < arrylenght; i++)
    {
        if (arry[i] == Number)
        
            return i ;
        
        
    }
    return  -1 ;
    
    

}


bool IsNumberInArry(int Number , int arry[100] , int arrylenght)
{
    return FindArryInPosition(Number , arry ,arrylenght) != -1 ;
}

void AddArryElement( int Number, int arry[100] , int& arrylenght )
{
    arrylenght++ ;
    arry[arrylenght - 1] = Number  ;
}

void CopyDistanicNumber(int arry[100] , int arry2[100] , int arrylenght , int& arrylenght2)
{
    for (int i = 0; i < arrylenght; i++)
    {
        if (!IsNumberInArry( arry[i], arry2 , arrylenght2 ))
        {
            AddArryElement(arry[i] , arry2 , arrylenght2);
            
        }
        
    };
    
}
int main ()
{
    int arry[100] , arrylenght =0 , arry2[100] , arrylenght2 = 0;
    cout << " arry element ?" <<endl ;


    FillArry(arry ,arrylenght);
    PrintArry(arry , arrylenght);
    

    CopyDistanicNumber(arry , arry2 , arrylenght , arrylenght2);

    cout << " arry 2 distinct" ;
    PrintArry(arry2 , arrylenght2);

    return 0;
}
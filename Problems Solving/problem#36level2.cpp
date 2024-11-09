#include<iostream>
#include <string>
#include <cmath>
#include<cstdlib>
using namespace std;

int ReadNumber()
{
    int Number =0;
    cout << " please enter number ? " << endl ;
    cin >> Number;
    return Number;
}

void AddArryElement(int Number , int arry[100] , int& arrylenght )
{
    arrylenght++ ;
    arry[arrylenght - 1] = Number ;
}

void InputUserNumberInArry( int arry[100] , int& arrylenght)
{
    bool ReadMore = true ;

    do
    {                                                                              // I dont understand it very will !
        AddArryElement(ReadNumber(),arry , arrylenght);
        cout << " Do  you want to add more arry [0] = no or [1] = yes?" ;
        cin >> ReadMore;
    } while (ReadMore);
    
}
void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}


int main()
{
    int arry[100] , arrylenght =0;
    InputUserNumberInArry(arry , arrylenght);

    cout << "\n Arrt lenght :" << arrylenght <<endl;
    cout << " arry elments";
    PrintArry(arry , arrylenght);

    return 0;
    


}
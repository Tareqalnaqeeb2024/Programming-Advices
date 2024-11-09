#include<iostream>
#include <string>
#include <cmath>
using namespace std;

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



void ReadArray(int arry[100], int& arryLenght )
{
    cout<<" please enetr number of element \n";
    cin >> arryLenght;

    cout << " enter arry element \n ";
    for (int i = 0; i < arryLenght; i++)
    {
        
        cout << " element ["<< i + 1 <<"] : ";
        cin >> arry[i];
    }
    cout << endl ;
    
    


}





void PrintArry(int arry[100] , int arryLenght)
{
    for ( int i= 0 ; i < arryLenght ; i++ )
    cout << arry[i] << " ";

    cout << " \n ";


}

int TimesRepeated(int Number , int arry[100] , int arryLenght)
{
    int count = 0;
    for (int i = 0; i <= arryLenght - 1; i++)
    {
        /* code */
        if (Number == arry[i])
        {
            /* code */
            count++;
        }

        
    }
    return count;
    
}


int main ()
{
    int arry[100] , arryLenght , NumberToCheck;

    ReadArray(arry , arryLenght);

    NumberToCheck = ReadPositveNumber("enter the number you want to check :");

    cout << " Original arry ";
    PrintArry(arry , arryLenght);


    cout << " number "<< NumberToCheck;
    cout << " is repeated " << TimesRepeated(NumberToCheck , arry , arryLenght) << " times\n ";

    return 0;
}
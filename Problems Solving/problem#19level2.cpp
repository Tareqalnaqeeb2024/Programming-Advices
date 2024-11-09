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

int main()
{
    srand((unsigned)time(NULL));

    cout << RandomNumber(1 , 10)<<endl;
    cout << RandomNumber(1 , 10)<<endl;
    cout << RandomNumber(1 , 10)<<endl;



}
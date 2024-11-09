#include<iostream>
#include <string>
#include <cmath>
#include<cstdlib>
using namespace std;

enum enCharType  {Smallletter = 1 , CaptailLetter = 2 , SepcailCharacter = 3 , Digits = 4  };

int RandomNumber(int From ,int To)
{
    int Random = rand() % (To - From + 1) + From;

    return Random;


}


char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
        case enCharType::Smallletter:
        {
        return char(RandomNumber(97 , 122));
        break;
        }
        case enCharType::CaptailLetter:
        {
        return char(RandomNumber(65 , 90));
        break;
        }
        case enCharType::SepcailCharacter:
        {
        return char(RandomNumber(33, 47));
        break;
        }
        case enCharType::Digits:
        {
        return char(RandomNumber(48 , 57));
        break;
        }
   
    }
}


int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::CaptailLetter)<<endl;
    cout << GetRandomCharacter(enCharType::Smallletter)<<endl;
    cout << GetRandomCharacter(enCharType::SepcailCharacter)<<endl;
    cout << GetRandomCharacter(enCharType::Digits)<<endl;
    return 0;
}
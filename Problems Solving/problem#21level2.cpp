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

string GenerateWord(enCharType CharType , short lenght)
{
    string Word;
    for (int i = 0; i < lenght; i++)

    {
        Word = Word + GetRandomCharacter(enCharType::CaptailLetter);
    }
    return Word;
    
}

string GenerateKey()
{
    string Key = " " ;
    Key = GenerateWord(enCharType::CaptailLetter , 4) + " -";
    Key += GenerateWord(enCharType::CaptailLetter , 4) + " -";
    Key += GenerateWord( enCharType::CaptailLetter , 4) + " -";
    Key += GenerateWord( enCharType::CaptailLetter , 4) ;
    

    return Key;

}

void GenerateKeys(short NumbersOfKeys)
{
    for (int i = 1; i <= NumbersOfKeys; i++)
    {
        /* code */
        cout << " key of [" << i << " ]" ;
        cout << GenerateKey()<<endl;
    }
    
}


int main()
{
    srand((unsigned)time(NULL));

   GenerateKeys(ReadPositveNumber(" please enetr of keys ?"));
    return 0;
}
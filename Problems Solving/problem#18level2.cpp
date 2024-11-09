#include<iostream>
#include <string>
#include <cmath>
using namespace std;


string RaedTeaxt()
{
    string Text ;
    cout << "please enter text ?\n";
    getline (cin ,Text);
    return Text;
}

string EcroyptTex(string Text , short EncropationKey)
{
    for (int i = 0; i < Text.length(); i++)
    {
        /* code */
        Text[i] =  char((int) Text[i] + EncropationKey);
    }
    return Text;
    
}


string DecroptText(string Encropt, short EcropationKey)
{
    for (int i = 0; i < Encropt.length(); i++)
    {
        /* code */
        Encropt[i] = char ((int) Encropt[i] - EcropationKey);
    }
    return Encropt;
    
}




int main ()
{

    string Text = RaedTeaxt ();

    const short EcropationKey = 2 ;

    string Encropt = EcroyptTex(Text ,EcropationKey);
    string Decropt = DecroptText(Encropt ,EcropationKey);

    cout << " name befor encroptaion " <<Text <<endl ;
    cout << " name in encroptaion " <<Encropt<<endl;
    cout << " name after decroptaion " <<Decropt<<endl;
    return 0 ;
}
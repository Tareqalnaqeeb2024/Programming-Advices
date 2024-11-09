

#include<iostream>
#include <string>
#include <cmath>
#include<cstdlib>
using namespace std;


enum enQuestionLevel {Easy = 1 ,  Mid =3 , Hard=4 , Mix = 4 };

enum enOpartionType {Add = 1 , Sub = 2 , Divid = 3 , Mutable = 4 , MixOp=5 };

struct stQuestion

{
    int Number1= 0;
    int Number2= 0;
    enQuestionLevel QuestionLevel ;
    enOpartionType OparetionType ;
    int CorrectAnswer = 0;
    int PlayerAnaswer = 0;
    bool AnswerReslute = false;

};

struct  stQuizz
{
stQuestion QuastionList[100];
short NumberOfQuestion;
enQuestionLevel QuestionLevel ;
enOpartionType OperType ;
short NumberOfWorngsAnswers = 0;
short NumberOfCorrectAnswers = 0;
bool Reslute = 0;



};




int RandomNumber(int From , int To)
{
  
 int  random = rand() % (To - From + 1 ) + From ;
  return random;
}

int ReadHowManyQusition()
{
  int Round;
  do
  {
    cout << " how many round do you want to do ? ";
    cin >>Round;
  } while (Round < 1 || Round > 10);
  return Round;
  
  }
enQuestionLevel ReadLevelChoice()
{
  int Choice = 0;
  do
  {
  cout << " Enter Question Level [1] Easy , [2] Med , [3] Hard , [4]Mix? ";
  
  cin >>Choice;
  } while (Choice < 1|| Choice > 4);
  

  return (enQuestionLevel) Choice;
}

enOpartionType ReadOpType()
{
    int Choice = 0;
  do
  {
  cout << " Enter Opeartion type [1] Add , [2] ,Sub, [3]Mul, [4] Div, [5]Mix?  \n";
  
  cin >>Choice;
  } while (Choice < 1|| Choice > 5);
  

  return (enOpartionType) Choice;
}



enOpartionType GetRandomOpartionType()
{
  int Op = RandomNumber(1,4);
  return (enOpartionType)Op;
  }

string GetOpartionSymble(enOpartionType OpType)
{
   switch (OpType)
    {
    case enOpartionType::Add:
      return "+";
    case enOpartionType::Sub:
      return " -";
    case enOpartionType::Mutable:
      return " *";
    case enOpartionType::Divid:
      return " /";
    
    default:
     return "Mix";

        
    }
  
}
string GetQustionLeveText(enQuestionLevel Level)
{
  string arryText[4]= { " easye" , " Med" , " Hard" , " Mix"} ;
  return arryText[Level - 1];
}
int SimpleCalculte(int Num1 , int Num2 , enOpartionType OperType)
{
  switch (OperType)
  {
  case enOpartionType::Add:
  return Num1 + Num2 ;
  case enOpartionType::Sub:
  return Num1 - Num2 ;
  case enOpartionType::Mutable:
  return Num1 * Num2 ;
  case enOpartionType::Divid:
  return Num1 / Num2 ;
   
    
  
  default:
   return Num1 + Num2 ;
    
  }
}



stQuestion GenerateQusition(enQuestionLevel Level , enOpartionType OpType)
{
  stQuestion Qustion;
  if (Level == enQuestionLevel::Mix)
  {
    Level =(enQuestionLevel)RandomNumber(1,3);
  } 
  if (OpType == enOpartionType::MixOp)
  {
    OpType = GetRandomOpartionType();
  }
  Qustion.OparetionType=OpType;

switch (Level)
{
  case enQuestionLevel::Easy:
  Qustion.Number1 = RandomNumber(1,10);
  Qustion.Number2 = RandomNumber(1,10);
  Qustion.CorrectAnswer=SimpleCalculte(Qustion.Number1,Qustion.Number2,Qustion.OparetionType);
  Qustion.QuestionLevel=Level;
  return Qustion;
  case enQuestionLevel::Mid:
  Qustion.Number1 = RandomNumber(10,50);
  Qustion.Number2 = RandomNumber(10,50);
  Qustion.CorrectAnswer=SimpleCalculte(Qustion.Number1,Qustion.Number2,Qustion.OparetionType);
  Qustion.QuestionLevel=Level;
  return Qustion;
  case enQuestionLevel::Hard:
  Qustion.Number1 = RandomNumber(50,100);
  Qustion.Number2 = RandomNumber(50,100);
  Qustion.CorrectAnswer=SimpleCalculte(Qustion.Number1,Qustion.Number2,Qustion.OparetionType);
  Qustion.QuestionLevel=Level;
  return Qustion;

  
}
return Qustion;
  
  
  
}

void GenerateQuizzQusetion(stQuizz& Quizz)
{
  for ( int Qusetion = 0; Qusetion < Quizz.NumberOfQuestion; Qusetion++)

  {
    Quizz.QuastionList[Qusetion]= GenerateQusition(Quizz.QuestionLevel,Quizz.OperType);
  }
  
}

int ReadPlayerAnswer()
{
  int Answer=0;
  cin>>Answer;
  return Answer;
  
}

void PrintTheQuestion(stQuizz& Quizz, short NumberQuestion)
{
  cout<<"\n";
  cout<<"Question["<<NumberQuestion + 1 <<"/"<<Quizz.NumberOfQuestion<<"]\n\n";
  cout <<Quizz.QuastionList[NumberQuestion].Number1<<endl;
  cout <<Quizz.QuastionList[NumberQuestion].Number2<<" ";
  cout <<GetOpartionSymble(Quizz.QuastionList[NumberQuestion].OparetionType);
  cout <<"_____";
}

void CorrectTheRightAnswer(stQuizz& Quizz , short QuestionNumber)
{
  if (Quizz.QuastionList[QuestionNumber].PlayerAnaswer != Quizz.QuastionList[QuestionNumber].CorrectAnswer)
  {
    Quizz.QuastionList[QuestionNumber].AnswerReslute=false;
    Quizz.NumberOfWorngsAnswers++;

    cout << " worng anwser :. (\n";
    cout <<"the right answer is  " <<Quizz.QuastionList[QuestionNumber].CorrectAnswer<<endl;
    cout <<"\n";
    
  }

  else
  {
    Quizz.QuastionList[QuestionNumber].AnswerReslute=true;
    Quizz.NumberOfCorrectAnswers++;
    cout <<" right anwser ;-)";


  }
  cout << endl;
  
}

void AskAndCorrectQusitonAnswer(stQuizz& Quizz )
{
  for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestion; QuestionNumber++)
  {
    PrintTheQuestion(Quizz ,QuestionNumber);
    Quizz.QuastionList[QuestionNumber].PlayerAnaswer = ReadPlayerAnswer();
    CorrectTheRightAnswer(Quizz,QuestionNumber);
  }
  
}





void ReadyToPlay()
{
  stQuizz Quizz;
  Quizz.NumberOfQuestion=ReadHowManyQusition();
  Quizz.QuestionLevel=ReadLevelChoice();
  Quizz.OperType=ReadOpType();
  GenerateQuizzQusetion(Quizz);
  AskAndCorrectQusitonAnswer(Quizz);
}

void Game()
{

    char C = 'y';
  do
  {
    ReadyToPlay();
  cout << "Do you want to play again ";
  cin >>C;
    
  } while (C == 'y' ||  C == 'Y' );
  
  

}


int main()
{
     srand((unsigned)time(NULL));
      
   Game();
     
  
   return 0;
}
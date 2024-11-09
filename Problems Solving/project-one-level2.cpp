

#include<iostream>
#include <string>
#include <cmath>
#include<cstdlib>
using namespace std;

enum enGamesChoices { paper = 1 , stone = 2 , seciosser = 3 };
enum enWinners {Player1 = 1 , Computer = 2 , Draw = 3};


struct  stRoundInfo 
{
    short RoundNumber =0 ;
    enGamesChoices Player1Choice;
    enGamesChoices ComputerChoice;
    enWinners Winner;
    string WinnerName;

};

struct  stGameResulte 
{
  short GamesRound =0;
  short PlayerwinsTimes = 0 ;
  short ComputerwinsTimes = 0;
  short DrawingTimes = 0 ;
  enWinners GameWinner ;
  string WinnerName = "" ;
};




int RandomNumber(int From , int To)
{
  
 int  random = rand() % (To - From + 1 ) + From ;
  return random;
}
short HowManyRound()
{
  short Round= 1;
  do
  {
    cout << " how many round do you want to do ? ";
    cin >>Round;
  } while (Round < 1 || Round > 10);
  return Round;
  
  }
enGamesChoices ReadPaylerChoice()
{
  int Choice = 1;
  do
  {
  cout << " enter your coice:[1] paper [2] stone [3]sessiores  ";
  
  cin >>Choice;
  } while (Choice < 1|| Choice > 3);
  

  return (enGamesChoices) Choice;
}

enGamesChoices ReadComputerChoice()
{
  return (enGamesChoices)RandomNumber(1,3);
}

string WinnerName (enWinners Winner)
{
  string arrWinnerName[3] = {"Player" , " Computer" , " Draw"};
  return arrWinnerName[Winner - 1];
}
string ChoiceName (enGamesChoices Choice)
{
  string arrNameChocie[3]= {"paper " , " stone" , "seciossers"};
  return arrNameChocie[Choice - 1];
}
enWinners WhoWonRound (stRoundInfo RoundInfo)
{
  if (RoundInfo.ComputerChoice == RoundInfo.Player1Choice)
   {
    return enWinners::Draw;
   }
  switch (RoundInfo.Player1Choice)
   {
   case enGamesChoices::stone:
   if (RoundInfo.ComputerChoice == enGamesChoices::paper)
   {
    return enWinners::Computer;
    
   }
    break;
  case enGamesChoices::paper:
  if (RoundInfo.ComputerChoice == enGamesChoices::seciosser)
   {
    return enWinners::Computer;
    
   }
   break;
   case enGamesChoices::seciosser:
   if (RoundInfo.ComputerChoice == enGamesChoices::stone)
  {
    return enWinners::Computer;
    
  }
    break;
  }
  return enWinners::Player1;
  
}


void PrintResulteRound(stRoundInfo RoundInfo)

{

  cout << " round number" << RoundInfo.RoundNumber <<endl;
  cout << " player choices " <<ChoiceName (RoundInfo.Player1Choice)<<endl;
  cout << " computer choices" <<ChoiceName (RoundInfo.ComputerChoice)<<endl;
  cout << "winner name " << RoundInfo.WinnerName<<endl;
  //cout << " Winner " << RoundInfo.Winner<<endl ;
 // SetColorInScraan(RoundInfo.Winner);
}

enWinners WhoWonTheGame(short playerwins , short pcwins)

{
  if (playerwins > pcwins)
  
    return enWinners::Player1;
  
  else if (pcwins > playerwins)
  
    return enWinners::Computer;
  
  else
  
    return enWinners::Draw;
  
  
}

stGameResulte FillGameResulte (int GameRound , short playerwins ,short pcwins, short Drawing)
{
  stGameResulte GameResulte ;
  GameResulte.GamesRound=GameRound;
  GameResulte.PlayerwinsTimes=playerwins;
  GameResulte.ComputerwinsTimes=pcwins;
  GameResulte.DrawingTimes=Drawing;
  GameResulte.GameWinner=WhoWonTheGame(playerwins ,pcwins );
  GameResulte.WinnerName=WinnerName(GameResulte.GameWinner);
  return GameResulte;

}

stGameResulte PlayGame(short HowManyRound)
{
  stRoundInfo RoundInfo;
  short playerwins=0 ,  pcwins=0 , Drawing=0 ;
  for (short GameRound = 1; GameRound <= HowManyRound; GameRound++)
  {
    cout << " Round Info [" << GameRound << " ]" << endl ;
    RoundInfo.RoundNumber=GameRound;
    RoundInfo.Player1Choice=ReadPaylerChoice();
    RoundInfo.ComputerChoice=ReadComputerChoice();
    RoundInfo.Winner=WhoWonRound(RoundInfo);
    RoundInfo.WinnerName=WinnerName(RoundInfo.Winner);

    if (RoundInfo.Winner == enWinners::Player1)
    
      /* code */ playerwins++;
    
    else if (RoundInfo.Winner == enWinners::Computer)
    
      /* code */pcwins++;
    
    else
    
      Drawing++;
    
    PrintResulteRound(RoundInfo);
    
  }

  return FillGameResulte(HowManyRound , playerwins , pcwins , Drawing);
  
}
string Tabs(int HowManyTabs)
{
  string t = " ";

  for (int i = 1; i < HowManyTabs; i++)
  {
    t = t + " \t";
    cout << t ;
  }

  return t;
  
}


void ShowGameOverScraan()
{
  cout << Tabs(2) << "____________________________________________\n";
  cout << Tabs(2)<<"            GameOver \n";
  cout << Tabs(2)<<" ______________________________________________\n";
}


void ShowFinalGameReslute(stGameResulte GameResulte)
{
  cout << Tabs(2) << "GameResulte \n";
  cout << Tabs(2) << " Game Round " << GameResulte.GamesRound <<endl;
  cout <<Tabs(2) <<" Player1 wins times" << GameResulte.PlayerwinsTimes<<endl;
  cout << Tabs(2) << " Computer Wins  times " <<GameResulte.ComputerwinsTimes<<endl;
  cout <<Tabs(2) <<" Drwing " <<GameResulte.DrawingTimes<<endl;
  cout << Tabs(2)<<" winner " << GameResulte.WinnerName<<endl;
  cout <<Tabs(2) <<"__________________"<<endl;

  //SetColorInScraan(GameResulte.GameWinner);
}



void StartGame()
{
  char PlayAgain='y';
  do
  {
    //ResetScreen();
    stGameResulte GameResulte = PlayGame(HowManyRound());
    ShowGameOverScraan();
    ShowFinalGameReslute(GameResulte);
    cout << endl << Tabs(2) <<" Do you want to play again ? " <<endl;
    cin>>PlayAgain;
  } while (PlayAgain == 'y' || PlayAgain== 'Y');
  
}


int main()
{
     srand((unsigned)time(NULL));
     StartGame();
  
   return 0;
}
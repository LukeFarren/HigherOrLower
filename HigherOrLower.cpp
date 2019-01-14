#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <time.h>
using namespace std;

int main() 
{
  int computerDice;
  int playerDice;
  char choice;

  cout << "Welcome to this dice throwing game higher or lower ";
  cout << endl;

  {
    srand (time(NULL));
    computerDice = rand() % 6 + 1;
    
    srand (time_t(rand()));
    PlayersDice = rand() % 6 + 1;

    cout << "The dice rolled -" << computerDice << endl;
    cout << endl;
    cout << "Please enter Higher or Lower (h/l) -" endl;
    cin >> choice;

    
    if (choice == 'h' || choice == 'l') 
      {
        cout << " Player rolled -" << playerDice << endl;
        if (choice == 'h') 
        {
            if (playerDice<computerDice)
              { 
                cout << "Loss";
              }
            else if (playerDice==computerDice)
              {
                cout << "Draw";
              }
            else if (playerDice>computerDice)
              {
                cout << "Win";
              }
        } 

   if (choice == 'l') 
        {
            if (playerDice<computerDice)
              { 
                cout << "Loss";
              }
            else if (playerDice==computerDice)
              {
                cout << "Draw";
              }
            else if (playerDice>computerDice)
              {
                cout << "Win";
              }
        } 
    }
}
 return 0
}
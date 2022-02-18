//
//  main.cpp
//  Rock Paper Scissors Lizard Spock between two users
//
//  Created by Edimah Songo on 18/02/2022.
//

/* Rock, Papers, Scissors, Lizard, Spock :
Scissors cuts paper,
Paper covers rock,
Rock crushes lizard,
Lizard poisons Spock,
Spock smashes scissors,
Scissors decaptites lizard,
Lizard eats paper,
Papers disproves Spock,
Spock vaporises rock,
Rock crushes scissors. */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  // Initialising variables : rock, paper, scissors are integers between 1 and 3
  int user1;
  int user2;

  // User prompt

  cout << "Rock, Paper, Scissors...\n";
  cout << "1 for Rock\n";
  cout << "2 for Paper\n";
  cout << "3 for Scissors\n";
  cout << "4 for Lizard\n";
  cout << "5 for Spock\n";

  // User 1 input
  cout << "User 1. Your choice : ";
  cin >> user1;
  while(user1 != 1 && user1 != 2 && user1 != 3 && user1 != 4 && user1 != 5){
    cout << "Incorrect input. Must be integer between 1 and 5. Try again : ";
    cin >> user1;
  }
    
  // User 2  input
  cout << "User 2. Your choice : ";
  cin >> user2;
  while(user2 != 1 && user2 != 2 && user2 != 3 && user2 != 4 && user2 != 5){
    cout << "Incorrect input. Must be integer between 1 and 5. Try again : ";
    cin >> user2;
  }
    
 // Conditions
    if(user1 == 1){
        cout << "User 1 played Rock.\n";
        switch(user2){
          case 1 : // Rock
            cout << "It's a tie.\n";
            break;
          case 2 : // Paper
            cout << "Paper covers Rock.\n";
            cout << "User 2  wins!\n";
            break;
          case 3 : // Scissors
            cout << "Rock crushes Scissors.\n";
            cout << "User 1 wins !\n";
            break;
          case 4 : // Lizard
            cout << "Rock crushes Lizard.\n";
            cout << "User 1 wins !\n";
            break;
          default : // Spock
            cout << "Spock vaporises Rock.\n";
            cout << "User 2  wins !\n";
        }
      }
      else if(user1 == 2){
        cout << "User 1 played Paper.\n";
        switch(user2){
          case 1 : // Rock
            cout << "Paper covers Rock.\n";
            cout << "User 1 wins !\n";
            break;
          case 2 : // Paper
            cout << "It's a tie.\n";
            break;
          case 3 : // Scissors
            cout << "Scissors cuts Paper.\n";
            cout << "User 2  wins !\n";
            break;
          case 4 : // Lizard
            cout << "Lizard eats paper.\n";
            cout << "User 2  wins !\n";
            break;
          default : // Spock
            cout << "Paper disproves Spock.\n";
            cout << "User 1 wins !\n";
        }
      }
      else if (user1 == 3) {
        cout << "User 1 played Scissors.\n";
        switch(user2){
          case 1 : // Rock
            cout << "Rock cruses Scissors.\n";
            cout << "User 2  wins !\n";
            break;
          case 2 : // Paper
            cout << "Scissors cuts Paper.\n";
            cout << "User 1 wins !\n";
            break;
          case 3 : // Scissors
            cout << "It's a tie.\n";
            break;
          case 4 : // Lizard
            cout << "Scissors decapitate Lizard.\n";
            cout << "User 1 wins !\n";
            break;
          default : // Spock
            cout << "Spock smashes Scissors.\n";
            cout << "User 2  wins !\n";
        }
      }
      else if (user1 == 4) {
        cout << "User 1 played Lizard.\n";
        switch(user2){
          case 1 : // Rock
            cout << "Rock cruses Lizard.\n";
            cout << "User 2  wins !\n";
            break;
          case 2 : // Paper
            cout << "Lizard eats Paper.\n";
            cout << "User 1 wins !\n";
            break;
          case 3 : // Scissors
            cout << "Scissors decapitate Lizard.\n";
            cout << "User 2  wins !\n";
            break;
          case 4 : // Lizard
            cout << "It's a tie.\n";
            break;
          default : // Spock
            cout << "Lizard poisons Spock.\n";
            cout << "User 1 wins !\n";
        }
      }
    else {
        cout << "User 1 played Spock.\n";
        switch(user2){
          case 1 : // Rock
            cout << "Spock vaporises Rock.\n";
            cout << "User 1 wins !\n";
            break;
          case 2 : // Paper
            cout << "Paper disproves Spock.\n";
            cout << "User 2  wins !\n";
            break;
          case 3 : // Scissors
            cout << "Spock smashes Scissors.\n";
            cout << "User 1 wins !\n";
            break;
          case 4 : // Lizard
            cout << "Lizard poisons Spock.\n";
            cout << "User 2  wins !\n";
            break;
          default : // Spock
            cout << "It's a tie.\n";
        }
    }
}

//
//  main.cpp
//  Rock Paper Scissors Lizard Spock
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
  
  // Initialising AI & user
  // Integers between 1 and 5
  int AI = rand() % 5 + 1;
  int user;

  // User prompt

  cout << "Rock, Paper, Scissors...\n";
  cout << "1 for Rock\n";
  cout << "2 for Paper\n";
  cout << "3 for Scissors\n";
  cout << "4 for Lizard\n";
  cout << "5 for Spock\n";

  // User input
  cout << "Your choice : ";
  cin >> user;
  while(user != 1 && user != 2 && user != 3 && user != 4 && user != 5){
    cout << "Incorrect input. Must be integer between 1 and 5. Try again : ";
    cin >> user;
  }
    
 // Conditions
    if(AI == 1){
        cout << "AI played Rock.\n";
        switch(user){
          case 1 : // Rock
            cout << "It's a tie.\n";
            break;
          case 2 : // Paper
            cout << "Paper covers Rock.\n";
            cout << "You win !\n";
            break;
          case 3 : // Scissors
            cout << "Rock crushes Scissors.\n";
            cout << "AI wins.\n";
            break;
          case 4 : // Lizard
            cout << "Rock crushes Lizard.\n";
            cout << "AI wins.\n";
            break;
          default : // Spock
            cout << "Spock vaporises Rock.\n";
            cout << "You win !\n";
        }
      }
      else if(AI == 2){
        cout << "AI played Paper.\n";
        switch(user){
          case 1 : // Rock
            cout << "Paper covers Rock.\n";
            cout << "AI wins.\n";
            break;
          case 2 : // Paper
            cout << "It's a tie.\n";
            break;
          case 3 : // Scissors
            cout << "Scissors cuts Paper.\n";
            cout << "You win !\n";
            break;
          case 4 : // Lizard
            cout << "Lizard eats paper.\n";
            cout << "You win !\n";
            break;
          default : // Spock
            cout << "Paper disproves Spock.\n";
            cout << "AI wins.\n";
        }
      }
      else if (AI == 3) {
        cout << "AI played Scissors.\n";
        switch(user){
          case 1 : // Rock
            cout << "Rock cruses Scissors.\n";
            cout << "You win !\n";
            break;
          case 2 : // Paper
            cout << "Scissors cuts Paper.\n";
            cout << "AI wins.\n";
            break;
          case 3 : // Scissors
            cout << "It's a tie.\n";
            break;
          case 4 : // Lizard
            cout << "Scissors decapitate Lizard.\n";
            cout << "AI wins.\n";
            break;
          default : // Spock
            cout << "Spock smashes Scissors.\n";
            cout << "You win !\n";
        }
      }
      else if (AI == 4) {
        cout << "AI played Lizard.\n";
        switch(user){
          case 1 : // Rock
            cout << "Rock cruses Lizard.\n";
            cout << "You win !\n";
            break;
          case 2 : // Paper
            cout << "Lizard eats Paper.\n";
            cout << "AI wins.\n";
            break;
          case 3 : // Scissors
            cout << "Scissors decapitate Lizard.\n";
            cout << "You win !\n";
            break;
          case 4 : // Lizard
            cout << "It's a tie.\n";
            break;
          default : // Spock
            cout << "Lizard poisons Spock.\n";
            cout << "AI wins.\n";
        }
      }
    else {
        cout << "AI played Spock.\n";
        switch(user){
          case 1 : // Rock
            cout << "Spock vaporises Rock.\n";
            cout << "AI wins.\n";
            break;
          case 2 : // Paper
            cout << "Paper disproves Spock.\n";
            cout << "You win !\n";
            break;
          case 3 : // Scissors
            cout << "Spock smashes Scissors.\n";
            cout << "AI wins.\n";
            break;
          case 4 : // Lizard
            cout << "Lizard poisons Spock.\n";
            cout << "You win !\n";
            break;
          default : // Spock
            cout << "It's a tie.\n";
        }
    }
}

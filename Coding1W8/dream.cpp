#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

void storyTime() {
  cout << "Narrator: Ah, you're finally awake.\n";
  cout << "Narrator: You find yourself in an unfamiliar place, \nbut you have "
          "the urge to seek adventure and treasure.\n";
}
void storyTime(string message) { cout << message << "\n"; }

void ending() {
  cout << "Narrator: Your vision suddenly goes black, then you wake up on your "
          "bed. \nNarrator: You hear your mom tell you to take out the trash. \n";
}
void ending(string message) { cout << message << "\n"; }

int rollDie(int sides = 6) {
  int roll = rand() % sides + 1;
  return roll;
}

bool askYN(string question) {
  while (true) {
    cout << question << "(y/n)\n";
    char input;
    cin >> input;

    if (input == 'y' || input == 'Y') {
      return true;
    } else if (input == 'n' || input == 'N') {
      return false;
    }
  } // end of while(true) loop
} // end of askYN() function

int main() {
  srand(time(0));
  //  welcome the player
  storyTime();
  // set up the game
  bool debug(true);
  // int health = 10, attack, block, turns = 0
  int health = 5 + rand() % 10;
  int attack = 0;
  int block = 0;
  int turns = 0;
  int totalTurns = rand() % 4 + 4;
  int treasure = 0;
  int totalTreasure = 0 + treasure;

  if (askYN("Narrator: Do you wish to go adventuring?\n") == true) {
    cout << "Narrator: You have " << health << " hp. Let us begin.\n";
  } else {
    cout << "Narrator: Till next time, then.\n";
    return 0;
  }

  do {
    turns++;
    cout << "Narrator: You search around the area. An enemy appears!\n";
    attack = rand() % 5;
    block = rand() % 5;

    if (block >= attack) {
      cout << "Narrator: You successfully blocked! You stole " << rollDie()
           << " gold.\n";
    } else {
      cout << "Narrator: You were too slow and took " << attack
           << " damage. Try dodging next time.\n";
      health -= attack;
    }

  } while (turns < totalTurns && health > 0);

  if (health > 0) {
    cout << "Narrator: You managed to live the attacks, congrats. You leave "
            "with all of your gold.\n";
  } else {
    cout << "Narrator: You died, sucker.\n";
  }
  ending();
}
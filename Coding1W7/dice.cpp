#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

// return type (returns to where it came from), function name, (input parameters) { code }

// this function returns void (nothing)
// this function has no input parameters (where the function gets its stuff from)
// this function is named "welcome"
// this is declaring and defining the function

void welcome() { cout << "Hello World!\n"; }

void welcome(string message) { cout << message << "\n"; }

int doubleThe(int x) { return x * 2; }

float doubleThe(float x) { return x * 2; }

// return type is int
int addTwoNums(int first, int second) { return first + second; }

// create a function named rollDie() that returns an int between 1 and 6
int rollDie(int sides = 20) {
  int roll = rand() % sides + 1;
  return roll;
}

// create a function that returns a boolean, that asks the player a question and
// keeps asking until the user says 'y' or 'n'

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
  if (askYN("Would you like to play?") == true) {
    cout << "Let us begin.\n";
    cout << "The closest one to the dice number wins.\n";
  } else {
    cout << "Till next time, then.\n";
    return 0;
  }
  // // int main is the starting point of our program
  // // let's call the welcome function
  // welcome();
  // welcome(); // the functions are repeatable bits of code
  // welcome("S T A R T !");

  // cout << "Player's turn\n";
  // string input;
  // cin >> input;

  // welcome(input);

  // cout << "8 doubled is " << doubleThe(8) << "\n";
  // cout << "3.5 doubled is " << doubleThe(3.5f) << "\n";

  // cout << "10 + 10 = " << addTwoNums(10, 10) << "\n";

  cout << "Your roll is " << rollDie() << "\n";
  cout << "My roll is " << rollDie() << "\n";

  cout << "The dice shows a " << rollDie(20) << "\n";
}
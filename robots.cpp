#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

// global variables
string robotNames[] = {"Artoo", "MSE-6", "IG-88", "IE-11", "ChatGPT", "AI"};

// creating a new class
//"class" keyword, then the name of the class
class robot {
public:
  // data members (variables)
  string name;
  int batteryLevel;
  int x;
  int y;

  // member functions
  // a new contructor is called when a new variable is created. A constructor is
  // always named the same class, with no return type.
  robot(string givenName = "Robot", int givenBatteryLevel = 10) {
    cout << "A new robot has been created!\n";
    name = givenName;
    batteryLevel = givenBatteryLevel;
    // start them out at 0,0
    x = rand() % 5 - 2;
    y = rand() % 5 - 2; // [max] - [min]
  }
  // try calling "artoo.status();"
  void status() {
    cout << "[" << name << ": " << batteryLevel << "]\n";
    cout << "[Position is " << x << "," << y << ".]\n";
  }

  void move() {
    // 1. pick a direction
    // 2. try to move in that direction
    // 3. if we're at the end of the map, don't move
    // TODO: loop until move is successful.
    if(batteryLevel <= 0) {
      cout << "Out of battery!\n";
      return;     //don't move.
    }
    
    while(true) {
      
  
      int direction = rand() % 4; // 0 = n, 1 = s, 2 = e, 3 = w
  
      // pretend you're at 0,0. If you go north, you're now at 0,1
      // if going north
      if (direction == 0) {
        // if not at the top of the map...
        if (y < 2) {
          //... go north
          y++;
          cout << name << " moves north.\n";
        }
      } else if (direction == 1 && y > -2) {y--; break; }
      else if (direction == 2 && x < 2) {x++; break; }
      else if (direction == 3 && x > -2) {x--; break; }

      cout << "Can't move there, rerouting.\n";
    }//end of while loop()

    batteryLevel -= 1;
  } //end of while(true)

  // project goal: give robots position on -2 to +2 grid and give them ability
  // to move NESW

}; // don't forget ";"

int main() {
  srand(time(0));
  cout << "Hello World!\n";
  // unified modeling language (UML) for documenting complex systems.

  // create a new robot variable
  robot artoo;
  // set up artoo
  artoo.name = "R2-D2";
  artoo.batteryLevel = 4;

  cout << "Welcome " << artoo.name << "!\n";
  cout << artoo.name << "'s battery level is " << artoo.batteryLevel << ".\n";

  robot threepeo("C-3P0", 5); // constructor is called here.
  threepeo.status();
  robot fourLom("4L0M");
  fourLom.status();

  // create a list of names. Then create a list of robots with random names and
  // betteryLevels. Finally, have them move around.
  robot robots[10];
  // randomize the robots
  for (int i = 0; i < 10; i++) {
    robots[i] = robot(robotNames[rand() % 5], rand() % 6 + 5);
  }
  // get the status of all the robots
  for (int i = 0; i < 10; i++) {
    robots[i].status();
  }
  // make them move
  cout << "Robots are moving.\n";
  for (int i = 0; i < 10; i++) {
    robots[i].move();
  }
  // get the status of all the robots
  for (int i = 0; i < 10; i++) {
    robots[i].status();
  }

  for (int i = 0; i < 10; i++) {
  cout << "\nRobots are moving.\n";
  for (int j = 0; j < 10; j++) {
    robots[i].move();
    }
  }
  // in order to move, it'll require 1 batteryLevel
}
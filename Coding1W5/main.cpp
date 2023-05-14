#include <iostream>

using namespace std;

int main() {
  std::cout << "Hello World!\n";


  if (true) {
    //     // var type, var name [size of array]
    string pizzaToppings[5];
    pizzaToppings[0] = "Spinach";
    pizzaToppings[1] = "Pineapple";
    pizzaToppings[2] = "Ham";
    pizzaToppings[3] = "Pepperoni";

    // int scores[10];

    cout << "What would you like on your pizza?\n";

    cout << "\nv Here are your choices. v\n";
    for (int i = 0; i < 5; i++) {
      if (pizzaToppings[i] == "") {
        continue;
      }
      cout << pizzaToppings[i] << "\n";
    }
    cout << "\n";

    string input;
    cin >> input;

    if (input == "Pineapple") {
      cout << "Get out of my store.\n";
    } 
    else {
      cout << input << " pizza coming right up!\n";
    }

  } // end of if(true)

  // } // end of for loop

  // string favGames[100];

  // int index = 0;
  // while (true) {
  //   cout << "What would you like to do?\n";
  //   cout << "Type 'Quit' to quit the program.\n";
  //   cout << "Type 'Add' to add a game.\n";
  //   cout << "Type 'Show' to show your favorite game.\n";
  //   cout << "Type 'Edit' to change a game.\n";

  //   string input;
  //   cin >> input;

  //   // test input
  //   if (input == "Quit") {
  //     cout << "S h u t t i n g  d o w n . . .\n";
  //     break;
  //   }

  //   if (input == "Add") {
  //     cout << "What game would you like to add?\n";
  //     cin >> input;
  //     favGames[index] = input; // ex: favGames[0] = "Mario";
  //     index++;                 // index is now pointing at the next spot.
  //   }

  //   if (input == "Show") {
  //     cout << "Here are your favorite games:\n";
  //     for (int i = 0; i < index; i += 1) {
  //       cout << i + 1 << ". " << favGames[i] << "\n";
  //     }
  //   }

  //   // what if you mess up?
  //   if (input == "Edit") {
  //     cout << "What is the number of the name you want to change?\n";
  //     int numInput;
  //     cin >> numInput;

  //     cout << "What would you like to change " << favGames[numInput - 1]
  //          << " to?\n";
  //     cin >> input;
  //     favGames[numInput - 1] = input;
  //   }

  // } // end of while(true)

} // end of program
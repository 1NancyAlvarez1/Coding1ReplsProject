#include <iostream>

using namespace std;

int main() {
  string favGames[100];

  int index = 0;
  while (true) {
    cout << "What would you like to do?\n";
    cout << "Type 'Quit' to quit the program.\n";
    cout << "Type 'Add' to add a game.\n";
    cout << "Type 'BulkAdd' more than one game.\n";
    cout << "Type 'Show' to show your favorite game.\n";
    cout << "Type 'Edit' to change a game.\n";

    string input;
    cin >> input;

    // test input
    if (input == "Quit") {
      cout << "S h u t t i n g  d o w n . . .\n";
      break;
    }

    else if(input == "Add") {
                cout << "What game would you like to add?\n";
                cin >> input;
                favGames[index] = input;        // ex: favGames[0] = "Mario";
                index++;    // index is now pointing at the next spot.
            }

      if (input == "BulkAdd") {
        while (true) {
        cout << "What games would you like to add? Type 'Quit' to stop.\n";
        // cout << "Enter 'End' to stop.\n";
        cin >> input;
        if(input == "Quit") {
          break;
        //return to top
      }
        favGames[index] = input; 
      index++;
          }
      }

      if (input == "Show") {
        cout << "Here are your favourite games:\n";

        for (int i = 0; i < index; i++) {
          if (favGames[i] == "") {
            continue;
          }
          cout << i + 1 << ". " << favGames[i] << "\n";
        }
        
      }

      // what if you mess up?
      if (input == "Edit") {
        cout << "What is the number of the name you want to change?\n";
        int numInput;
        cin >> numInput;

        cout << "What would you like to change " << favGames[numInput - 1]
             << " to?\n";
        cin >> input;
        favGames[numInput - 1] = input;
      }

    } // end of while(true)
  }
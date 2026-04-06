#include "commands.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void processCommand(string command) {

    if (command == "open notepad") {
        system("notepad");
    }
    else if (command == "open chrome") {
        system("start chrome");
    }
    else if (command == "open calculator") {
        system("calc");
    }
    else if (command == "search google") {
        system("start https://www.google.com");
    }
    else {
        cout << "Unknown command" << endl;
    }
}

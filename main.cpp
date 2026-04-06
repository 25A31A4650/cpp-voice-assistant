#include <iostream>
#include "commands.h"

using namespace std;

int main() {
    string command;

    cout << "=== Assistant Started ===" << endl;

    while (true) {
        cout << "\nEnter command: ";
        getline(cin, command);

        if (command == "exit") {
            cout << "Goodbye!" << endl;
            break;
        }

        processCommand(command);
    }

    return 0;
}

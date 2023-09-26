// Alphanzo Moore

//CIS-5 Online

// September 24, 2023

// Lab 5D: Alphanzo Moore - <Beverage Menu>

#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        cout << "Hot Beverage Menu" << endl;
        cout << "A. Coffee" << endl;
        cout << "B. Tea" << endl;
        cout << "C. Hot Chocolate" << endl;
        cout << "D. Quit the program" << endl;

        cout << "Choose an option (A/B/C/D): ";
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                cout << "You chose Coffee." << endl;
                break;
            case 'B':
            case 'b':
                cout << "You chose Tea." << endl;
                break;
            case 'C':
            case 'c':
                cout << "You chose Hot Chocolate." << endl;
                break;
            case 'D':
            case 'd':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select A, B, C, or D." << endl;
        }
    } while (choice != 'D' && choice != 'd');

    return 0;
}


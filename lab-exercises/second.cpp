// Simple usecase for switch() statements in CPP . 

#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Please choose a number (0/1) :" << endl;
    cin >> num;

    switch(num) {
        case 1:
            cout << "You chose True";
            break;

        case 0:
            cout << "You chose False";
            break;

        default:
            cout << "INput should be either 0 or 1." << endl;
            
    }

}

// debrief : 
// 'break' also puts you out of switch statements.
// if you forget to add 'break' , outputs for all case conditions will be displayed.

// NO 'finally' for switch-case statements. Only 'default'
// 'finally' is used in try-catch blocks.
#include <iostream>
#include<string>
using namespace std;

int main() {
    char message [5] {'H', 'e', 'l', 'l', 'o'}; // No '/0'
    char message2[6] {"Hello"}; // A '/0' is added at last making it a literal C-string.

    string msg = "Hello";

    cout << msg << endl;

    for (auto c : message) {
        cout << c << endl;
    }

    for (auto c : msg) {
        cout << c << endl;
    }   

    cout << endl;
    cout << message << endl;
    cout << message2 << endl;
    cout << "Size of message 1 is: " << size(message) << endl;
    cout << "Size of message 2 is: " << size(message2) << endl;
}


// Looping through an array of characters in a string :
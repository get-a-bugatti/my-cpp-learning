#include <iostream>
#include <string>

using namespace std;

int main() {

    string str {"Try out."};
    // size_t i {str.length() - 1}; // Use 'int' instead. because it's gonna eventually turn to -1. and 'Segmentation fault'

    // int i {str.length() - 1}; // str.length() returns a size_t type value. and we 've defined 'int'
    // So narrowing conversion occurs in brace initialization.

    int i = str.length() - 1;

    string rev_str {""};

    while (i >= 0) {
        rev_str += str[i];
        i--;
    }

    cout << "str : " << str << endl;
    cout << "reversed str : " << rev_str << endl;
    
}
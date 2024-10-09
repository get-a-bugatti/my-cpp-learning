#include <iostream>

using namespace std;

int main() {
    int arr[] {1, 2, 3, 4, 5};

    for (int i = 0; i < size(arr); i++) { // size() operator is used to calculate the length of arr.
        cout << arr[i];
        cout << endl;
    }

    cout << size("haha"); // -> 5 bcz string is an array of characters but with the null terminator '/0' : ('h', 'a', 'h', 'a', '/0')
    cout << endl;
}



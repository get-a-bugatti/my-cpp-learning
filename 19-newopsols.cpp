#include <iostream>
using namespace std;

// 2 ways to stop the new operator fails :
// 1) use an Exception mechanism
// 2) std::nothrow

// Exception is basically wrapping potentially errorful codes in 
// try...catch blocks

int main() {

    for (size-t i{}; i < 1000000000; ++i) {
        try {
            int * lots_of_ints3 { new int [10000000] };
        } catch (exception& ex) {
            cout << "Caught exception ourselves : " << ex.what << endl;
        }
    }

    // std::nothrow : Ideal if you DON't want exceptions thrown when 'new'
    // fails.

    for (size_t{}; i < 1000000000000; ++i) {
        int * lots_of_ints4 {new(std::nothrow) int [10000000]};

        if (lots_of_ints4 == nullptr) {
            // Don't try to dereference and use lots_of_ints in here.
            // you'll get UB. No memory has been allocated ehre
            // It failed and returned nullptr because of the std::nothrow setting

            cout << "Memory allocation failed" << endl;

        } else {
            cout << "Memory allocation succeeded" << endl;
        }
    }
}

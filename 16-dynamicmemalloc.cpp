#include <iostream>
using namespace std;

int main() {
    int * p_number1; // Contains junk address : could by anything.
    *p_number1 = 12; // Writing into junk address : BAD !
    cout << endl;
    cout << "Uninitialized pointer : " << endl;
    cout << "p_number1 : " << p_number1 << endl; // Reading from junk Address
    cout << "*p_number1 : " << *p_number1 << endl;

    // Therefore, REally bad to try and use a Pointer that's not initialized.

    // Initializing Pointer to null
    // int *p_number3 {nullptr}; 

    // Also works :
    int * p_number3 {}; // Initialized pointer equivalent of zero -> nullptr
                        // A pointer pointing nowhere

    //*p_number = 33; // Writing to a pointer that points nowhere => BAD !! memory Crash !!

     cout << endl;
     cout << "Reading and writing through nullptr : " << endl;

     cout << "p_number3 : " << p_number3 << endl;
     cout << "*p_number3 : " << *p_number3 << endl;

     // WILL CRASH.

}
#include <iostream>
#include <limits>
using namespace std;

// The std::numeric_limits class template provides a standardized way To Query various properties of arithmetic types

int main() {

    cout << "Max for short :" << numeric_limits<short>::max() << endl;
    cout << "Max for int :" << numeric_limits<int>::max() << endl;
    cout << "Max for long int :" << numeric_limits<long int>::max() << endl;

    // In Addition, there are other facilities associated with Numeric Limits :
    cout << numeric_limits<int>::is_signed << endl; // 0
    cout << numeric_limits<unsigned int>::is_signed << endl; // 1

    // There are more for finding out more abt data types that u can find on Documentation.
}

// The syntax is : std::numeric_limits<DATA TYPE>::max() or min() or lowest()


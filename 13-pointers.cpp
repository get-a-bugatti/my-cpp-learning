#include <iostream>
using namespace std;

int main() {
    int * ptr_number {}; // Can only store addresses to a variable
                        // of type `int`

    double * ptr_float {}; // Can only store an address of a variable of type 'float'

    // Explicitly initialize to nullptr
    int * p_number1 {nullptr};
    int * p_float1 {nullptr};


    // ALL Pointers in a system (to all different var types) are gonna have same size.
    cout << "size of int pointer : " << sizeof(ptr_number) << "\t, size of int : " << sizeof(int) << endl;
    cout << "size of float pointer : " << sizeof(ptr_float) << "\t, size of float : " << sizeof(float) << endl;
    // Because they are all pointing to 'Addresses'.

    int * ptr_var{}, other_int{}; // never use like this. put * with the variable in the right, NOT IN THE MIDDLE.
    // Better to declare in separate lines.
    int *ptr_var2{};
    int other_int{};

    cout << endl;
    cout <<  typeid(other_int).name() << "\t" << typeid(ptr_var).name() << endl;
}
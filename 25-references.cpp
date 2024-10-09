// References are an alias / alternative name for a variable in Cpp.

// Rather than creating a copy, they act as different name for the same var.

// Any changes done to the reference directly affects the original variable.

#include <iostream>
using namespace std;

int main() {
    int int_var {33};
    double double_var {15.5};
    double other_double_value {33.9};

    int& ref_to_int {int_var};
    double& ref_to_double {double_var};

    cout << "int var : " << int_var << "\t ref : " << ref_to_int << endl;
    cout << "double var : " << double_var << "\t ref : " << ref_to_double << endl;

    cout << endl;

    //Changing value of ref variable affects the original TOO. :
    ref_to_int = 20;
    cout << "int_var after change in ref_to_int : " << int_var << endl; // OUTPUTs 20 instead of original 33.
    // And so, the converse is true too. 
    // That is , References will PICK Up the changes in Original variables.

    // Printing addresses in Original V/S References : 

    cout << endl << "---Addresses for References---" << endl;
    cout << "Address of original int : " << &int_var << endl;
    cout << "Address of reference int : " << &ref_to_int << endl; // Ref points to same address as Original_var.


    cout << endl << "---Size for Ref(s) in bytes---" << endl;
    cout << "Size of original var :" << sizeof(int_var) << "\t Size of 'int' : " << sizeof(int) << endl;
    cout << "Size of reference var : " << sizeof(ref_to_int) << "\t Size of 'int&' : " << sizeof(int&) << endl;


    // References behave like constant pointers, but they have 
    // a much friendlier syntax as they don't require dereferencing.
    // to read/write through referenced data.
    double *const const_p_value {&double_value};
    const_p_value = &other_double_value;
}
// Continuation of <iomanip> functions for Input/Output Formatting :

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // boolalpha and noboolalpha : Controls Boolean Output format : 1/0 OR True/False

    bool condition {true};
    bool other_condition {false};

    cout << endl;
    cout << condition << endl;
    cout << other_condition << endl;

    cout << endl;
    cout << boolalpha;
    cout << condition << endl;
    cout << other_condition << endl;

    cout << endl;
    cout << noboolalpha;
    cout << condition << endl;
    cout << other_condition << endl;


    cout << endl; 

    // showpos & noshowpos : Whether to show the (+) sign for non-negative numbers.

    cout << showpos;
    cout << 6 << endl;
    cout << 7 << endl;
    
    cout << noshowpos;
    cout << 6 << endl;
    cout << 7 << endl;

    // SIMILARLY , 
    // different number systems : std::dec, std::hex, std::oct

    // showbase & noshowbase : shows the base for the integral types 
    // `dec` will have no prefix. `hex` will have '0x' , and `oct` will have '0'.

    // uppercase & nouppercase


    // double values (default : use scientific where necessary) :
    // a : 3.14159
    // b : 2006
    // c : 1.34E-10

    // double values (fixed) :
    // a : 3.141593
    // b : 2006.00000
    // c : 0.000000


    double a {3.141593};
    double b {2006.00000};
    double c {0.000000};

    cout << scientific;
    cout << endl;

    cout << "a :" << a << endl;
    cout << "b :" << b << endl;
    cout << "c :" << c << endl;

    // How to UNDO `FORCED` scientific notation ? 
    // Set it back to default ? 

    cout << endl;
    cout.unsetf(ios::scientific | ios::fixed);
    cout << "a :" << a << endl;
    cout << "b :" << b << endl;
    cout << "c :" << c << endl;


    cout << endl;

    //  SET Precision : std::setprecision(num) : Sets the number of digits printed out for a floating point.
    // Default is 6.

    a = 3.1415697292932;
    
    cout << a << endl; // OUTPUT : 3.14157 (Only 6 digits)
    
    cout << setprecision(10);
    cout << a << endl; // Output : 3.141569729 (10 digits)


    // showpoint and noshowpoint : show TRAILING Zero's if necessary 

    
}
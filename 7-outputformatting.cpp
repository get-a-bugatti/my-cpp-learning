// <iomanip> functions for Input - Output formatting :

#include <iostream>
#include <iomanip> // Input-Output formatting starts with this .
using namespace std;

int main() {

// SET WIDTH : 

// std::setw(num) -> Stands for set Width ->  used to specify a minimum width of `num` characters for the next output. .
// That is defined in header  : #include<iomanip> 

cout << "Unformatted Table :" << endl;
cout << "Daniel" << " " << "Rose" << " " << "28" << endl;
cout << "Saint" << " " << "Mary" << " " << "26" << endl;
cout << "Bad" << " " << "Rose" << " " << "28" << endl;

cout << endl;

// OUTPUT JUSTIFICATION :

cout << left; // Makes the content align left in the following output fields within the `n` characters width.
cout << setw(10) << "Formatted Table :" << endl;
cout << setw(10) << "Daniel" << setw(10) << "Rose" << setw(10) << "28" << endl;
cout << setw(10) << "Saint" << setw(10) << "Mary" << setw(10) << "26" << endl;
cout << setw(10) << "Bad" << setw(10) << "Rose" << setw(10) << "28" << endl;

cout << endl;

// INTERNAL JUSTIFICATION : Sign is left justified, Data is right justified

cout << "Internal Justfication :" << endl;
cout << internal;
cout << setw(10) << "Data1" << setw(10) << "Data2" << endl;
cout << setw(10) << -12 << setw(10) << -13 << endl;

cout << endl;

// SETFILL : we can use std::setfill(character) to fill the empty spaces in our OUTPUT with other character.

cout << setfill('_');
cout << setw(10) << "Data1" << setw(10) << "Data2" << endl;
cout << setw(10) << -12 << setw(10) << -13 << endl;
}
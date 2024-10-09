#include <iostream>
#include "operations.h"
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;

    cout << endl;
    cout << "You entered " << a << " and " << b << endl;
    cout << "Result is : " << incr_mult(a, b) << endl; 
}
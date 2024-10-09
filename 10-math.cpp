#include <iostream>
#include <cmath> // The main Library for all Math Functions.

using namespace std;

int main() {
    // std::floor -> round down a number
    // std::ceil -> round up a num
    // std::abs -> to find absolute value of a num ( |x| )
    // std::cos -> to find the cosine
    // std::exp -> to compute Exponential of a number ( exp(x) => e^(x) )

    // std::log -> For Logarithmic operation
    cout << "To get 54.59, you woulud raise 'e' to the power of : " << log(54.59) << endl;
    cout << "10 to power What is 10000  : " << log10(10000) << endl;

    // std::pow -> Calculate Power of a to b pow(a, b) => a ^ b
    // std::sqrt -> for finding the Square root

    // std::round -> It rounds digits after decimal(.) to closest to zero.
    cout << "Rounding the number which as power to e is 54.59 : " << round(log(54.59)) << endl;
    // std::sin -> To find the sine
    // std::tan -> To find the tangent


}
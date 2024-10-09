#include <iostream>

int main()
{
    int a = 2;
    int b = 3;
    // int radius = 7.5; // Output will be 7, and not 7.5. Therefore differnet data type is needed.

    // double (for float values) :
    double pi = 3.14159;
    double area = 5.6;

    // boolean :
    bool isGay = false;
    bool isMan = true;

    // Characters :
    char first = 'A';
    char last = 'Z';

    // STrings :
    // Strings in C++ are defined inside the std (standard) namespace only. So, we need to use that.

    // string something = 'kenny'; -> It won't recognize the string keyword and throws an error.

    std::string something = "kenny";
    printf("%s", something);
}
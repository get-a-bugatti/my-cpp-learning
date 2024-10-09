#include <iostream>

// const <data-type> <var-name> = <var-value>;
int main()
{
    // The 'const' keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    double pi = 3.14159;
    // Sombody might modify the pi value,
    // TO PREVENT THAT  :

    double const piValue = 3.14159;
    printf("%lf", piValue);

    // CAUSES errors
    // piValue = 4;
    // printf("%lf", piValue);
}
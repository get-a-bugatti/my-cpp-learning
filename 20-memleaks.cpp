// When we have lost access to a piece of memory that is dynamically allocated .

#include <iostream>
using namespace std;

int main() {
    int *p_number {new int{27}}; // Points to some address (say `address1`)
    // Remember p_number is our only key to manipulating ``address1``

    int number {22}; // Say this value is saved at `address2`

    p_number = &number; // Now, p_number points to address2. So, basically we have lost our access to address1. 
    // But remember, ``address1`` is still in use by our program. However since our program has lost access to that address.
    
    // Memory has been leaked.



    //
    // Double ALlocation can lead to memory leaks . How ? 

    int * p_number1 {new int {23}};

    p_number1 = new int {24};

    // lost address again.


    //
    // Pointer in local scope :

    {
        int *p_number2 {new int{57}};
    } // Memory with int{57} leaked.
    // Since int is a local var, and only defined within the bracket scope.

    



}
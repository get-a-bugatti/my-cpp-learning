#include <iostream> 
using namespace std;

int main() {
    // Although rarely in practice, sometimes 'new' operator fails to allocate memory.

    // Try to allocate an insanely huge array in one go.
    // Unhandled new failure : CRASH 
    // int * lots_of_ints1 {new int [100000000000000]}; // May give an error about
                                                            // about exceeding array size in some compilers.


    // Use a huge loop to try and exhaust the memory capabilities 
    // of your system.

    for (size_t i{}; i < 100; ++i) {
        try {
            int * lots_of_int2 { new int[10000000000] };
        } catch(exception& ex) {
            cout << "Something went wrong : " << ex.what() << endl;
        }
    }

    // when new fails, your program forcefully terminates

    cout << "Program ended well" << endl;
}
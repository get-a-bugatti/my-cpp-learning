#include <iostream>
using namespace std;

int main() {
     
     int arr[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Static array : Lives in Stack

     cout << "size of stack array : " << size(arr) << endl;

     // Range loop for array :
     cout << "values in array  : " << endl;
    for (auto m : arr) {
        cout << m << endl;
    }


    cout << "================================================" << endl;

    
    int * p_arr {new(std::nothrow) int[10] {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}}; // p_arr decays down to pointer, 
                                                                                // so array methods don't work on it

    cout << "size on dynamic arr : " << size(p_arr) << endl;

    // neither does range loops .

    
}
// Main differences between 
// STACK and HEAP 

// In stack, the dev isn't in full control of memory lifetime.
// AND the lifetime is controlled by the scope mechanism.

// In Heap, the dev is in full control of when memory is allocated and when it's released.
// Lifetime is controlled explicitly through new and delete operators.

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int * p_number1 {};
    

    
    if (p_number1 != nullptr) { // Safety check for uninitialized pointer
        cout << "* p_number1 =  " << *p_number1 << endl;
    } else {
        cout << " Cannot print Dangling pointer " << endl;
    }
    
    p_number1 = new int {77};
    
    if (p_number1 != nullptr) {
        cout << "* p_number1 =  " << *p_number1 << endl;
    } else {
        cout << " Cannot print Dangling pointer " << endl;
    }
    
    // Since, we are done using the memory space in heap.
    // Let's delete it.
    
    delete p_number1;
    // It is a GOOD PRACTICE To reset the pointer to 'nullptr'
    // after you remove it's pointing to heap memory.
    p_number1 = nullptr;
    
    
    int *p_number2 {new int {382}};
    int *p_number3 {p_number2};
    
        // Let's say I get done with p_number2 pointer var.// And i decide to delete mem allocated 2 it.
    
    delete p_number2;
    
    cout << "*p_number2 : " << *p_number2 << endl;
    cout << "*p_number3 : " << "- Attempting to access a memory location that doesn't execute :"<< *p_number3 << endl;
    
    // NOW THIS could cause a CRASH, since p_number3 address depends on p_number2, and p_number2 will be pointed to 'nullptr'. 
    // Hence, the statements following this won't be executed.
    
    cout <<  "This might be displayed but still sometimes you can get a garbage value." << endl;

    if (!(p_number2 == nullptr)) { // only display slave pointer , when master pointer is valid.
        cout << "p_number3 - " << p_number3 << " - " << *p_number3 << endl;
    } else {
        cout << "WARNING ! Trying to use an invalid pointer." << endl;
    }

    
}
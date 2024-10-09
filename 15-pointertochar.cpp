#include <iostream>
using namespace std;

int main() {
    // char * ptr_char {"Hello World!"}; // This might cause errors in VScode compilers, 
    // *ptr_char ='B'  // compiler error. because (const char)
    
    // so, you write it as : 

    const char * ptr_char {"Hello World!"};
    // This is treated like a String Literal : C-String

    // Pointer to char is SPECIAL In that it prints the entire string, instead of only the first character, when :
    cout << ptr_char << endl; // Prints the entire string.
    cout << *ptr_char << endl; // Prints only the first char

    // Since, String literal is an array of multiple 'const char's' , you can not modify it directly.
    
    // If you want it MODIFYable :
    char message2[] {"Hello There!"};
    cout << "message before modifying : " << message2 << endl;

    message2[0] = 'T';
    cout << "message after modifying : " << message2 << endl;
}
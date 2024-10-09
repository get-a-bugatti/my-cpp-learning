#include <iostream>
using namespace std;

int main() {
    // Arrays are generally allocated on the stack..

    // Dynamic arrays are allocated on the heap using the 'new' operator. Can also std::nothrow version of new.

    size_t size{10};


    double *p_salaries {new double[size]}; // salaries array will contain garbage values.

    int *p_students {new(std::nothrow) int[size]{} }; // All members of arr will contain 0 as value because {}.

    double *p_scores {new(std::nothrow) double[size] {1, 2.0, 3.0}}; // first 3 will be initialized with 1, 2.0, 3.0 . rest will be 0's.

    // Printing values in p_scores :
    for(size_t i{0}; i < size; i++) {
        // Can use :
        //  regular array notation 
        // Or 
        //  pointer Arithmetic
        cout << "arr notation : " << p_scores[i] << "\t ptr arithmetic : " << *(p_scores + i) << endl;

    } 

    // Release memory [Array edition ]

    delete[] p_scores;
    p_scores = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_salaries;
    p_salaries = nullptr;
}
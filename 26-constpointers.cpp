#include <iostream>

int main() {
    double value = 3.14;
    double other_value = 2.71;

    // 1. Constant pointer to non-constant data
    double *const const_pointer_to_value = &value;

    // You can modify the value it points to:
    *const_pointer_to_value = 6.28;  // This works.

    // You cannot modify the pointer itself:
    // const_pointer_to_value = &other_value;  // Error: assignment of read-only variable ‘const_pointer_to_value’

    // 2. Pointer to constant data
    const double *pointer_to_const_data = &value;

    // You cannot modify the value it points to:
    // *pointer_to_const_data = 6.28;  // Error: assignment of read-only location ‘* pointer_to_const_data’

    // You can modify the pointer itself:
    pointer_to_const_data = &other_value;  // This works.

    // 3. Constant pointer to constant data
    const double *const const_pointer_to_const_data = &value;

    // You cannot modify the value it points to:
    // *const_pointer_to_const_data = 6.28;  // Error: assignment of read-only location ‘* const_pointer_to_const_data’

    // You cannot modify the pointer itself:
    // const_pointer_to_const_data = &other_value;  // Error: assignment of read-only variable ‘const_pointer_to_const_data’

    std::cout << "All checks completed!" << std::endl;
    return 0;
}

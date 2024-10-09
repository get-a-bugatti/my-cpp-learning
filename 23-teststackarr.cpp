#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];  // Trying to create a stack array with runtime size (illegal in most cases)

    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
        std::cout << arr[i] << " ";
    }

    return 0;
}

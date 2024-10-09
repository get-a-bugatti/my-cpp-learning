#include <iostream>

struct Person {
    char name[64];
    int age;
} // Abt a 68 byte long strucutre

int main() {
    struct Person people[100]; // 68 * 100 = ..
    
        
}
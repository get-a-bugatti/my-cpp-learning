#include <iostream>
using namespace std;

void say_age(int* age);

int main() {
    int age {22};

    cout << "age (before call) : " << age << endl; // 22
    say_age(&age); // 23
    cout << "age (after call) : " << age << endl; // Since value at 'address of original variable' will be modified,
                                                // this should be 23 too. UNLIKE 'pass by value'.
}

void say_age(int* age) {
    ++(*age); // It's pointing to main's ORIGINal ''age'' var.
    cout << "you are " << *age << " years old." << endl;
}


// debrief : The main diff in value and passby pointer is that ORiginal vaue will be affected in 'PASS by Pointer'.
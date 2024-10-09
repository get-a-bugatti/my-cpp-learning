#include <iostream>
using namespace std;

// Another technique to avoid 'Pass by Value' , which is gonna Create a COPY.

void say_age(int& age);

int main() {
    int age {22};

    cout << "age (before call) : " << age << endl; // 22
    say_age(age); // 23
    cout << "age (after call) : " << age << endl; // 23 -> Will change 'Original age' through reference.

}

void say_age(int& age) {
    ++age;
    cout << "You are " << age << " years old. " << endl;
}
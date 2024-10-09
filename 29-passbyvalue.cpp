#include <iostream>
using namespace std;

void say_age(int age);

int main() {
    int age {22};

    cout << "age - before -> " << age << endl; // 22
    say_age(age); // 23
    cout << "age - after -> " << age << endl;  // 22

    // Value of ''main''`s {age} remains unaffected .
}

void say_age(int age) { // The 'age' here is gonna be a 'copy' of the `age` in ''main''. Changes in value inside the function 
                        // block won't affect the original variable in ''main''.

    ++age;
    cout << "Your age is : " << age << endl;

}

// debrief : In 'pass by value' , the original variable defined in ``main``'s scope REmained UNaffected.
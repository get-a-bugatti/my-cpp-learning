#include <iostream>

using namespace std;

int main() {

    short int a {20};
    char c {40};


    cout << "Size of short int :" << sizeof(a) << endl; // 2
    cout << "Size of char :" << sizeof(c)<< endl; // 1

    auto result = a + c;
    cout << "Result is : " << result << endl;

    cout << "Size of result is : " << sizeof(result) << endl;
}
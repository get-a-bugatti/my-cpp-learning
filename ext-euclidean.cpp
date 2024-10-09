#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    int s1 = 1, s2 = 0, s, t1 = 0, t2 = 1, t;
    int r;
    int q;
    int temp;

    cout << "Enter the value of a : " << endl;
    cin >> a;

    cout << "Enter the value of b : " << endl;
    cin >> b;

    cout << endl;

    if (b > a) {
        swap(a, b); // ensures 'a' is greater than 'b'
    }

    while (b != 0) {
        r = a % b;
        q = floor(a/b);
        s = s1 - s2 * q;
        t = t1 - t2 * q;

        // Now time to swap positions for a <- b <- r
        a = b;
        b = r;

        s1 = s2;
        s2 = s;

        t1 = t2;
        t2 = t;
    }

    cout << "The required gcf value is : " << a << endl;
    
    }
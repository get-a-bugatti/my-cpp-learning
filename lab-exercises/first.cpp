// A compnay provides 2 percent of commission in the salary of an employee :
// if he/she earns more than 5000
// 5 percent commission  : if you earn more than 5000 and given you are a female.
// WAP TO CALC salary.

#include <iostream>

using namespace std;

int main() {
    float salary, salary_com;
    char gender;

    cout << "Enter your salary" << endl;
    cin >> salary;

    cout << "Enter your gender (m/f)" << endl;
    cin >> gender;

    if (salary > 5000) {
        if (gender == 'f') {
            salary_com = salary + 0.05 * salary; // Salary With Commission
        } else {
            salary_com = salary + 0.02 * salary;
        }

    cout << "Your Total Salary with Commission would be : " << salary_com << endl; // Salary With commission

    } else {
        cout << "Sorry. No Commission for You .";
        cout << "Your Salary is : " << salary; // Only Salary
    }

    return 0;
}

// debrief : 
// Don't forget to use endl;
// Remember `break` is only for loops, not conditional IFs.
// Also, gcc is for C , g++ for C++
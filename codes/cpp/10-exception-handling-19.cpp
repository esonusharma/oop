/*
13. Aim: Create a program to implement Exception Handling – Try, Catch

Practice Exercise 19: Write a C++ program to demonstrate the use of Exception Handling for calculating stress.

Code:
*/

#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main() {
    try {
        float force, area;

        cout << "Enter force: ";
        cin >> force;

        cout << "Enter area: ";
        cin >> area;

        if (area == 0) {
            throw runtime_error("Error: Area cannot be zero (division by zero is undefined).");
        }

        float stress = force / area;
        cout << "Stress: " << stress << " N/m^2" << endl;

    } catch (const exception& e) { 
        cerr << "Exception caught: " << e.what() << endl;
        return 1;
    }

    return 0;
}
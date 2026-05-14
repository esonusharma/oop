/*
3. Aim: Create a program that implements constructor (simple, copy, parameterized) and destructor.

Practice Exercise 4: Write a C++ program to calculate the density using a default constructor.

Code:
*/

#include <iostream>
using namespace std;

class Density
{
private:
    float mass;
    float volume;

public:
    Density() {
        mass = 10;
        volume = 5;
    }

    ~Density() {
        cout << "Destructor called." << endl;
    }

    float calculateDensity() {
        return mass / volume;
    }
};

int main()
{
    Density d;
    cout << "Density of Fluid: " << d.calculateDensity() << " N/m³" << endl;
    return 0;
}
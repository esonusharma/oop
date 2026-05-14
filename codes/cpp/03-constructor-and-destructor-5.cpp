/*
3. Aim: Create a program that implements constructor (simple, copy, parameterized) and destructor.

Practice Exercise 5: Write a C++ program to calculate the density using a parameterized constructor.

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
    Density(float m, float v) {
        mass = m;
        volume = v;
    }

    float calculateDensity() {
        return mass / volume;
    }
};

int main()
{
    Density d(10, 5);
    cout << "Density of Fluid: " << d.calculateDensity() << " N/m³" << endl;
    return 0;
}
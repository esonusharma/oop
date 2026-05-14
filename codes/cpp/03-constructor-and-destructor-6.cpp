/*
3. Aim: Create a program that implements constructor (simple, copy, parameterized) and destructor.

Practice Exercise 6: Write a C++ program to calculate the density using a copy constructor.

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

    Density(const Density &obj) {
        mass = obj.mass;
        volume = obj.volume;
    }

    float calculateDensity() {
        return mass / volume;
    }
};

int main()
{
    Density d1(10, 5);
    Density d2 = d1;

    cout << "Density of Fluid: " << d2.calculateDensity() << " N/m³" << endl;

    return 0;
}
/*
5. Aim: Construct a program that demonstrates implementation of Inheritance - Single and Multilevel

Practice Exercise 8: To write a C++ program to demonstrate single inheritance by calculating the density and relative density of a fluid.

Code:
*/

#include <iostream>
using namespace std;

class Density
{
public:
    float mass;
    float volume;

    Density(float m, float v) : mass(m), volume(v) {}

    float mDensity()
    {
        return mass / volume;
    }
};

class RelativeDensity : public Density
{
public:
    float refDensity;

    RelativeDensity(float m1, float v1, float r) : Density(m1, v1), refDensity(r) {}

    float rDensity()
    {
        float density = mDensity();
        return density / refDensity;
    }
};

int main()
{
    RelativeDensity rd(50, 20, 1000);
    cout << "Relative Density of Fluid: " << rd.rDensity() << endl;
    return 0;
}
/*
5. Aim: Construct a program that demonstrates implementation of Inheritance - Single and Multilevel

Practice Exercise 11: Write a C++ program to demonstrate hierarchical inheritance by calculating the density, relative density, and weight of a fluid.

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
        return mDensity() / refDensity;
    }
};

class Weight : public Density
{
public:
    float gravity;

    Weight(float m1, float v1, float g) : Density(m1, v1), gravity(g) {}

    float fluidWeight()
    {
        return mDensity() * volume * gravity;
    }
};

int main()
{
    RelativeDensity rd(50, 20, 1000);
    Weight w(20, 10, 9.81);
    cout << "Relative Density: " << rd.rDensity() << endl;
    cout << "Weight of Fluid: " << w.fluidWeight() << " N" << endl;

    return 0;
}
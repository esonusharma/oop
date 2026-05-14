/*
5. Aim: Construct a program that demonstrates implementation of Inheritance - Single and Multilevel

Practice Exercise 9: Write a C++ program to demonstrate multilevel inheritance by calculating the density, relative density, and weight of a fluid.

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

class Weight : public RelativeDensity
{
public:
    float gravity;

    Weight(float m1, float v1, float r, float g) : RelativeDensity(m1, v1, r), gravity(g) {}

    float fluidWeight()
    {
        return rDensity() * refDensity * volume * gravity;
    }
};

int main()
{
    Weight w(50, 20, 1000, 9.81);
    cout << "Weight of Fluid: " << w.fluidWeight() << " N" << endl;
    return 0;
}
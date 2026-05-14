/*
5. Aim: Construct a program that demonstrates implementation of Inheritance - Single and Multilevel

6. Aim: Construct a program that demonstrates implementation of Inheritance - Multiple, Hierarchical and Hybrid.

Practice Exercise 10: Write a C++ program to demonstrate multiple inheritance by calculating the density, relative density, and weight of a fluid.

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

class RelativeDensity
{
public:
    float refDensity;

    RelativeDensity(float r) : refDensity(r) {}

    float rDensity(float density)
    {
        return density / refDensity;
    }
};

class Weight : public Density, public RelativeDensity
{
public:
    float gravity;

    Weight(float m1, float v1, float r, float g) : Density(m1, v1), RelativeDensity(r), gravity(g) {}

    float fluidWeight()
    {
        float density = mDensity();
        return rDensity(density) * refDensity * volume * gravity;
    }
};

int main()
{
    Weight w(50, 20, 1000, 9.81);
    cout << "Weight of Fluid: " << w.fluidWeight() << " N" << endl;
    return 0;
}
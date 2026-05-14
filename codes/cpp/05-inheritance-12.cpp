/*
5. Aim: Construct a program that demonstrates implementation of Inheritance - Single and Multilevel

Practice Exercise 12: Write a C++ program to demonstrate hybrid inheritance by calculating the density, relative density, and weight of a fluid.

Code:
*/

#include <iostream>
using namespace std;

class Density {
protected:
    float mass;
    float volume;

public:
    Density(float m, float v) : mass(m), volume(v) {}

    float mDensity() {
        return mass / volume;
    }
};

class RelativeDensity : virtual public Density {
protected:
    float refDensity;

public:
    RelativeDensity(float m, float v, float r) : Density(m, v), refDensity(r) {}

    float rDensity() {
        return mDensity() / refDensity;
    }
};

class Weight : virtual public Density {
protected:
    float gravity;

public:
    Weight(float m, float v, float g) : Density(m, v), gravity(g) {}

    float fluidWeight() {
        return mDensity() * volume * gravity;
    }
};

class Fluid : public RelativeDensity, public Weight {
public:
    Fluid(float m, float v, float r, float g) : Density(m, v), RelativeDensity(m, v, r), Weight(m, v, g) {}

    void display() {
        cout << "Density: " << mDensity() << " kg/m^3" << endl;
        cout << "Relative Density: " << rDensity() << endl;
        cout << "Weight of Fluid: " << fluidWeight() << " N" << endl;
    }
};

int main() {
    Fluid fluid(50, 20, 1000, 9.81);
    fluid.display();
    return 0;
}
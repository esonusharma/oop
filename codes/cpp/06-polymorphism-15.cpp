/*
7. Aim: Create a program that exhibits the usage of Operator Overloading (Compile Time Polymorphism)

9. Aim: Construct a program that demonstrates the implementation of Abstract Classes and Virtual Functions(Run Time Polymorphism)

Practice Exercise 15: Write a C++ program to demonstrate abstract classes and virtual functions by calculating the density, relative density, and weight of a fluid.

Code:
*/

#include <iostream>
using namespace std;

// Abstract class Density
class Density {
protected:
    float mass;
    float volume;
public:
    Density(float m, float v) : mass(m), volume(v) {}
    virtual float calculate() = 0; // Pure virtual function
};

// Derived class for Relative Density
class RelativeDensity : public Density {
    float refDensity;
public:
    RelativeDensity(float m, float v, float r) : Density(m, v), refDensity(r) {}
    float calculate() override {
        return (mass / volume) / refDensity;
    }
};

// Derived class for Weight
class Weight : public Density {
    float gravity;
public:
    Weight(float m, float v, float g = 9.81) : Density(m, v), gravity(g) {}
    float calculate() override {
        return mass * gravity;
    }
};

int main() {
    RelativeDensity rd(10, 2, 1000);
    Weight w(10, 2);

    cout << "Relative Density: " << rd.calculate() << endl;
    cout << "Weight: " << w.calculate() << " N" << endl;
    
    return 0;
}
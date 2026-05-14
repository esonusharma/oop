/*
2. Aim: Create a program to showcase the use of friend function.

Practice Exercise 2: Write a C++ program to calculate the density showcasing friend class.

Code:
*/

#include <iostream>
using namespace std;

class Density;

class DensityCalculator
{
public:
    void displayDensity(Density d);
};

class Density
{
public:
    float mass;
    float volume;
    friend class DensityCalculator;
};

void DensityCalculator::displayDensity(Density d)
{
    float density = d.mass / d.volume;
    cout << "Density of Fluid: " << density << " N/m³" << endl;
}

int main()
{
    Density d;
    d.mass = 10;
    d.volume = 5;

    DensityCalculator calc;
    calc.displayDensity(d);

    return 0;
}
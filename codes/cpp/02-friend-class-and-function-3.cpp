/*
2. Aim: Create a program to showcase the use of friend function.

Practice Exercise 3: Write a C++ program to calculate the density showcasing friend function.

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
    friend float calculateDensity(Density d);
};

float calculateDensity(Density d)
{
    return d.mass / d.volume;
}

int main()
{
    Density d;
    d.mass = 10;
    d.volume = 5;

    float result = calculateDensity(d);
    cout << "Density of Fluid: " << result << " N/m³" << endl;

    return 0;
}
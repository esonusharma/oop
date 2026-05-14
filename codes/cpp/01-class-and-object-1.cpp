/*
1. Aim: Construct a program that illustrates the concept and implementation of class and objects

Practice Exercise 1: Write a program to calculate the density using class and object.

Code:
*/

#include <iostream>
using namespace std;

class Density
{
public:
    float mass;
    float volume;

    float mDensity()
    {
        return mass / volume;
    }
};

int main()
{
    Density d;
    d.mass = 10;
    d.volume = 5;
    cout << d.mDensity() << endl;
    return 0;
}
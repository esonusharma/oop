/*
4. Aim: Write a program that showcases the application of Encapsulation.

Practice Exercise 7: Write a C++ program to calculate the weight density of water demonstrating encapsulation.

Code:
*/

#include <iostream>
using namespace std;

class WeightDensity
{
private:
    float weight;
    float volume;

public:
    WeightDensity(float w, float v) : weight(w), volume(v) {}

    float calculateDensity() {
        return weight / volume;
    }
};

int main()
{
    WeightDensity wd(9800, 1);

    cout << "Weight Density of Fluid: " << wd.calculateDensity() << " N/m³" << endl;

    return 0;
}
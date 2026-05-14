/*
7. Aim: Create a program that exhibits the usage of Operator Overloading (Compile Time Polymorphism)

8. Aim: Create a program that exhibits the usage of Function Overloading (Compile Time Polymorphism)

Practice Exercise 14: Write a C++ program to demonstrate function overloading by calculating areas of different shapes.

Code:
*/

#include <iostream>
using namespace std;

class AreaCalculator {
public:
    double area(double side) {
        return side * side;
    }

    double area(double length, double width) {
        return length * width;
    }
};

int main() {
    AreaCalculator calc;
    cout << "Area of Square: " << calc.area(5.0) << endl;
    cout << "Area of Rectangle: " << calc.area(5.0, 10.0) << endl;
    return 0;
}
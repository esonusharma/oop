/*
7. Aim: Create a program that exhibits the usage of Operator Overloading (Compile Time Polymorphism)

Practice Exercise 13: Write a C++ program to demonstrate operator overloading by implementing vector addition.

Theory:
Operator Overloading is a feature in C++ that allows us to define custom behaviors for operators when applied to user-defined types. It provides compile-time polymorphism by enabling different behaviors for the same operator based on operand types. In two-dimensional space, vector addition follows the rule of adding corresponding components.

Given two vectors V1(x1, y1) and V2(x2, y2), their sum is calculated as:

$$
V3(x3, y3) = (x1 + x2, y1 + y2)
$$

Algorithm:
1. Define a class with private data members.
2. Create a constructor to initialize the data members.
3. Overload the operator function within the class using the 'operator' keyword.
4. Implement the overloaded operator function to perform the required operation.
5. Create a display function to print the object state.
6. In the main function, create objects and use the overloaded operator.
7. Display the results.

Code:
*/

#include <iostream>
using namespace std;

class Vector {
private:
    int x, y, z;

public:
    Vector(int a, int b, int c) : x(a), y(b), z(c) {}

    Vector operator+(const Vector &v) {
        return Vector(x + v.x, y + v.y, z + v.z);
    }

    void display() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector v3 = v1 + v2;

    cout << "Vector 1: ";
    v1.display();
    cout << "Vector 2: ";
    v2.display();
    cout << "Vector Sum: ";
    v3.display();

    return 0;
}
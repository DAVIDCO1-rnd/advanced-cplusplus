#include <iostream>
#include <string>

using namespace std;

#define PI 3.14

class Shape {
public:
    virtual double calcArea() = 0;
    virtual string name() = 0;
    Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    double calcArea() {
        double area = radius * radius * PI;
        return area;
    }
    string name() { return "Circle"; }
    Circle(double radius) : radius(radius) {}
};

class Rectangle : public Shape {
private:
    double a, b;
public:
    double calcArea() {
        double area = a * b;
        return area;
    }
    string name() { return "Rectangle"; }
    Rectangle(double a, double b) : a(a), b(b) {}
};

int main()
{
    Shape* shapes[5] = { new Circle(5.0), new Circle(7.0), new Rectangle(3.0, 5.0), new Rectangle(13.0, 5.0), new Circle(15.0) };

    for (Shape* shape : shapes) {
        cout << shape->name() << ", area: " << shape->calcArea() << endl;
    }

}


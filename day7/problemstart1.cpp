#include <iostream>
using namespace std;
class Shape {
public:
    virtual void calculateArea() = 0; 
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Area of Circle: " << radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void calculateArea() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};
int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5.0);        
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(4.0, 3.0);  

    for (int i = 0; i < 3; ++i) {
        shapes[i]->calculateArea();
        delete shapes[i]; 
    }

    return 0;
}
  
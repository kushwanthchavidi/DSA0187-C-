#include <iostream>
class Shape {
public:
    virtual double area() = 0; 
    virtual double perimeter() = 0; 
};
class Rectangle : public Shape {
public:
    Rectangle(double length, double width) : length(length), width(width) {}
    double area() override {
        return length * width;
    }
    double perimeter() override {
        return 2 * (length + width);
    }
private:
    double length;
    double width;
};
class Triangle : public Shape {
public:
    Triangle(double base, double height, double side1, double side2, double side3) : base(base), height(height), side1(side1), side2(side2), side3(side3) {}
    double area() override {
        return 0.5 * base * height;
    }
    double perimeter() override {
        return side1 + side2 + side3;
    }
private:
    double base;
    double height;
    double side1;
    double side2;
    double side3;
};
int main() {
    Rectangle rectangle(5.0, 3.0);
    Triangle triangle(4.0, 5.0, 3.0, 4.0, 5.0);
    std::cout << "Rectangle area: " << rectangle.area() << std::endl;
    std::cout << "Rectangle perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Triangle area: " << triangle.area() << std::endl;
    std::cout << "Triangle perimeter: " << triangle.perimeter() << std::endl;
    return 0;
}
#include <iostream>
#include <cmath> 
using namespace std;
class Shape {
public:
    virtual double area() const {
        return 0.0;
    }
virtual ~Shape() {} 
};
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};
int main() {
   Rectangle rect(5, 10);  
    Circle circ(7);        
   cout << "Rectangle's Area: " << rect.area() << endl;  
    cout << "Circle's Area: " << circ.area() << endl;     
    return 0;
}
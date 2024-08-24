#include <iostream>
#include <cmath>
class Shape {
public:
    virtual double area() = 0; 
    virtual double volume() = 0;
};
class Sphere : public Shape {
public:
    Sphere(double radius) : radius(radius) {}

    double area() override {
        return 4 * M_PI * radius * radius;
    }
    double volume() override {
        return (4.0 / 3) * M_PI * radius * radius * radius;
    }
private:
    double radius;
};
class Cylinder : public Shape {
public:
    Cylinder(double radius, double height) : radius(radius), height(height) {}

    double area() override {
        return 2 * M_PI * radius * (radius + height);
    }
    double volume() override {
        return M_PI * radius * radius * height;
    }
private:
    double radius;
    double height;
};
int main() {
    Sphere sphere(5.0);
    Cylinder cylinder(3.0, 6.0);
    std::cout << "Sphere area: " << sphere.area() << std::endl;
    std::cout << "Sphere volume: " << sphere.volume() << std::endl;
    std::cout << "Cylinder area: " << cylinder.area() << std::endl;
    std::cout << "Cylinder volume: " << cylinder.volume() << std::endl;
    return 0;
}
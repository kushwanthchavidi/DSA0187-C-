#include <iostream>
class Vehicle {
public:
    virtual void drive() = 0; 
};
class Car : public Vehicle {
public:
    void drive() override {
        std::cout << "Driving a car..." << std::endl;
    }
};

class Truck : public Vehicle {
public:
    void drive() override {
        std::cout << "Driving a truck..." << std::endl;
    }
};
int main() {
    Vehicle* vehicle1 = new Car();
    Vehicle* vehicle2 = new Truck();
    vehicle1->drive();
    vehicle2->drive();
    delete vehicle1;
    delete vehicle2;
    return 0;
}
#include <iostream>
#include <string>
class Animal {
public:
    Animal(std::string name) : name(name) {}
    virtual void eat() = 0;
    std::string getName() { return name; }
private:
    std::string name;
};
class Herbivore : public Animal {
public:
    Herbivore(std::string name) : Animal(name) {}

    void eat() override {
        std::cout << getName() << " is eating plants." << std::endl;
    }
};
class Carnivore : public Animal {
public:
    Carnivore(std::string name) : Animal(name) {}

    void eat() override {
        std::cout << getName() << " is eating meat." << std::endl;
    }
};

int main() {
    Herbivore herb("Cow");
    Carnivore carn("Lion");

    herb.eat();
    carn.eat();

    return 0;
}
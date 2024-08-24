#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() const {
        cout << "Animal speaks" << endl;
    }
virtual ~Animal() {}  
};
class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow" << endl;
    }
};
class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof" << endl;
    }
};
int main() {
    Cat cat;
    Dog dog;
    cat.speak();  
    dog.speak();  
Animal* animal1 = &cat;
    Animal* animal2 = &dog;
animal1->speak();  
    animal2->speak();  
    return 0;
}
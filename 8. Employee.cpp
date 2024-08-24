#include <iostream>
class Employee {
public:
    Employee(std::string name, double basePay) : name(name), basePay(basePay) {}
    virtual double calculatePay() = 0; 
    std::string getName() { return name; }
protected:
    std::string name;
    double basePay;
};
class Manager : public Employee {
public:
    Manager(std::string name, double basePay, double bonus) : Employee(name, basePay), bonus(bonus) {}
    double calculatePay() override {
        return basePay + bonus;
    }
private:
    double bonus;
};
class Engineer : public Employee {
public:
    Engineer(std::string name, double basePay, double overtime) : Employee(name, basePay), overtime(overtime) {}
    double calculatePay() override {
        return basePay + overtime * 1.5;
    }
private:
    double overtime;
};
int main() {
    Manager manager("John Doe", 5000.0, 1000.0);
    Engineer engineer("Jane Smith", 4000.0, 10.0);
    std::cout << "Manager " << manager.getName() << "'s pay: $" << manager.calculatePay() << std::endl;
    std::cout << "Engineer " << engineer.getName() << "'s pay: $" << engineer.calculatePay() << std::endl;
    return 0;
}
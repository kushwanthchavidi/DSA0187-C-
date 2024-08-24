#include <iostream>
#include <string>
class Person{
	public:
		Person(std::string name) : name(name){} 
		virtual void work() = 0;
		std::string getName() { return name;}
		private:
			std::string name;
};
class Employee : public Person {
	public:
		Employee(std::string name,std::string department)
		:Person(name),department(department){}
		void work() override{
			std::cout<<getName()<<" is working in the "<<department<<" department."<<std::endl;
		}
		private:
			std::string department;
};
class Manager : public Person {
	public:
		Manager(std::string name, std::string team)
		:Person(name),team(team) {}
		void work() override{
			std::cout<<getName()<<" is managing the "<<team<<" team."<<std::endl;
		}
		private:
			std::string team;
};
int main(){
	Employee emp("John Doe","Sales");
	Manager mgr("John Doe","Marketing");
	emp.work();
	mgr.work();
	return 0;
}
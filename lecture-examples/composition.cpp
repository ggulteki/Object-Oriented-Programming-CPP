//----------------------------------------------------------------------------------------
// File: composition.cpp
// Description: An example for composition class in C++
// Date: March 19, 2025
// Explanation: Composition is a way to create a class that has another class as a member.
//----------------------------------------------------------------------------------------

#include <iostream>
#include <string>

class Address {
    public:
        Address(const std::string& s, const std::string& c, const std::string& st, const std::string& z)
            : street(s), city(c), state(st), zip(z) {}
        
        void print() const {
            std::cout << street << ", " << city << ", " << state << ", " << zip << std::endl;
        }
    private:
        std::string street;
        std::string city;
        std::string state;
        std::string zip;

};

class Person {
    public:
        Person(const std::string& f, const std::string& l, const Address& a)
            : firstName(f), lastName(l), address(a) {}
        
        void print() const {
            std::cout << firstName << " " << lastName << ", Adress: ";
            address.print();
        }
        private:
            std::string firstName;
            std::string lastName;
            Address address;
};

int main() {
    Address addr("123 Main St", "Anytown", "CA", "12345");
    Person person("John", "Doe", addr);
    person.print();
    
    return 0;
}
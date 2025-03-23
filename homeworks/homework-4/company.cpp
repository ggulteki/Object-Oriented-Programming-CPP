//----------------------------------------------------------------------------------------------
// File: company.cpp
// Description: A program that demonstrates the operator overloading and type conversion in C++.
// Author: Gokberk Gultekin
// Date: 3/23/2025
//---------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

class Company {
    public:
        Company() = default;
        Company(std::string name, int employees_count, double revenue, std::string size);
        Company operator+(const Company& c) const;
        operator std::string() const;

    private:
        std::string name_;
        int employees_count_;
        double revenue_;
        std::string size_;
};

Company::Company(std::string name, int employees_count, double revenue, std::string size) 
    : name_(name), employees_count_(employees_count), revenue_(revenue), size_(size) {}

Company Company::operator+(const Company& c) const {
    Company new_company;
    new_company.name_ = name_ + " and " + c.name_;
    new_company.employees_count_ = employees_count_ + c.employees_count_;
    new_company.revenue_ = revenue_ + c.revenue_;
    if (new_company.employees_count_ < 40) {
        new_company.size_ = "SE";
    } else if (new_company.employees_count_ >= 40 && new_company.employees_count_ < 100) {
        new_company.size_ = "ME";
    } else if (new_company.employees_count_ > 100) {
        new_company.size_ = "Company";
    }
    
    return new_company;
}

Company::operator std::string() const {
    return name_ + " " + std::to_string(revenue_) + " " + size_;
}

int main() {
    Company c1("Hawlett", 2340, 450000, "Company");
    Company c2("Peckard", 500, 300340, "Company");
    Company c3 = c1 + c2;
    std::cout << std::string(c3) << std::endl;


    Company c4("Weyland", 18, 45678.67, "SE");
    Company c5("Yutani", 28, 567345.11, "SE");
    Company c6 = c4 + c5;
    std::cout << std::string(c6) << std::endl;

    Company c7("Thyssen", 90, 456000, "ME");
    Company c8("Krupp", 1450, 890000, "Company");
    Company c9 = c7 + c8;
    std::cout << std::string(c9) << std::endl;

    
    return 0;
}
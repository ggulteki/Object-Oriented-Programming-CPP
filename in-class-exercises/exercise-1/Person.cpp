#include "Person.h"

Person::Person()
    : name_(""), gender_(""), age_(0) {}

Person::Person(const std::string& name, const std::string& gender, int age)
    : name_(name), gender_(gender), age_(age) {}

Person::Person(const Person& other)
    : name_(other.name_), gender_(other.gender_), age_(other.age_) {}

Person::~Person() {
    std::cout << "Destructor called for " << name_ << std::endl;
}

void Person::setName(const std::string& name) {
    name_ = name;
}

void Person::setGender(const std::string& gender) {
    gender_ = gender;
}

void Person::setAge(int age) {
    age_ = age;
}
std::string Person::getName() const {
    return name_;
}

std::string Person::getGender() const {
    return gender_;
}

int Person::getAge() const {
    return age_;
}

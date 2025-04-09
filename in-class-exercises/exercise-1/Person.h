#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
    public:
         // Default constructor
        Person();
         
        // Constructor with parameters
         // NOTE: Take the string reference as parameter to avoid unnecessary copy with the & operator
        Person(const std::string& name, const std::string& gender, int age);
        
        // Copy constructor
        Person(const Person& other);
        
        // Destructor
        ~Person();
        
        // Getter
        std::string getName() const;
        std::string getGender() const;
        
        int getAge() const;
        
        // Setter
        void setName(const std::string& name_);
        void setGender(const std::string& gender_);
        void setAge(int age_);

    private:
        std::string name_, gender_;
        int age_;
};

#endif
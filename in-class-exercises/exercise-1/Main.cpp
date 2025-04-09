#include "Person.h"

int main() {
    Person user1("John Doe", "male", 30);
    Person user2;
    
    std::cout << "Name: " << user1.getName() << " Gender: " << user1.getGender() << " Age: " << user1.getAge() << std::endl;
    std::cout << "Name: " << user2.getName() << " Gender: " << user2.getGender() << " Age: " << user2.getAge() << std::endl;
    
    // Create third person object with copy constructor then set the values for a different person
    Person user3(user2);
    user3.setName("Jane Doe");
    user3.setGender("female");
    user3.setAge(25);

    std::cout << "Name: " << user1.getName() << " Gender: " << user1.getGender() << " Age: " << user1.getAge() << std::endl;
    std::cout << "Name: " << user2.getName() << " Gender: " << user2.getGender() << " Age: " << user2.getAge() << std::endl;
    std::cout << "Name: " << user3.getName() << " Gender: " << user3.getGender() << " Age: " << user3.getAge() << std::endl;

    return 0;
}
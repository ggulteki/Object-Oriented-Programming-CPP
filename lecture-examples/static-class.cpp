// Purpose: Demonstrates static data members and static member functions

#include <iostream>

class Car {
    public:
        Car(const std::string& make, const std::string& model);
        ~Car();
        const std::string& getMake() const;
        const std::string& getModel() const;
        static int getCount();
    private:
        std::string make;
        std::string model;
        static int count;
};

// define and initialize static data member at file scope 
int Car::count = 0;

// define static member function that returns number of
// Car objects instantiated
int Car::getCount() {
    return count;
}

Car::Car(const std::string& make, const std::string& model)
    :make(make), model(model) {
        count++;
        std::cout << "Car constructor for " << make << model << " called." <<
            std::endl;
    }

// destructor deallocates memory for make and model strings
Car::~Car() {
    std::cout << "~Car() called for " << make << ' ' << model << std::endl;
    count--; // decrement static count of cars
    }

const std::string& Car::getMake() const {
    return make;
}

const std::string& Car::getModel() const {
    return model;
}

int main() {
    // use class name and binary scope resolution operator to
    // access static number function getCount
    std::cout << "Number of cars before instantiation of any objects is " << Car::getCount() << std::endl;
    
    // use new to dynamically create two new Cars
    // operator new also calls the object's constructor
    Car* car1Ptr = new Car("Toyota", "Corolla");
    Car* car2Ptr = new Car("Honda", "Civic");
    std::cout << "Number of cars after objects are instantiated is " << car1Ptr->getCount() << std::endl;
    std::cout << "\n\nCar 1: " << car1Ptr->getMake() << " " << car1Ptr->getModel()
        << "\nCar 2: " << car2Ptr->getMake() << " " << car2Ptr->getModel() << "\n\n";
    
    delete car1Ptr; // deallocate memory
    car1Ptr = 0; // disconnect pointer from free-store space
    
    delete car2Ptr; // deallocate memory
    car2Ptr = 0; // disconnect pointer from free-store space
    
    // no objects exist, so call static member function getCount again
    // using the class name and the binary scope resolution operator
    std::cout << "Number of cars after objects are deleted is " << Car::getCount() << std::endl;
    
    return 0;
}
        
//-------------------------------------------------------------------------------------------------------
// File: question1.cpp
// Description: This program is a simple program that demonstrates the use of classes and objects in C++.
// Author: Gokberk Gultekin
//-------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

// I didn't find an original class definition for employee so I created one. Because of I hadn't joined the class..
class employee {
    private:
        int id;
        string name;
    public:
        // An employee needs an id and a name to be created
        // Default constructor for question1 main function to work
        employee() : id(0), name("Unknown Person") {}
    
        // Constructor with parameters for creating an employee with id and name
        employee(int id, string name) : id(id), name(name) {}

        // Print the employee
        void print() { cout << "Employee ID: " << id << " Name: " << name << endl; }
};

class employeeList {
    private:
        int size;
        int length;
        employee* arr;
    public:
        employeeList() : size(1), length(0) { arr = new employee[size]; }
        employeeList(int size) : size(size), length(0) { arr = new employee[size]; }
    
        int listLength() { return length; }
    
        employee retrieve_employeeFromIndex(int index) {
        if (index >= 0 && index < length) {
            return arr[index];
        }
        
        // Err handling for out of bounds
        throw out_of_range("Index out of bounds");
    }
    
    // Add an employee to the list
    void addToList(employee& item) {
        // check if the list is full
        if (length < size) {
            arr[length] = item;
            length++;
        } else {
            cout << "List is full. Cannot add more employees." << endl;
        }
    }
    
    // Destructor to free the memory allocated for the list
    ~employeeList() { delete[] arr; }
};

// Function to print all employees in the list
void printEmployees(employeeList& empList) {
    for (int i = 0; i < empList.listLength(); i++) {
        empList.retrieve_employeeFromIndex(i).print();
    }
}

int main() {
    employee a;
    employee b(5, "John Doe");
    employee c(3, "Sue Doe");

    employeeList empList(3);

    empList.addToList(a);
    empList.addToList(b);
    empList.addToList(c);

    printEmployees(empList);
    
    // Print the list length to stdout
    cout << empList.listLength() << endl;

    return 0;
}

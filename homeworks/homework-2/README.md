# ASSIGNMENT

In this question, you will need to use your solution of Week2Question3. (employee class definition is given in Question3.) You can copy the definition of employee class and paste it above the employeeList definition. 

The definition of the class “employeeList” is given below. According to this declaration, EmployeeList objects store the addresses of employee objects in a dynamically allocated array (arr) defined inside the class.

```cpp
class EmployeeList {
    int size;           
    int length;         
    employee* arr;      
public:
    EmployeeList();                     
    EmployeeList(int size);            
    ~EmployeeList();                  

    int listLength() { return length; }
    employee retrieve_employeeFromIndex(int index);
    void addToList(Employee& item);
};
```
## Tasks

- Write the definition of constructors for employeeList class.
- size (int) Stores the size of the array. According to size value, every employeeList object creates an array of employee pointers.
- length(int)  Stores the number of items added to the array. Every time we add a new employee address to employeeList object, this value must be increased.
- arr (employee)  array of employee pointers.
- Default constructor initializes data members, size as 1, length as 0, creates the array of employee according to the size value. (You can use new keyword)
- Overloaded constructor takes 1 parameter for size. Initialize length as 0, create employee array according to the size value.
- Write the definition of retrieve_employeeFromIndex(int) function which takes index value as a parameter. And returns the object in that index of the array.
- Write the definition of addToList(employee& item) function which adds the address of the employe item to the arr.  length must be increased by one whenever a new item is added to the list. You need to check if there is enough space in the list.
- Write the definition of destructor for the class employeeList that frees the dynamically allocated array (arr).
- Write the definition of printEmployees as a non-member function that takes 1 parameter  a employeeList reference and prints the contents of that object. 
 
# Test your class below:

```cpp
void printEmployees(employeeList& empList) {
         …
}

int main() {   
    employee a;
    employee b(5, John Doe);
    employee c(3, Sue Doe);

    employeeList empList(employeeget_numberOfEmployees());

    empList.addToList(a);
    empList.addToList(b);
    empList.addToList(c);

    printEmployees(empList);

    cout  empList.listLength()  endl;

    return 0;

}
```
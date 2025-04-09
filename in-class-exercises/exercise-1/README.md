# In-class_exercise

Write a C++ class named Person with the following private data members: name, age, and gender. In addition,
the class should also have the following public member functions:

- A default constructor that initializes the data members to empty strings or zero values.
- A parameterized constructor that takes three arguments and assigns them to the data members.
- A copy constructor that creates a deep copy of another Person object.
- A destructor that prints a message indicating which object is being destroyed.
- Getters and setters for each data member that perform input validation and error handling.

Use encapsulation to ensure that the data members are not directly accessible or modifiable by other classes or functions.

Write a separate header, implementation, and main files for this class. In the main file, create two Person objects using different constructors and display their information. Then, create a third Person  object by copying one of the existing objects and modifying its information using setters. Finally, display the information of all three objects again and observe how the copy constructor and destructor work.
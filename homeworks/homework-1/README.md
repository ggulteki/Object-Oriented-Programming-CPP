# ASSIGNMENT

Write a class template named "myArray" that has two member fields and the following functions:
 
- int size: representing the number of elements in the "data" array.
- Generic typed "data" pointer: pointing to the values in the array.
- Default constructor that initializes size as 0, data pointer as NULL.
- Constructor with parameters that takes one int as size, checks if its positive and creates a dynamically allocated array.
- assign_value_at_index function that takes 2 parameters as below, and assigns the value for that index of the "data" array.
- int index
- Generic type of value
- retrieve_value_at_index function that takes 1 integer parameter as index and returns that value of the index in "data" array.
- getSize function that returns size of the "data" array.
- printArray function that prints "data" array.
 
 In main function, create 2 objects from the int and double implementation of this class template. Use second constructor to create objects with size value : 10.
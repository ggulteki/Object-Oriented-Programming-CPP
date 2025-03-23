//--------------------------------------------------------------------------------------------------
// File: myarray.cpp
// Description: Implementation of a generic array class template that can store any type of data.
// Author: Gokberk Gultekin
//--------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

template <typename T> 
    class MyArray {
        private:
            T *data;
            int size;
        public:
            MyArray() : data(nullptr), size(0) {}
            MyArray(int size) {
                if (size > 0) {
                    this->size = size;
                    data = new T[size];
                } else {
                    data = nullptr;
                }
            }
            
            void assign_value_at_index(int index, T value) {
                data[index] = value;
            }
            // Retrieve value at given index
            T retrieve_value_at_index(int index) {
                return data[index];
            }
            // Getter for size
            int get_size() {
                return size;
            }
            // Print the array on standard output
            void printArray() {
                for (int i = 0; i < size; i++) {
                    cout << data[i] << " ";
                }
                cout << endl;
            }
            // Destructor to free the memory allocated for data
            ~MyArray() {
                delete[] data;
            }
    };

int main() {
    MyArray<int> intArray(5);
    MyArray<double> DoubleArray(5);

    for (int i = 0; i < 5; i++) {
        intArray.assign_value_at_index(i, i);
        DoubleArray.assign_value_at_index(i, i + 0.5);
    }

    intArray.printArray();
    DoubleArray.printArray();

    return 0;
}

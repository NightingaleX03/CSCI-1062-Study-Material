// Dynamic Memory Notes to know

#include <iostream>
using namespace std;

int main() {
    // Allocate memory for an integer
    int* ptr = new int;

    // Assign a value to the allocated memory
    *ptr = 42;

    // Output the value
    cout << "Value: " << *ptr << endl;

    // Deallocate the memory
    delete ptr;

    // Allocate memory for an array of integers
    int* arr = new int[5];

    // Assign values to the array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Output the array values
    for (int i = 0; i < 5; ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Deallocate the array memory
    delete[] arr;

    return 0;
}

/* NOTES:
- Dynamic memory allocation allows you to allocate memory at runtime.
- The new operator is used to allocate memory.
- The delete operator is used to deallocate memory.
- Use delete for single variables and delete[] for arrays.
*/

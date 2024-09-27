// Pointer Notes to know

#include <iostream>
using namespace std;

void pointerExample() {
    int var = 20;   // actual variable declaration
    int *ptr;       // pointer variable

    ptr = &var;     // store address of var in pointer variable

    cout << "Value of var: " << var << endl; // 20
    cout << "Address of var: " << &var << endl; // 0x7ffebc1b3bfc
    cout << "Value stored in ptr (address of var): " << ptr << endl; // 0x7ffebc1b3bfc
    cout << "Value pointed to by ptr (value of var): " << *ptr << endl; // 20

    *ptr = 30; // changing the value at the address stored in ptr

    cout << "New value of var: " << var << endl; // 30
}

int main() {
    pointerExample();
    return 0;
}

/* NOTES:
- A pointer is a variable that stores the memory address of another variable.
- The address-of operator (&) is used to get the address of a variable.
- The dereference operator (*) is used to access the value at the address stored in a pointer.
- Pointers are used for dynamic memory allocation, passing arguments by reference, and working with arrays.
*/
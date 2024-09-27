/*
Write a C++ function called linearSearch that:
Takes in a pointer to the beginning of an array, and the size of the array.
Searches for a target integer using linear search.
Returns a pointer to the target integer if found, and nullptr otherwise.
*/

#include <iostream>
using namespace std;

int* linearSearch(int* arr, int size, int target) {
    for (int i = 0; i < size; i++) { // iterate through the array
        if (arr[i] == target) { // if the current element is the target
            return &arr[i]; // return a pointer to the target element
        }
    }
    return nullptr;
}
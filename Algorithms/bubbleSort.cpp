/*
Write a C++ function called bubbleSort that:
Takes in a pointer to the beginning of an array, and the size of the array.
Sorts the array using bubble sort.
Instead of using array indexing (like arr[i]), utilize pointer arithmetic.
*/

#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) { // i is the number of elements that are already sorted
        for (int j = 0; j < size - i - 1; ++j) { // j is the index of the element we're currently looking at
            if (*(arr + j) > *(arr + j + 1)) { // if the current element is greater than the next element
                int temp = *(arr + j); // swap the two elements
                *(arr + j) = *(arr + j + 1); // swap the two elements
                *(arr + j + 1) = temp; // swap the two elements
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    cout << "Sorted array: \n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

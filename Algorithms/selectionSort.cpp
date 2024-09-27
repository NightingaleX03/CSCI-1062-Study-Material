/*
Write a C++ function called selectionSort that:
Takes in a pointer to the beginning of an array, and the size of the array.
Sorts the array using selection sort.
Tip: You'll likely use pointer arithmetic.
*/

#include <iostream>
using namespace std;

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) { // i is the number of elements that are already sorted
        int minIndex = i; // assume the current element is the smallest
        for (int j = i + 1; j < size; ++j) { // j is the index of the element we're currently looking at
            if (*(arr + j) < *(arr + minIndex)) { // if the current element is less than the current minimum
                minIndex = j; // update the index of the minimum element
            }
        }
        if (minIndex != i) { // if the minimum element is not the current element
            int temp = *(arr + i); // swap the two elements
            *(arr + i) = *(arr + minIndex); // swap the two elements
            *(arr + minIndex) = temp; // swap the two elements
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    cout << "Sorted array: \n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
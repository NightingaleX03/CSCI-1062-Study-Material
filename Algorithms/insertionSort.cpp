/*
Write a C++ function called insertionSort that:
Takes in an array and its size.
Sorts the array using insertion sort.
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) { // i is the index of the element we're currently looking at
        int key = arr[i]; // store the current element
        int j = i - 1; // j is the index of the element to the left of the current element

        while (j >= 0 && arr[j] > key) { // while the element to the left is greater than the current element
            arr[j + 1] = arr[j]; // move the element to the right
            --j; // move to the next element to the left
        }

        arr[j + 1] = key; // insert the current element in the correct position
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, size);
    cout << "Sorted array: \n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
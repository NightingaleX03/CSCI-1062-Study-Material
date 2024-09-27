/*
Write a C++ function called binarySearch that:
Takes in an array and the size of the array.
Searches for a target integer using binary search.
Returns the index of the target integer if found, and -1 otherwise.
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1; // rightmost index

    while (left <= right) { // while there's still a range to search
        int mid = left + (right - left) / 2; // calculate the middle index

        if (arr[mid] == target) { // if the middle element is the target
            return mid; // return the index
        } else if (arr[mid] < target) { // if the middle element is less than the target
            left = mid + 1; // search the right half
        } else { // if the middle element is greater than the target
            right = mid - 1; // search the left half
        }
    }

    return -1;
}


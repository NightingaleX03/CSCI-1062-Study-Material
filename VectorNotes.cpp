// Vector Notes to know

#include <iostream>
using namespace std;
#include <vector>

int main() {
    // Create a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10); // Add 10 to the end
    numbers.push_back(20); // Add 20 to the end
    numbers.push_back(30); // Add 30 to the end

    // Display the elements
    cout << "Initial vector: ";
    for (int num : numbers) {
        cout << num << " "; // 10 20 30
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back(); // Remove 30

    // Display the elements after removal
    cout << "After pop_back: ";
    for (int num : numbers) {
        cout << num << " "; // 10 20
    }
    cout << endl;

    // Insert an element at the beginning
    numbers.insert(numbers.begin(), 5); // Insert 5 at the beginning

    // Display the elements after insertion
    cout << "After insert at beginning: ";
    for (int num : numbers) { // 5 10 20
        cout << num << " ";
    }
    cout << endl;

    // Erase the first element
    numbers.erase(numbers.begin()); // Erase 5

    // Display the elements after erasing
    cout << "After erase at beginning: ";
    for (int num : numbers) {
        cout << num << " "; // 10 20
    }
    cout << endl;

    // Modify an element
    if (!numbers.empty()) {
        numbers[0] = 15; // Change the first element to 15
    }

    // Display the elements after change
    cout << "After change: ";
    for (int num : numbers) {
        cout << num << " "; // 15 20
    }
    cout << endl;

    // Using iterators to display the elements
    cout << "Using iterators: ";
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " "; // 15 20
    }
    cout << endl;

    // Using const iterators to display the elements (Special Case didn't study in class yet I think-)
    cout << "Using const iterators: ";
    for (vector<int>::const_iterator it = numbers.cbegin(); it != numbers.cend(); ++it) {
        cout << *it << " "; // 15 20
    }
    cout << endl;

    return 0;
}

/* NOTES:
- A vector is a dynamic array that can grow and shrink in size.
- The push_back() function adds an element to the end of the vector.
- The pop_back() function removes the last element of the vector.
- The insert() function inserts an element at a specified position.
- The erase() function removes an element at a specified position.
- The [] operator can be used to access and modify elements.
- Iterators provide a way to traverse the elements of a vector.
- const iterators are used when the elements should not be modified.
*/
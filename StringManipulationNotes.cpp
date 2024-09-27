// String Manipulation Notes

#include <iostream>
#include <string>

using namespace std;
void stringManipulation() {
    string str1 = "Hello, World!";
    string str2 = " C++ Programming";

    // Navigating through string
    cout << "Original string: " << str1 << endl; // Hello, World!
    cout << "Characters in the string: ";
    for (char c : str1) {
        cout << c << ' '; // H e l l o ,   W o r l d !
    }
    cout << endl;

    // Erase part of the string
    str1.erase(5, 7); // Erase ", World"
    cout << "After erasing: " << str1 << endl; // Hello

    // Combining two strings
    string combined = str1 + str2; 
    cout << "Combined string: " << combined << endl; // Hello C++ Programming

    // Changing a single character
    combined[0] = 'h';
    cout << "After changing first character: " << combined << endl; // hello C++ Programming

    // Replacing part of the string
    combined.replace(0, 5, "Hi");
    cout << "After replacing first part: " << combined << endl; // Hi C++ Programming

    // Extracting a substring
    string substring = combined.substr(3, 10);
    cout << "Extracted substring: " << substring << endl; // C++ Progra
}

int main() {
    stringManipulation();
    return 0;
}

/* NOTES:
- The string class in C++ provides many functions for string manipulation.
- You can navigate through a string using iterators or range-based for loops.
- The erase function removes part of a string.
- The + operator can be used to concatenate strings.
- Individual characters in a string can be accessed and modified.
- The replace function replaces part of a string with another string.
- The substr function extracts a substring from a string.
*/

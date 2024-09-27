// Stack Notes to know

#include <iostream>
using namespace std;

#include <stack>

int main() {
    stack<int> s;

    // Adding elements to the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Accessing the top element
    cout << "Top element: " << s.top() << endl; // 30

    // Removing the top element
    s.pop(); // 30 is removed
    cout << "Top element after pop: " << s.top() << endl; // 20

    // Switching the top two elements
    int top1 = s.top(); // 20
    s.pop(); // 20 is removed
    int top2 = s.top(); // 10
    s.pop(); // 10 is removed
    s.push(top1); // 20 is added
    s.push(top2); // 10 is added

    cout << "Top element after switching: " << s.top() << endl; // 10

    return 0;
}

/* NOTES:
- A stack is a container that follows the Last In First Out (LIFO) principle.
- The top() function returns a reference to the top element of the stack.
- The pop() function removes the top element of the stack.
- The push() function adds an element to the top of the stack.
*/

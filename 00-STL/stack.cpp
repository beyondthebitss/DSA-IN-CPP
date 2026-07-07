#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Top Element
    cout << "Top: " << s.top() << endl;

    // Size
    cout << "Size: " << s.size() << endl;

    // Display (using copy)
    stack<int> temp = s;
    cout << "Stack Elements: ";
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Remove
    s.pop();

    cout << "After pop(), Top: " << s.top() << endl;

    // Empty
    if (s.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    // Clear
    while (!s.empty())
        s.pop();

    cout << "Size after clear(): " << s.size() << endl;

    return 0;
}

/*
Stack (STL Stack)
-> Container Adaptor.
-> Follows LIFO (Last In First Out).
-> Uses deque as the default underlying container.
-> Access only the top element.
-> Common Functions:
   push(), pop(), top()
   size(), empty()
*/
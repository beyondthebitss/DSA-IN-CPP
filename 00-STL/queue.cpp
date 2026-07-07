#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // Front & Back
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Display (using copy)
    queue<int> temp = q;
    cout << "Queue Elements: ";
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Remove
    q.pop();

    cout << "After pop(), Front: " << q.front() << endl;

    // Empty
    if (q.empty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";

    // Clear
    while (!q.empty())
        q.pop();

    cout << "Size after clear(): " << q.size() << endl;

    return 0;
}

/*
Queue (STL Queue)
-> Follows FIFO (First In First Out).
-> Insertion from rear using push().
-> Deletion from front using pop().
-> Access using front() and back().
-> Common Functions:
   push(), pop(), front(), back()
   size(), empty()
*/
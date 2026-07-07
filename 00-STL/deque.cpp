#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // Insertion at both ends
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(10);
    dq.push_front(5);
//5 10 20 30
    // Iterate and display elements
    cout << "Deque: ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // Access elements
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;
    cout << "Element at index 1: " << dq[1] << endl;
    cout << "Element at index 2 using at(): " << dq.at(2) << endl;

    // Size
    cout << "Size: " << dq.size() << endl;

    // Remove  elements from both ends
    dq.pop_front();
    dq.pop_back();

    cout << "After pop_front() and pop_back(): ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;

    // Empty
    if (dq.empty())
        cout << "Deque is empty" << endl;
    else
        cout << "Deque is not empty" << endl;

    // Clear
    dq.clear();

    cout << "Size after clear(): " << dq.size() << endl;

    return 0;
}
// Deque (Double Ended Queue)
// -> Insertion/Deletion from both front and back: O(1)
// -> Random access: O(1)
// -> Uses non-contiguous memory
// -> Better than vector when frequent front operations are required
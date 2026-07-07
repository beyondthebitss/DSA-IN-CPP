#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // Insertion
    l.push_back(20);
    l.push_back(30);
    l.push_front(10);
    l.push_front(5);

    // Display
    cout << "List: ";
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    // Front and Back
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;

    // Size
    cout << "Size: " << l.size() << endl;

    // Insert at a specific position
    auto it = l.begin();
    advance(it, 2);      // Move iterator to index 2
    l.insert(it, 15);

    cout << "After Insert: ";
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    // Erase an element
    it = l.begin();
    advance(it, 2);
    l.erase(it);

    cout << "After Erase: ";
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    // Remove by value
    l.remove(20);

    cout << "After remove(20): ";
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    // Reverse
    l.reverse();

    cout << "After Reverse: ";
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    // Sort
    l.sort();

    cout << "After Sort: ";
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    // Empty
    if (l.empty())
        cout << "List is empty\n";
    else
        cout << "List is not empty\n";

    // Clear
    l.clear();

    cout << "Size after clear(): " << l.size() << endl;

    return 0;
}

/*
Linked List (STL List)
-> Doubly Linked List.
-> Fast insertion/deletion anywhere using iterators.
-> No random access (can't use l[i]).
-> Stores elements in non-contiguous memory.
-> Common Functions:
   push_front(), push_back(), pop_front(), pop_back()
   insert(), erase(), remove(), reverse(), sort()
   front(), back(), size(), empty(), clear()
*/
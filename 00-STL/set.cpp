#include <iostream>
#include <set>
using namespace std;

int main() {

    // Creating a set
    set<int> s;

    // Inserting elements
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10); // Duplicate (ignored)

    cout << "Set elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Size
    cout << "Size: " << s.size() << endl;

    // Check if element exists
    if (s.find(20) != s.end())
        cout << "20 Found" << endl;
    else
        cout << "20 Not Found" << endl;

    // Count (returns 0 or 1 in set)
    cout << "Count of 10: " << s.count(10) << endl;

    // Erase an element
    s.erase(20);

    cout << "After erasing 20: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // First and last element
    cout << "Smallest: " << *s.begin() << endl;
    cout << "Largest: " << *prev(s.end()) << endl;

    // Empty check
    if (s.empty())
        cout << "Set is empty" << endl;
    else
        cout << "Set is not empty" << endl;

    // Clear all elements
    s.clear();

    cout << "Size after clear: " << s.size() << endl;

    return 0;
}
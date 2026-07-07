#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    // Insertion
    ms.insert(30);
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(30);
    ms.insert(40);

    // Display
    cout << "Multiset Elements: ";
    for (auto x : ms)
        cout << x << " ";
    cout << endl;

    // Size
    cout << "Size: " << ms.size() << endl;

    // Count
    cout << "Count of 10: " << ms.count(10) << endl;

    // Find
    auto it = ms.find(20);
    if (it != ms.end())
        cout << "20 Found" << endl;

    // Erase one occurrence
    it = ms.find(10);
    if (it != ms.end())
        ms.erase(it);

    cout << "After erasing one 10: ";
    for (auto x : ms)
        cout << x << " ";
    cout << endl;

    // Erase all occurrences
    ms.erase(30);

    cout << "After erasing all 30s: ";
    for (auto x : ms)
        cout << x << " ";
    cout << endl;

    // Empty
    if (ms.empty())
        cout << "Multiset is empty\n";
    else
        cout << "Multiset is not empty\n";

    // Clear
    ms.clear();

    cout << "Size after clear(): " << ms.size() << endl;

    return 0;
}

/*
Multiset (STL Multiset)
-> Stores elements in sorted order.
-> Duplicate elements are allowed.
-> Implemented using Red-Black Tree.
-> Search, Insert, Erase: O(log n)
-> Common Functions:
   insert(), erase(), find(), count()
   size(), empty(), clear()
   begin(), end()
*/
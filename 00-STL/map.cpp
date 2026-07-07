#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    // Insertion
    mp[3] = "Three";
    mp[1] = "One";
    mp[2] = "Two";

    mp.insert({4, "Four"});
    mp.insert(make_pair(5, "Five"));

    // Display
    cout << "Map Elements:\n";
    for (auto x : mp)
        cout << x.first << " -> " << x.second << endl;

    // Size
    cout << "\nSize: " << mp.size() << endl;

    // Find
    auto it = mp.find(3);
    if (it != mp.end())
        cout << "Found: " << it->first << " -> " << it->second << endl;

    // Count
    cout << "Count of key 2: " << mp.count(2) << endl;

    // Erase
    mp.erase(2);

    cout << "\nAfter Erase:\n";
    for (auto x : mp)
        cout << x.first << " -> " << x.second << endl;

    // Empty
    if (mp.empty())
        cout << "Map is empty\n";
    else
        cout << "Map is not empty\n";

    // Clear
    mp.clear();

    cout << "Size after clear(): " << mp.size() << endl;

    return 0;
}

/*
Map (STL Map)
-> Stores key-value pairs.
-> Keys are unique and stored in sorted order.
-> Implemented using Red-Black Tree.
-> Search, Insert, Erase: O(log n)
-> Common Functions:
   insert(), erase(), find(), count()
   size(), empty(), clear()
   begin(), end()
*/
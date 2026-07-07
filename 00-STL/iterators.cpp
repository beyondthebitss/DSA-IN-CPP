#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // begin() and end()
    cout << "Forward Traversal: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // auto keyword
    cout << "Using auto: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // cbegin() and cend()
    cout << "Const Iterator: ";
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // rbegin() and rend()
    cout << "Reverse Traversal: ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Access using iterator
    auto it = v.begin();
    cout << "First Element: " << *it << endl;

    ++it;
    cout << "Second Element: " << *it << endl;

    it += 2;
    cout << "Fourth Element: " << *it << endl;

    // insert()
    v.insert(v.begin() + 2, 25);

    cout << "After Insert: ";
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    // erase()
    v.erase(v.begin() + 2);

    cout << "After Erase: ";
    for (auto x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}
// Iterators are used to traverse STL containers.
// begin() -> Points to the first element.
// end() -> Points after the last element.
// rbegin() / rend() -> Traverse in reverse order.
// cbegin() / cend() -> Read-only (const) iterators.
// *it -> Access the element pointed by the iterator.
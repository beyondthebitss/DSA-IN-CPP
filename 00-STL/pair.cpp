#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {

    // Pair Declaration
    pair<int, string> p1 = {1, "One"};

    cout << "First: " << p1.first << endl;
    cout << "Second: " << p1.second << endl;

    // make_pair()
    pair<int, char> p2 = make_pair(10, 'A');

    cout << "\nPair 2: " << p2.first << " " << p2.second << endl;

    // Swapping Pairs
    pair<int, int> p3 = {5, 10};
    pair<int, int> p4 = {15, 20};

    swap(p3, p4);

    cout << "\nAfter Swap:\n";
    cout << "p3: " << p3.first << " " << p3.second << endl;
    cout << "p4: " << p4.first << " " << p4.second << endl;

    // Pair inside Vector
    vector<pair<int, string>> v;

    v.push_back({101, "Alice"});
    v.push_back({102, "Bob"});
    v.push_back(make_pair(103, "Charlie"));

    cout << "\nVector of Pairs:\n";
    for (auto x : v)
        cout << x.first << " -> " << x.second << endl;

    return 0;
}

/*
Pair (STL Pair)
-> Stores two values together.
-> Access using first and second.
-> Can store different data types.
-> Common Functions:
   make_pair(), swap()
-> Widely used in maps, graphs, and vectors.
*/
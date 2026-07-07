#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    // Basic Lambda Function
    auto greet = []() {
        cout << "Hello from Lambda Function!" << endl;
    };

    greet();

    // Lambda with Parameters
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << "Sum = " << add(10, 20) << endl;

    // Lambda with sort()
    vector<int> v = {5, 2, 9, 1, 7};

    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b;   // Descending Order
    });

    cout << "Sorted (Descending): ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // Lambda with for_each()
    cout << "Elements: ";
    for_each(v.begin(), v.end(), [](int x) {
        cout << x << " ";
    });
    cout << endl;

    // Lambda with find_if()
    auto it = find_if(v.begin(), v.end(), [](int x) {
        return x % 2 == 0;
    });

    if (it != v.end())
        cout << "First Even Number: " << *it << endl;

    return 0;
}
// Lambda: Anonymous (unnamed) function.
// Syntax: [capture](parameters) -> return_type { };
// Used for short, one-time functions.
// Commonly used with STL algorithms (sort, for_each, count_if, etc.).
// Capture:
// []      -> No variables
// [=]     -> Capture all by value
// [&]     -> Capture all by reference
// [x]     -> Capture x by value
// [&x]    -> Capture x by reference
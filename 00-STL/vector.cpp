#include <iostream>
#include <vector>
using namespace std;

int main() {
    //1D Vector
    vector<int> v1;  // empty vector

    // Elements add karna
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    cout << "1D Vector elements: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Access karna
    cout << "First element (v1[0]): " << v1.at(0) << endl;

    // Remove last element
    v1.pop_back();
    cout << "After pop_back: ";
    for (int num : v1) {
        cout << num << " ";
    }
    cout << endl;

    // 2D Vector
    vector<vector<int>> v2;  // 2D vector

    // Row 1
    v2.push_back({1, 2, 3});
    // Row 2
    v2.push_back({4, 5, 6});
    // Row 3
    v2.push_back({7, 8, 9});

    cout << "\n2D Vector elements:" << endl;
    for (int i = 0; i < v2.size(); i++) {
        for (int j = 0; j < v2[i].size(); j++) {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }

    // Access specific element
    cout << "Element at (2,2): " << v2[1][1] << endl;

    // Modify element
    v2[0][0] = 100;
    cout << "After modification (0,0 = 100):" << endl;
    for (auto row : v2) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    
    vector<string> names = {"Ram", "Shyam", "Geeta"};
    cout << "\nVector of Strings: ";
    for (auto &name : names) {
        cout << name << " ";
    }
    cout << endl;


    cout << "\nMatrix style printing (2D vector):" << endl;
    for (int i = 0; i < v2.size(); i++) {
        for (int j = 0; j < v2[i].size(); j++) {
            cout << v2[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

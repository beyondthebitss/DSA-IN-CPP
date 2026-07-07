#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;

    while (n > 0) {
        count++;
        n /= 10;
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0)
        cout << "Number of digits: 1";
    else
        cout << "Number of digits: " << countDigits(n);

    return 0;
}

/*
Count Digits
-> Counts the total number of digits in a number.
-> Time Complexity: O(log10 n)
-> Space Complexity: O(1)
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Upper part
    for (int i = 1; i <= n; i++) {
        // Left side
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = n; i >= 1; i--) {
        // Left side
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right side
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

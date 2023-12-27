#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows in the middle section

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    // Lower half of the pattern
    for (int i = n ; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        // Print decreasing numbers
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

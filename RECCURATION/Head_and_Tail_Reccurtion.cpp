#include <iostream>
using namespace std;

// 🔵 Head Recursion: calls first, prints later
void headRecursion(int n) {
    if (n == 0) return;
    headRecursion(n - 1);         // Recursive call first
    cout << "Head: " << n << endl; // Work after call
}

// 🔴 Tail Recursion: prints first, calls later
void tailRecursion(int n) {
    if (n == 0) return;
    cout << "Tail: " << n << endl; // Work before call
    tailRecursion(n - 1);         // Recursive call after
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\n--- Head Recursion Output ---" << endl;
    headRecursion(n);

    cout << "\n--- Tail Recursion Output ---" << endl;
    tailRecursion(n);

    return 0;
}

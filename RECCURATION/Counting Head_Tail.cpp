#include <iostream>
using namespace std;

void countHead(int n) {
    if (n == 0)
        return;

    // Recursive call first (HEAD)
    countHead(n - 1);

    // Work after recursive call
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Counting (Head Recursion): ";
    countHead(n);
    return 0;
}


//tail
#include <iostream>
using namespace std;

void countTail(int i, int n) {
    if (i > n)
        return;

    // Work before recursive call (TAIL)
    cout << i << " ";

    // Tail recursive call
    countTail(i + 1, n);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Counting (Tail Recursion): ";
    countTail(1, n);
    return 0;
}


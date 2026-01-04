#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fib1 = fib(n - 1);
    int fib2 = fib(n - 2);
    return fib1 + fib2;
}

int main() {
    for (int i = 0; i < 10; i++) {
        cout << "i = " << i << " : " << fib(i) << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    Counter::showCount();  // Output: Number of objects created: 2
    Counter c3;
    Counter::showCount();  // Output: Number of objects created: 3
    return 0;
}

//because they use the single memory in the program hence there is no need to call function c1.showcount hence they have same menmory hence 
//they call in a way that countr::showcount.
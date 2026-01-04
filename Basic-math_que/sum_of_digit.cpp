#include <iostream>
using namespace std;
int main()
{
    int num = 3;
    int digit = 0;
    int sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    cout << sum;
}
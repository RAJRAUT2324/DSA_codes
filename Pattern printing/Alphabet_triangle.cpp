#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        char ch = 'A';
        for (int col = 1; col <= row; col++)
        {
            cout << ch;
            ch++;
        }

        cout << endl;
    }
}

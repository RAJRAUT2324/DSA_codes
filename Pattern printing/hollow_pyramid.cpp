#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        if (row == 1 | row == n)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout<<"*";
            for(int col=1;col<=((row-1)*2-1);col++)
            {
                cout<<" ";
            }
            cout<<"*";
        }

        cout << endl;
    }
}
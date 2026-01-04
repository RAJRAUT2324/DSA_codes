#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter n,m :";
    cin >> n>>m;
    for (int row = 1; row <= n; row++) // outer loop for rows
    {
        if (row == 1 || row == n)
        {
            for (int col = 1; col <= m; col++) // inner loop for column's
            {
                cout << "*";
            }
        }
        else
        { 
            cout<<"*";
              for (int col = 1; col <= m-2; col++) // inner loop for column's
            {
               cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;

        cout << endl;
    }
}
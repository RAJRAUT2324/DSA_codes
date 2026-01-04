#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    for (int row = 1; row <= n; row++) // outer loop for rows
    {
        if (row == 1 | row == 2|row==n)
        {
            for (int col = 1; col <= row; col++) // inner loop for column's
            {
                cout << "*";
            }
        }
        else
        {
           cout<<'*';
            for (int col = 1; col <= (row-2); col++) // inner loop for column's
            {
                cout <<" ";
            }
             cout<<'*';
        }
       
        cout << endl;
    }
}
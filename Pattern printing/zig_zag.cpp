#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    int maxspace = 2 * n - 1;
    int  part2=n+1;
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row - 1; col++)
        {
            cout << " ";
        }
        cout << "*";
        for (int col = 1; col <= maxspace; col++)
        {
            cout << " ";
        }
        cout << "*";
        maxspace = maxspace - 2;
        cout << endl;
    }
    //part2
      for (int row = 1; row <= part2; row++)
      {
        for (int col = 1; col <= part2-row; col++)
        {
            cout << " ";
        }
        if(row==1)
        {
            cout<<"*";
        }
        else
        {
        cout<<"*";
        for(int col=1;col<=2*row-3;col++)
        {
            cout<<" ";
        }
       
        cout<<"*";
        }
        cout<<endl;
      }
}
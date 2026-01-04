#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            cout<<" ";
        }
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    n--;//it will work single time 
    for(int row=1;row<=n;row++)
    {
     for(int col=1;col<=row;col++)
     {
        cout<<" ";
     }
    for(int col=1;col<=2*n-2*row+1;col++)
     {
        cout<<"*";
     }
      cout<<endl;
    }
}

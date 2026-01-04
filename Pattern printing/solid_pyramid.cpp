#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    for(int row=1;row<=n;row++)
    {
    
        //spaces
        for(int col=1;col<=(n-row);col++)
        {
            cout<<" ";
        }
        //starts
        for(int col=1;col<=(2*row-1);col++)   //it is an formula for the odd number
        {
           cout<<"*";
        }
        cout<<endl;
    }
}
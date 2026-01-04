#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    int space=n*2-2;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=row;col++)
        {
            cout<<col;
        }
         for(int col=1;col<=space;col++)
        {
            cout<<"*";
        }
        space=space-2;
         for(int col=row;col>=1;col--) // these formula for the reverse number printing
        {
            cout<<col;
        }
       

        cout<<endl;
    }
}
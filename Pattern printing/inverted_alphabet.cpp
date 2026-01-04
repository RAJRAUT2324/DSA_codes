#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    int ch=n;
    for(int row=1;row<=n;row++)
    {
        for(char col='A';col<'A'+ch;col++) //pattern for Abcd printing
        {
            cout<<col;
            
        }
        ch--;
        cout<<endl;
    }
}
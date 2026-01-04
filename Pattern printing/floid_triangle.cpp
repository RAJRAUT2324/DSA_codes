#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cout << "Enter n :";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count; //count is used here for the increasing the number 
            count++;
        }
        cout<<endl;
    }
}
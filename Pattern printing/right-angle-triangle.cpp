#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter n :";
cin>>n;
for(int row=1;row<=n;row++) //outer loop for rows
{
    for(int col=1;col<=row;col++)//inner loop for column's
{
    cout<<"*";
}
cout<<endl;
}
}
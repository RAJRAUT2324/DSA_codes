#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<"Enter n m :";
cin>>n>>m;
for(int row=1;row<=n;row++) //outer loop for rows
{                           //it is an rectangle hencenumber of rows is always less than column's
    for(int col=1;col<=m;col++)//inner loop for column's
{
    cout<<"*";
}
cout<<endl;
}
}
#include<iostream>
using namespace std;
int main()
{  cout<<"print by row";
    cout<<endl;
    int arr[3][2];
    for(int row=0;row<3;row++)//row
    {
        for(int col=0;col<2;col++)//colum
        {   
            cout<<"Enter elements of array :";
            cin>>arr[row][col];
        }
    }
        for(int row=0;row<3;row++)//row
    {
        for(int col=0;col<2;col++)//colum
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"print by colum";
    cout<<endl;
    cout<<endl;

     int arr[3][2];
     
    for(int col=0;col<2;col++)//row
    {
        for(int row=0;row<3;row++)//colum
        {   
            cout<<"Enter elements of array :";
            cin>>arr[row][col];
        }
    }
        for(int col=0;col<2;col++)//row
    {
        for(int row=0;row<3;row++)//colum
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
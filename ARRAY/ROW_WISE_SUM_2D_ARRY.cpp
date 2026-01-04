#include <iostream>
using namespace std;
int main()
{
    // cout << endl;
    // int arr[3][2];
    // for (int row = 0; row < 3; row++) // row
    // {
    //     for (int col = 0; col < 2; col++) // colum
    //     {
    //         cout << "Enter elements of array :";
    //         cin >> arr[row][col];
    //     }
    // }
    // for (int row = 0; row < 3; row++) // row
    // {   int sum=0;
    //     for (int col = 0; col < 2; col++) // colum
    //     {
    //         sum=sum+arr[row][col];
    //         cout << arr[row][col] << " ";
    //     }
    //     cout<<"sum="<<sum;
    //     sum=0;
    //     cout << endl;
    // }
    // return 0;
    cout<<endl;
    cout<<" colum wise sum";
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
    {  int sum=0;
        for(int row=0;row<3;row++)//colum
        {
            sum=sum+arr[row][col];
            cout<<arr[row][col]<<" ";
        }
        cout<<"sum ="<<sum;
        cout<<endl;
    }
    return 0;

}

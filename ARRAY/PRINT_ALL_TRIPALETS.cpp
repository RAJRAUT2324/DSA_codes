#include <iostream>
#include<vector>
using namespace std;
int main()
{    vector<int>arr={1,2,3,4};
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                    cout<<arr[i]<<arr[j]<<arr[k]<<endl;
            }
        }
    }
    return 0;
}
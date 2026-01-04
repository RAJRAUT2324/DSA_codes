#include <iostream>
#include <vector>
#include<stack>
using namespace std;
void solve(stack<int>&s,vector<int>&ans,vector<int>&arr)
{
    int n=arr.size();
    for(int i=n-1;i>=0;i--)
    {
        int element=arr[i];
        while (!s.empty() && s.top() >= element)
        {
            s.pop();
        }
        //yaha tak aaya to samazo vo small hai
        ans.push_back(s.top());
        s.push(element);
    }
}
int main()
{
    vector<int>arr;
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(11);
    vector<int>ans;
    stack<int>s;
    s.push(-1);
    solve(s,ans,arr);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;

}
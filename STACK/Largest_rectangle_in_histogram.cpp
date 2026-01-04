class Solution {
public:
//logic to find the next smaller element
void solven(vector<int>&ansn,vector<int>&arr)
{
    stack<int>s;
    s.push(-1);
    int n=arr.size();
    for(int i=n-1;i>=0;i--)
    {
        int element=arr[i];
        while ( s.top()!=-1 && arr[s.top()]>= element)
        {
            s.pop();
        }
        //yaha tak aaya to samazo vo small hai
        ansn.push_back(s.top());
        s.push(i);
    }
}
//logic to find the previous small element
 void solvep(vector<int>&ansp,vector<int>&arr)
{
    stack<int>s;
    s.push(-1);
    int n=arr.size();
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];
        while ( s.top()!=-1 && arr[s.top()]>= element)
        {
            s.pop();
        }
        //yaha tak aaya to samazo vo small hai
        ansp.push_back(s.top());
        s.push(i);
    }
}
//logic how to find smallest element
int largestRectangleArea(vector<int>& heights) {
vector<int>ansn;
vector<int>ansp;
solven(ansn,heights);
reverse(ansn.begin(),ansn.end());
for(int i=0;i<ansn.size();i++)
{
    if(ansn[i]==-1)
    {
        ansn[i]=ansn.size();
    }
}
solvep(ansp,heights);
//to find width
vector<int>finall;
for(int i=0;i<heights.size();i++)
{
    int width=ansn[i]-ansp[i]-1;
    int hight=heights[i];
    int f=hight*width;
    finall.push_back(f);
}
int mans=INT_MIN;
for(int i=0;i<finall.size();i++){
    mans=max(mans,finall[i]);

}
return mans;
 }
};
// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

// Example 1:


// Input: heights = [2,1,5,6,2,3]
// Output: 10
// Explanation: The above is a histogram where width of each bar is 1.
// The largest rectangle is shown in the red area, which has an area = 10 units.
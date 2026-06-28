
int Solution::rowWithMaxOnes(const vector<vector<int>>& mat) {
    int n=mat.size();
    int m=mat[0].size();

    int maxCnt=0;
    int maxInd=-1;

    for(int i=0;i<n;i++)
    {
        auto it = lower_bound(mat[i].begin(), mat[i].end(), 1);
        int firstIndex=it-mat[i].begin();
        int ones=m-firstIndex;

        if(ones>maxCnt)
        {
            maxCnt=ones;
            maxInd=i;
        }
    }
    return maxInd;
}
// Input:
// mat = [[0, 0, 0, 1], [0, 0, 1, 1], [0, 1, 1, 1], [1, 1, 1, 1]]

// Output:
// 3
// User function template for C++
//actual lower bond representation
class Solution {
  public:
  int firstOccurance(int i,vector<vector<int>> &arr)
  {
        int s=0;
        int row=arr.size();
        int col=arr[0].size();
        int e=col-1;
        int m=-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int r=i;
            int c=mid;
            if(arr[r][c]==1)
            {
                m=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
        }
        return m;
  }
    int rowWithMax1s(vector<vector<int>> &arr) {
        int row=arr.size();
        int col=arr[0].size();
        int e=(row*col)-1;
        int maxu=INT_MIN;
        int f=-1;
        for(int i=0;i<row;i++)
        {
            int mid=firstOccurance(i,arr);
            if(mid!=-1) 
            {
            int count=col-mid;
            
            if(count>maxu)
            {
                maxu=count;
                f=i;
            }
            }
            
        }
        return f;
        
    }
};
Row with max 1s
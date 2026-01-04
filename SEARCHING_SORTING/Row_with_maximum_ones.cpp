
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
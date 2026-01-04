int Solution::rowWithMaxOnes(const vector<vector<int>>& mat) {
    int row=mat.size();
    int col=mat[0].size();
    int maxcount=0;
    int maxindex=-1;

    for(int i=0;i<row;i++)
    {
        auto it=lower_bound(mat[i].begin(),mat[i].end(),1);
        int first=it-mat[i].begin();
        int once=col-first;
        if(once>maxcount)
        {
            maxcount=once;
            maxindex=i;
        }

    }
    return maxindex;
}
// You are given a non-empty grid mat with n rows and m columns consisting of only 0s and 1s. Each row in the grid is sorted in ascending order. Your task is to find the index of the row with the maximum number of 1s. If multiple rows have the same number of 1s, return the index of the first such row. If no row contains at least one 1, return -1.

// Example
// Input:
// mat = [[0, 0, 0, 1], [0, 0, 1, 1], [0, 1, 1, 1], [1, 1, 1, 1]]

// Output:
// 3
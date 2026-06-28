class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int val=INT_MIN;
        int index=-1;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
            }
            if(val<count)
            {
               val=count;
               index=i;
            }
        }
        
        return {index,val};
    }
};
2643. Row With Maximum Ones
std::vector<int> columnSums(const std::vector<std::vector<int>>& matrix) {
vector<int>ans;
int row=matrix.size();
int col=matrix[0].size();
for(int i=0;i<col;i++)
{   int sum=0;
    for(int j=0;j<row;j++)
    {
      sum=sum+matrix[j][i];
    }
    ans.push_back(sum);
    
}
return ans;
}
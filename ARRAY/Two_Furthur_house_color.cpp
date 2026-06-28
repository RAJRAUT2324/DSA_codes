class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int fans=-1;
        for(int j=0;j<colors.size();j++)
        {
            int v1=colors[j];
            int ans=-1;


            for(int i=colors.size()-1;i>=j;i--)
        {
            if(v1!=colors[i])
            {
                ans=abs(j-i);
               
            }
            fans=max(fans,ans);
        }
        }
        
        return fans;
    }
};
2078. Two Furthest Houses With Different Colors
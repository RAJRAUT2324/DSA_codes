class Solution {
public:
    int minimumDeletions(string s) {
        int bcount=0;
        int deletion=0;
        for(auto x : s)
        {
            if(x=='b') 
            {
                bcount++;
            }
            else
            {
                deletion=min(deletion+1,bcount);
            }
        }
        return deletion;
    }
};
1653. Minimum Deletions to Make String Balanced
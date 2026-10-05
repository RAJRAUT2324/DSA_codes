class Solution {
public:
    bool isHappy(int n) {
        unordered_map<long long,long long>mp;
        while(n!=1)
        {
            if(mp.find(n)!=mp.end())
            {
               return false;
            }
            else
            {
                long long m=n;
                long long val=0;
                while(m)
                {
                    long long digit=m%10;
                    val=val+digit*digit;
                    m=m/10;
                }
                mp[n]=val;
                n=val;
            }
        }
     return n==1 ? true : false;
    }
};
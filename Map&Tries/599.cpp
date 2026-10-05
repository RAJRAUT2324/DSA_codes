class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        int count=0;
        for(auto x : list1)
        {
            mp1[x]=count++;
        }
        count=0;
        for(auto x : list2)
        {
            mp2[x]=count++;
        }
        vector<string>a;
        string ans;
        int minu=INT_MAX;
        vector<pair<int,string>>vp;
        for(auto x: list1)
        {
            
            if(mp1.find(x)!=mp1.end() && mp2.find(x)!=mp2.end())
            {
                int tup=mp1[x]+mp2[x];
              if(tup<=minu)
            {
                minu=tup;
                ans=x;
                vp.push_back({tup, ans});
            }
            }
           
            

        }
        sort(vp.begin(),vp.end());
        int cpm=INT_MAX;
        for(auto x : vp)
        {
            if(cpm>=x.first)
            {
                cpm=x.first;
                a.push_back(x.second);
            }
        }
        return a;
    }
};
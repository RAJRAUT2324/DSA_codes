

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
       int rmax=arr[arr.size()-1];
       vector<int>ans;
       for(int i=arr.size()-1;i>=0;i--)
       {
           if(i==arr.size()-1)
           {
               ans.push_back(arr[i]);
           }
           else
           {
            if(arr[i]>=rmax)
           {
               ans.push_back(arr[i]);
               rmax=arr[i];
           }
           }
          
       }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
Array Leaders
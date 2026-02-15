Subarray with 0 sum
class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
    set<int>s;
    int presum=0;
    for(int i=0;i<arr.size();i++)
    {
        presum=presum+arr[i];
         if(presum==0) return true;
         if(s.find(presum)!=s.end()) return true;
         s.insert(presum);
    }
        return false;
    }
};
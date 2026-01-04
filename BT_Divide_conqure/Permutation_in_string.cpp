class Solution {
  public:
   vector<string> solve(string& s,int i)
   {
       vector<string> arr;
       //base condition
       if(i>=s.length())
       {
          arr.push_back(s);
          return arr;
       }
       
       for(int j=i;j<s.length();j++)
       {
           swap(s[i],s[j]);
           vector<string> brr=solve(s,i+1);
           
           for(auto it:brr)
           {
           arr.push_back(it);
           }
           
           swap(s[i],s[j]);
       }
       return arr;
   }

    vector<string> permutation(string S) {
        vector<string> arr=solve(S,0);
        sort(arr.begin(),arr.end());
        return arr;
        
    }
};
// //Input:
// S = AAA
// Output: AAA AAA AAA AAA AAA AAA
// Explanation: There are total 6 permutations, as given in the output.
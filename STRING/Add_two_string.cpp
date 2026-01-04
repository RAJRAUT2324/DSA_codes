class Solution {
public:
    string addStrings(string num1, string num2) {
      int i=num1.length()-1;
      int j=num2.length()-1;
      string ans="";
      int carry=0;
      while(i>=0 || j>=0 || carry>0)
      {
        int csum=0;
        if(i>=0)
        {
            csum+=num1[i]-'0';
            i--;
        }
         if(j>=0)
        {
            csum+=num2[j]-'0';
            j--;
        }
        csum=carry+csum;
        int lastDigit=csum%10;
        char l=lastDigit+'0';
        ans.push_back(l);
        carry=csum/10;
        
      } 
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
// Input:

// num1='11', num2='123'
// Output:

// 134
// Explanation:Adding 11 and 123 gives 134.
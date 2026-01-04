// Reversing two vectors of digits.

// Converting each into an integer (N1, N2).

// Adding them.

// Then breaking the result back into digits and storing it in a vector.

#include <algorithm>
class Solution {
public:
    vector<int> addTwoNumbers(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int  n1=0,n2=0,sum=0;
     reverse(nums1.begin(),nums1.end());
     for(int i=0;i<nums1.size();i++)
     {
        
         n1=(n1*10)+nums1[i];
       
     }

     reverse(nums2.begin(),nums2.end());
     for(int i=0;i<nums2.size();i++)
     {
         
         n2=(n2*10)+nums2[i];
         
     }
       sum=n1+n2;
    if (sum == 0) {
            ans.push_back(0);
        } else {
            while (sum > 0) {
                ans.push_back(sum % 10);
                sum /= 10;
            }
        }
        return ans;
    }
};

// nums1 = [2, 4, 3]
// nums2 = [5, 6, 4]
// 7,0,8
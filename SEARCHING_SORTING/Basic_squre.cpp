class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=1;
        int e=num;
        bool ans=false;
        while(s<=e)
        {
            long long mid=s+(e-s)/2;
            if(mid*mid==num)
            {
                ans=true;
                break;
            }
            else if(mid*mid < num)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
};
367. Valid Perfect Square
class Solution {
public:
int bananaEaten(vector<int>& piles, int h,int k)
{
long long int totalbanana=0;
for(int i=0;i<piles.size();i++)
{
    totalbanana += ceil(piles[i] / (double)k);
}
return totalbanana <= h;
}
int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    int max=INT_MIN;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(max<piles[i])
        {
            max=piles[i];
        }
    }
    int s=1;
    int e=max;
    while(s<=e)
    {
        int mid=(s+e)/2;
        int k=mid;
        if(bananaEaten(piles,h,k))
        {
            ans=k;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}
};
// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

 

// Example 1:

// Input: piles = [3,6,7,11], h = 8
// Output: 4
// Example 2:

// Input: piles = [30,11,23,4,20], h = 5
// Output: 30
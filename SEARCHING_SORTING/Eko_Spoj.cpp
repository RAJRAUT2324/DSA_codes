class Solution {
public:
    bool sol(vector<int>& trees, int m, int mid)
    {
        long long wood = 0;

        for(int h : trees)
        {
            if(h > mid)
                wood += h - mid;
        }

        return wood >= m;
    }

    int maxSawHeight(vector<int>& trees, int m) {

        int s = 0;
        int e = *max_element(trees.begin(), trees.end());
        int ans = 0;

        while(s <= e)
        {
            int mid = s + (e - s) / 2;

            if(sol(trees, m, mid))
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        return ans;
    }
};
// EKO SPOJ
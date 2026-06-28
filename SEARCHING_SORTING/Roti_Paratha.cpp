class Solution {
public:

    bool canCook(int p, int cook[], int n, int mid){
        int pratas = 0;

        for(int i = 0; i < n; i++){
            int rank = cook[i];
            int time = 0;
            int j = 1;

            while(true){
                time += rank * j;
                if(time > mid) break;

                pratas++;
                j++;

                if(pratas >= p) return true;
            }
        }

        return false;
    }

    int minTimeToCookPratas(int p, int cook[], int n) {
        int s = 0;
        int e = 1e7; // safe upper bound
        int ans = -1;

        while(s <= e){
            int mid = s + (e - s) / 2;

            if(canCook(p, cook, n, mid)){
                ans = mid;
                e = mid - 1;
            } 
            else{
                s = mid + 1;
            }
        }

        return ans;
    }
};
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;

        for(auto x : stones)
        {
            pq.push(x); 
        }
        while(pq.size()>=1)
        {
            if(pq.size()==1)
            {
                return pq.top();
            }
            else
            {
                int p1=pq.top();
                pq.pop();
                int p2=pq.top();
                pq.pop();

                if(p1==p2)
                {
                    continue;
                }
                else if(p1!=p2)
                {
                    int val=p1-p2;
                    pq.push(val);
                }
            }
        }

        if(pq.size()==1)
            {
                return pq.top();
            }
        return 0;
    }
};
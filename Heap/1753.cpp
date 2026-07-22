class Solution {
public:
    int maximumScore(int a, int b, int c) {
     priority_queue<int>pq;
     pq.push(a);   
     pq.push(b);  
     pq.push(c);

     int score=0;
     while(pq.size()>1)
     {
        int p1=pq.top();
        pq.pop();
        int p2=pq.top();
        pq.pop();

        p1--;
        p2--;

        score++;
        if(p1>0)
        {
            pq.push(p1);
        }
        if(p2>0)
        {
            pq.push(p2);
        }
     }  
     return score;
    }
};
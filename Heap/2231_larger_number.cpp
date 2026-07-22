class Solution {
public:
    int largestInteger(int num) {
        vector<int>arr;
        string ans=to_string(num);
        for(int i=0;i<ans.size();i++)
        {
            int val=ans[i]-'0';
            arr.push_back(val);
        }
        priority_queue<int>even;
        priority_queue<int>odd;

        for( auto x : arr)
        {
            if(x%2==0)
            {
                even.push(x);
            }
            else
            {
                odd.push(x);
            }
        }

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                arr[i]=even.top();
                even.pop();
            }
            else
            {
                arr[i]=odd.top();
                odd.pop();
            }
        }
        int fans=0;
        for(auto x : arr)
        {
            fans=(fans*10)+x;
        }
        return fans;
    }
};
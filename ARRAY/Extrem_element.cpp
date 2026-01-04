class Solution { 
public: 
    vector<int>printExtremeElementsAlternately(vector<int>& arr) { 
        vector<int>a;
        int low=0;
        int last=arr.size()-1;
        sort(arr.begin(),arr.end());
        bool small=true;
        while(low<=last)
        {
            if(small)
            {
                a.push_back(arr[low]);
                low++;
                small=false;
            }
            else
            {
                a.push_back(arr[last]);
                last--;
                small=true;
            }
        }
        return a;
}
};
// main.cpp: In member function ‘std::vector<int> Solution::printExtremeElementsAlternately(std::vector<int>&)’:
// main.cpp:10:26: error: ‘std::vector<int>::iterator’ {aka ‘class __gnu_cxx::__normal_iterator<int*, std::vector<int> >’} has no member named ‘arr’
//    10 |         sort(arr.begin().arr.end());
//       |                          ^~~

// input [1, 3, 2, 4, 5]
// output 1 5 2 4 3
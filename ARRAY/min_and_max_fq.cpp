#include<climits>
class Solution {
public:
 int findMode( vector<int>& num) {
     vector<int>arr=num;
      sort(arr.begin(),arr.end());
      int n=arr.size();
      int mode=arr[0];
      int current=1;
      int count=1;
      for(int i=1;i<n;i++)
      {
        if(arr[i]==arr[i-1])
        {
            current++;
        }
        else
        {
            current=1;
        }
        if(current>count)
        {
          count=current;
          mode=arr[i];

        }

      }
      return mode;
    }

   int findlowest( vector<int>& num){
    vector<int>arr=num;
    sort(arr.begin(),arr.end());
    int current=1;
    int lowest=INT_MAX;
    int mode=arr[0];
    for(int i=1;i<arr.size();i++)
    {
      if(arr[i]==arr[i-1])
      {
        current++;
      }
      else
      {
        if(current<lowest)
        {
            lowest=current;
            mode=arr[i-1];
        }
        current=1;
      }
    }
     if(current<lowest)
        {
            lowest=current;
            mode=arr[arr.size()-1];
        }
    return mode;
    }


    pair<int, int> highestAndLowestFrequency(vector<int>& arr) {
       int heighestfq=findMode(arr);
       int lowestfq=findlowest(arr);
        return {heighestfq, lowestfq}; // Placeholder return; user will complete the logic
    }
};

// [4, 4, 1, 2, 2, 2, 3, 3, 3, 3]
// Output:


// Highest Frequency Element: 3
// Lowest Frequency Element: 1
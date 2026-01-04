class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickM=0;
        int lastM=0;

        int pickP=0;
        int lastP=0;

        int pickG=0;
        int lastG=0;

        for(int i=0;i<garbage.size();i++)
        {
            string currentGarbage=garbage[i];
            for(int j=0;j<garbage[i].length();j++)
            {
                if(currentGarbage[j]=='M')
                {
                     pickM++;
                     lastM=i;
                }
                 if(currentGarbage[j]=='G')
                {
                     pickG++;
                     lastG=i;
                }
                 if(currentGarbage[j]=='P')
                {
                     pickP++;
                     lastP=i;
                }
            }
        }
        int totalM=0;
        int totalP=0;
        int totalG=0;

        for(int i=0;i<lastM;i++)
        {
            totalM+=travel[i];
        }
           for(int i=0;i<lastP;i++)
        {
            totalP+=travel[i];
        }
           for(int i=0;i<lastG;i++)
        {
            totalG+=travel[i];
        }
        int total=totalM+totalP+totalG+pickP+pickM+pickG;
        return total;
    }

};

// Example 1:

// Input: garbage = ["G","P","GP","GG"], travel = [2,4,3]
// Output: 21
// Explanation:
// The paper garbage truck:
// 1. Travels from house 0 to house 1
// 2. Collects the paper garbage at house 1
// 3. Travels from house 1 to house 2
// 4. Collects the paper garbage at house 2
// Altogether, it takes 8 minutes to pick up all the paper garbage.
// The glass garbage truck:
// 1. Collects the glass garbage at house 0
// 2. Travels from house 0 to house 1
// 3. Travels from house 1 to house 2
// 4. Collects the glass garbage at house 2
// 5. Travels from house 2 to house 3
// 6. Collects the glass garbage at house 3
// Altogether, it takes 13 minutes to pick up all the glass garbage.
// Since there is no metal garbage, we do not need to consider the metal garbage truck.
// Therefore, it takes a total of 8 + 13 = 21 minutes to collect all the garbage.
// #include <iostream>
// #include<vector>
// using namespace std;
// int main()
// { 
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int nums[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             nums[j][3-i]=arr[i][j];
            
//         }
   
        
//     }
//       for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//            cout<<nums[i][j]<<" ";

            
//         }
//         cout<<endl;
        
//     }
// }

//just take the transpose of matrix and the reverse the row
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
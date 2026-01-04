class Solution {
public:
    vector<int> commonElements(vector<int>& array1, vector<int>& array2, vector<int>& array3){
        vector<int>arr;
        int n1=array1.size();
        int n2=array2.size();
        int n3=array3.size();
        int i,j,k;
        i=0;
        j=0;
        k=0;
        while(i<n1 && j<n2 && k<n3)
        {
            if(array1[i]==array2[j] && array2[j]==array3[k])
            {
                arr.push_back(array1[i]);
                i++;
                j++;
                k++;
            }
            else if(array1[i]<array2[j])
            {
                i++;
            }
            else if(array2[j]<array3[k])
            {
               j++;
            }
            else
            {
                k++;
            }
              
            
        }
        return arr;
    }
};

// Given three integer arrays array1, array2, and array3, sorted in non-decreasing order, find all the elements that are common to all three arrays.

// The result should be a list of these common elements, also sorted in non-decreasing order. Importantly, the list of common elements should not contain any duplicates.

// Example 1:
// Input:

// array1 = [1, 5, 10, 20, 40, 80]
// array2 = [6, 7, 20, 80, 100]
// array3 = [3, 4, 15, 20, 30, 70, 80, 120]
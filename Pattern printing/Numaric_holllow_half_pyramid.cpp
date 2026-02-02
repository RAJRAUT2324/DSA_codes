class Solution {
public:
    void printHollowHalfPyramid(int N) {
        int count=1;
        for(int i=1;i<=N;i++)
        {
            if(i==1)
            {
                cout<<1;   
            }
            else if(i==2)
            {
                cout<<12;
            }
            else if(i==N)
            {
                for(int j=1;j<=N;j++)
                {
                    cout<<j;
                }
            }
            else
            {
             cout<<1;
             for(int j=1;j<=count;j++)
             {
                cout<<" ";
             }
             count++;
             cout<<i;
            }
            cout<<endl;
        }
    }
};
510. Numeric Hollow Half Pyramid




Easy
0
Your next pattern challenge is the "Numeric Hollow Half Pyramid." This is a right-angled triangle made of numbers, but only its border is printed, leaving the inside hollow.

You are given an integer N that defines the height of the pyramid. The pattern follows these rules:

The i-th row always starts with the number 1 and ends with the number i.
For any row between the first and the last (1 < i < N), the space between the number 1 and the number i is filled with spaces.
The last row (i = N) is a solid sequence of numbers from 1 to N.
For example, if N = 5, the pattern should be:
1
12
1 3
1 4
12345

Input Format
The first line contains a single integer T, the number of test cases.
Each of the next T lines contains a single integer N.
Output Format
For each test case, print the numeric hollow half pyramid of height N. Print a blank line after each complete pattern.
Example 1:

Input:

N = 5

Output:

1
12
1 3
1  4
12345
Explanation:The numeric hollow half pyramid for N=5.
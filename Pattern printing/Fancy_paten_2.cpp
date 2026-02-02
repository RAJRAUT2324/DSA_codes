class Solution {
public:
    void printPalindromePyramid(int N) {
         for(int i=1;i<=N;i++)
         { int temp=0;
         for(int j=N-i;j>=1;j--)
         {
            cout<<" ";
         }
            for(int j=1;j<=i;j++)
            {
                cout<<j;
                temp=j;
            }
          temp=temp-1;
            for(int j=temp;j>=1;j--)
            {
                cout<<j;
            }
          temp=0;
            cout<<endl;
         }
    }
};

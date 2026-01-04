#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int col = 1; col <= row; col++)
        {
            cout << ch;
            ch++;
        }
        char ch2=ch;
       
            for (char col=ch2-2; col >='A'; col--) 
            {
               cout<<col;
             
            }
    
      
        cout << endl;
    }
 }